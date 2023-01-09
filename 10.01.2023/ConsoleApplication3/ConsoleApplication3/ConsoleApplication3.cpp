#include<iostream>
#include<string>
#include<windows.h>
#include<fstream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "russian");

    string login, pas1, pas2;
    int ock = 0;
    cout << "Введите 1 для регистрации и 2 для авторизации" << endl;
    int log;
    cin >> log;
    if (log == 1)
    {
        bool key;
        key = false;
        do
        {
            cout << "Введите логин:" << endl;
            cin >> login;
            cout << "Введите пароль:" << endl;
            cin >> pas1;
            cout << "Введите пароль еще раз:" << endl;
            cin >> pas2;
            if (pas1 == pas2)
            {
                key = true;
            }
        } while (key != true);
        ofstream logi;
        logi.open("Users.txt", ofstream::app);
        logi << login << " " << pas1 << " " << ock << "\n";

    }
    else if (log == 2)
    {
        ifstream logi;
        logi.open("Users.txt");
        if (!logi.is_open())
        {
            cout << "ОШИБКА! Файл не найден." << endl;
        }
        else
        {
            cout << "Введите логин:" << endl;
            cin >> login;
            cout << "Введите пароль:" << endl;
            cin >> pas1;
        }
    }
    else
    {
        cout << "Ошибка!!!" << endl;
    }
}