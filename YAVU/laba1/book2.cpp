#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct publisher      //Структура "Издательство"
{
 int year{};
 string name_of_publisher{};
 string city{};
};
struct Book {       //Структура "Книги" с подструктурой "Издательство"
 publisher Publ; 
 string name{};
 float cost{};
 int number_of_pages{};
 string author{};
};
publisher Togbook{2000, "Togliatti's books", "Togliatti"};
publisher Gagoorn{ 2005, "Gagoorn", "Moskva" };
publisher Pit{ 19969, "Piter redaction", "St.Peterburg" };
publisher Togbook1{ 1999, "Togliatti's books", "Togliatti" };
publisher RuKnig{ 1999, "Russkaia_kniga", "Samara" };
publisher izd[5] = { Togbook, Gagoorn, Pit, Togbook1, RuKnig };

Book Don{RuKnig, "Don", 390, 356, "Turgenev" };         //Описание всех имеющихся книг
Book Volga{ RuKnig, "Volga", 750, 1320, "Dostoevskiy" };       //Год издания, издательство, город,
Book Lena{Gagoorn, "Lena", 89, 134, "Pipooga" };        //название, цена, кол-во страниц, автор
Book Oka{Gagoorn, "Oka", 952, 895, "Zhigano" };
Book Dnepr{Togbook1, "Dnepr", 1187, 256, "Turgenev" };
Book Onega{ Pit, "Onega", 87, 123, "Igorina" };

string h;                                                                    //Задание переменных
int d,k = 0;
const int N = 6;
int o;
string a[6] = {};
Book books[N] = {Don, Volga, Lena, Oka, Dnepr, Onega};     //Внесение книг в массив


int main()
{
 setlocale(LC_ALL, "russian");
 cout << "Задание 1:" << '\n';
 cout << "Фамилии авторов, чьи книги стоят более 100 р. : " << '\n';   //Первое задание
 for (int i = 0; i < N; i++)
 {
  if (books[i].cost > 100)
   cout << books[i].author << '\n';
 }
 cout << '\n';
 cout << "Задание 2:" << '\n';
 cout << "Издательство, у которого вышло больше всего книг в 1999 году: " << '\n';            //Второе задание
 int MM;
 int arry1[N];
 int n=0;
 for (int i = 0; i < N; i++){
 for (int t = 0; t < N; t++) 
 {
  if ((books[t].Publ.year == 1999) && (books[t].Publ.name_of_publisher == books[i].Publ.name_of_publisher))
  {
   n++;
  }
  arry1[i]=n;
  
 }
 n=0;
 cout << arry1[i]<<'\n';
 }
 for (int t = 0; t < N; t++) {
	if (arry1[0]<=arry1[t]) 
	MM = t;
 }
 cout << books[MM].Publ.name_of_publisher << endl;
 cout << '\n';
 cout << "Задание 3:" << '\n';
 cout << "Название города, где выпускаются самые дешевые книги: " << '\n';   //Третье задание
 for (int i = 0; i < N; i++)
 {
  if (books[i].cost < books[d].cost)
   d = i;
 } 
 cout << books[d].Publ.city << '\n';
 cout << '\n';
 cout << "Задание 4:" << '\n';
 cout << "Фамилия авторва, книги которых имеют максимальную цену: " << '\n';   //Четвёртое задание
 d = 0;
 for (int i = 0; i < N; i++)
 {
  if (books[i].cost > books[d].cost)
   d = i;
 }
 cout << books[d].author << '\n';
 cout << '\n';
 cout << "Задание 5:" << '\n';
 cout << "Введите кол-во страниц: ";
 cin >> d;
 cout << "Фамилии авторов, все книги которых имеют число страниц, превышающее " << d << " страниц" << '\n';   //Пятое задание
 for (int i = 0; i < N; i++)
 {
  if (books[i].number_of_pages > d)
   cout << books[i].author << '\n';
 }
 cout << '\n';
 cout << "Задание 6:" << '\n';
                              //Задание №6
 cout << "Города, где расположено максимальное число издательств с разными названиями." << endl;
 int d = 0;
 int nn = 0;
 int arr[N] = {};
 for (int i = 0; i < 5; i++)
 {
  if (izd[d].name_of_publisher != izd[i].name_of_publisher)
  {
   n++;
  }
  else
   d++;
  arr[i] = n;
 }
 for (int i = 0; i < N; i++)
  if (arr[i] < arr[i + 1])
   nn = i;
 cout << izd[nn].city << endl;
 cout << '\n';
 cout << "Задание 7:" << '\n';
 cout << "Введите город из списка: Togliatti, St.Peterburg, Moskva, Samara - ";   //Седьмое задание
 cin >> h;
 cout << "Названия книг, имеющих объем более 100 стр. и изданных в " << h << '\n';
 for (int i = 0; i < N; i++)
 {
  if (books[i].number_of_pages > 100 && books[i].Publ.city == h)
   cout << books[i].name << '\n';
 }
 cout << '\n';
 cout << "Задание 8:" << '\n';
cout << "Названия городов, где издаются книги, стоимость которых менее 200 р. при объеме более 100 стр." << '\n';   //Восьмое задание
 for (int i = 0; i < N; i++)
 {
  if (books[i].cost < 200 && books[i].number_of_pages > 100)
   cout << books[i].Publ.city << '\n';
 }
 cout << '\n';
 cout << "Задание 9:" << '\n';
 cout << "Выберите автора из списка: Turgenev, Dostoevskiy, Pipooga, Zhigano, Igorina - ";            //Девятое задание
 cin >> h;
 cout << "Название книги с самой низкой ценой, написанных " << h << '\n';
 int min;
 for (int t = 0; t < N; t++) {
  if (books[t].author == h)
	min = books[t].cost;
 }
 for (int i = 0; i < N; i++)
 {
  if ((books[i].cost <= min) && (books[i].author == h)) 
  {
   cout << books[i].name << " - " << books[i].author << " стоимостью " << books[i].cost << " рублей" << endl;
  }
 }
 return 0;
}