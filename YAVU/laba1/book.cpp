#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct publisher                //структура (Издатель)
{
  int year{};
  string name_of_publisher{};
  string city{};
};
struct Book                //структура (Книги)
{
  publisher izd;
  string name{};
  float price{};
  int number_of_pages{};
  string author{};
};

Book abc{ {2009, "shnorkel" ,"saratov" },"abc", 500, 250, "zubenko_michail" };    //Заполнение структур книги {{Издатель(Год, название издателя,
Book klinok{ {2017, "antonio", "omsk"}, "klinok", 1500, 500, "kakoy-to man" };    //город)}, название книги, цена, кол-во страниц, автор}
Book one_peace{ {1997, "shnorkel", "orsk"}, "one_peace", 100, 100 , "oda" };
Book buka{ { 2006, "avito","samara"}, "buka", 350, 180, "andrey" };
Book kubik{ {2017, "pipka", "sevastopol"}, "kubik", 190, 400, "malevich" };
Book bleach{ {1980, "manga", "orenburg"}, "bleach", 670, 1500, "tayto_kuba" };

                //Ввод переменных
int b,k = 0;
const int N = 6;
string a[] = {}; 



Book books[N] = { abc, klinok, one_peace, buka, bleach, kubik };     //Ввыод структур книги в массив

int main()
{
  setlocale(LC_ALL, "Russian");
  cout << "1 задание " << '\n';
  cout << " Фамилии авторов, чьи книги стоят более 100р." << '\n';      // 1 задание 
  for (int i = 1; i < N; i++)
  {
    if (books[i].price > 100)
      cout << books[i].author << '\n';
  }

  // "Издательства, в которых издано максимальное число книг, вышедших в заданном году"  //   2 задание 
  
  cout << " " << endl;          //Пропуск строчки (для красоты)

  cout << "3 задание" << '\n';
  cout << "Названия городов, где выпускаются самые дешевые книги" << '\n'; // 3 задание
  for (int i = 0; i < N; i++)
  {
    if (books[i].price < books[b].price)
    {
      b = i;
    }
  }
  cout << books[b].izd.city << '\n';

  cout << '\n';          //Пропуск строчки (для красоты)

  cout << "4 задание" << '\n';
  cout << "Фамилии авторов, книги которые имеют максимальную цену" << '\n'; // 4 задание
  for (int i = 0; i < N; i++)
  {
    if (books[i].price > books[b].price)
    {
      b = i;
    }
  }
  cout << books[b].author << '\n';

  cout << '\n';          //Пропуск строчки (для красоты)

  cout << "5 задание" << '\n';
  cout << "Фамилии автоворов, все книги которых имеют числ " ls; "о страниц, превышающее заданное" << '\n'; // 5 задание  
  for (int i = 0; i < N; i++)
  {
    if (books[i].number_of_pages > 500) 
      cout << books[i].author << '\n';
  }

  cout << '\n';          //Пропуск строчки (для красоты)

  // cout << "Города, где расположено максимальное число издательств с разными названиями" << '\n'; // 6 задание 
  cout << '\n';          //Пропуск строчки (для красоты)

  cout << "7 задание" << '\n';
  cout << "Названия книг, имеющих объем более 100 стр. и изданных в указанном городе" << '\n'; // 7 задание
  for (int i = 0; i < N; i++)
  {
    if (books[i].price > 100 && books[i].izd.city == "samara")
      cout << books[i].name << '\n';
  }
  cout << '\n';          //Пропуск строчки (для красоты)

  cout << "8 задание" << '\n';
  cout << "Названия городов, где издаются книги, стоимость которых менее 200 р. при объеме 100 стр." << '\n'; // 8 задание
  for (int i = 0; i < N; i++)
  {
    if (books[i].price < 200 && books[i].number_of_pages == 100)
      cout << books[i].izd.city << '\n';
  }
  cout << '\n';          //Пропуск строчки (для красоты)

  cout << "9 задание" << '\n';
  // cout << "Названия книг с самой низкой ценой, написанных указанным автором" << '\n'; // 9 задание


  cout << '\n';          //Пропуск строчки (для красоты)

for (int i = 0; i < N; i++)
    {
        if (books[i].izd.year == 1999)
        {
            a[i] = books[i].izd.name_of_publisher;
        }
    }
    sort();
    for (int i = 0; i < N; i++)
    {
        if (a[k] == a[i + 1])
        {
          cout << "ВСЕ КРУТО" ;
       }
    }
    cout << '\n';