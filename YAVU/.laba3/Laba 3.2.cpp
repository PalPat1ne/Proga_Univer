#include <iostream>
#include <fstream>
#include <algorithm>
#include <locale>
using namespace std;

const int n = 10;
int a[n];

int main() {
	setlocale(LC_ALL, "russian");
	ifstream fd;
	fd.open("fg.txt", ios::binary); //читаем бинарник
	fd.read(reinterpret_cast<char*>(&a), n * sizeof(int));
	int odd_numbers[n];
	int ev_numbers[n];
	int j = 0;
	int k = 0;

	//сортировка по чет/нечет + запись в файл output.txt
	ofstream output;
	output.open("output.txt");
	if (output.is_open()) {
		output << "Результат сборки программы Laba 3.2, Var.1" << endl;
		for (int i = 0; i != n; i++)
			if (a[i] % 2 == 0) {
				odd_numbers[j] = a[i];
				j++;
			}
			else {
				ev_numbers[k] = a[i];
				k++;
			}

		for (int i = 0; i != j; i++) {
			output << odd_numbers[i] << " ";
		}
		output << endl;
		for (int i = 0; i != k; i++) {
			output << ev_numbers[i] << " ";
		}
		output << endl;
		int *max = max_element(odd_numbers, odd_numbers + j);
		int *min = min_element(ev_numbers, ev_numbers + k);
		output << "Наибольший чётный " << *max << endl;
		output << "Наименьший нечётный " << *min << endl;
		cout << "Выходные данные находятся в файле output.txt" << endl;
	}

	system("PAUSE");
	return 0;
}