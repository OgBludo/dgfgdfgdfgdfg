#include <map>
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");
    map<int, string> scrable =
    { {10,"Иеруалимов Артём Сергеевич"},
      {3,"Иван Иванов Иванушкин"},
      {8,"Денис Денисович Денисов"},
      {7,"Кирилл Кириллович Кириллов"},
      {14,"ПОН ПОНОВИЧ ПОНОВ"}
    };
    int k = 0;
    int i=0;
    cout << "Введите айди: ";
    cin >> k;
    for (auto pair : scrable)
    {
        if (k <= pair.first)
        {
            cout << "Id :" << pair.first << "  Fio :" << pair.second << endl;
            i++;
        }

    }
    cout << "Всего людей удв условию: " << i;
}