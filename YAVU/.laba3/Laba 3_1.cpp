//ВАРИАНТ 1
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main() {
	srand(time(nullptr));
	const int n = 10;
	int a[n]; // Массив для хранения чисел

	for (int i = 0; i != n; i++) {
		a[i] = rand() % 20; // генерим случайные числа
		cout << a[i] << " ";
	}
	cout << endl;
	ofstream ff("fg.txt", ios_base::binary); //складываем бинарник
	ff.write(reinterpret_cast<char*>(&a), n * sizeof(int)); //пишем
	ff.close();
}