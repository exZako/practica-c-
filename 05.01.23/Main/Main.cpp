#include <iostream>
#include <cmath>
#include <numeric> 
#include "Sum.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
#include "Square.h"
#include "Pow.h"
#include "Sin.h"
#include "Cos.h"
#include "Tang.h"
#include "Log.h"
#include "Cbrt.h"
#include <array>
#include <vector>
#include <list>
#include <queue>
using namespace std;




int main()
{
    setlocale(LC_ALL, "Ru-ru");

    std::cout << "5 января 2023\n" << std::endl;

    short int numberA = 5;
    unsigned short int numberB = 10;
    int numberC = -350;
    unsigned int numberD = 760;
    long numberE = -870;
    unsigned long numberF = 475;
    long long numberG = 899;

    double numberX = -10.99;
    double numberY = 0.00599;
    long double numberZ = 30.9999999;

    long double resultOfSum = numberSum(numberA, numberB, numberC, numberD);
    std::cout << "Сложение = " << resultOfSum << std::endl;

    long double resultOfSubtr = numberSubtr(numberA, numberB, numberC, numberD);
    std::cout << "Вычетания = " << resultOfSubtr << std::endl;

    long double resultOfMulti = numberMulti(numberA, numberB);
    std::cout << "Умножение = " << resultOfMulti << std::endl;

    long double resultOfDiv = numberDiv(numberA, numberB);
    std::cout << "Деление = " << resultOfDiv << std::endl;

    long double resultOfSquare= numberSquare(numberA);
    std::cout << "Возведение в квадрат = " << resultOfSquare << std::endl;

    long double resultOfPow = numberPow(numberA, numberB);
    std::cout << "Возведение в степень = " << resultOfPow << std::endl;

    long double resultOfSin = numberSin(numberA);
    std::cout << "Вычисление синуса = " << resultOfSin<< std::endl;

    long double resultOfCos = numberCos(numberA);
    std::cout << "Вычисление косинуса = " << resultOfCos<< std::endl;

    long double resultOfTang = numberTang(numberA);
    std::cout << "Вычисление тангенса = " << resultOfTang << std::endl;

    long double resultOfLog = numberLog(numberA);
    std::cout << "Вычисление логарифма = " << resultOfLog << std::endl;

    long double resultOfCbrt = numberCbrt(numberA);
    std::cout << "Вычисление куба = " << resultOfCbrt << std::endl;

    std::cout << "---------------------\n" << std::endl;
    

    std::cout << "Вывод результатов в Векторе" << std::endl;
    vector <long double> text(11);
    text[0] = resultOfSum;
    text[1] = resultOfSubtr;
    text[2] = resultOfMulti;
    text[3] = resultOfDiv;
    text[4] = resultOfSquare;
    text[5] = resultOfCbrt;
    text[6] = resultOfPow;
    text[7] = resultOfSin;
    text[8] = resultOfCos;
    text[9] = resultOfLog;
    text[10] = resultOfTang;

    for (int i = 0; i < 11; i++) {
        std::cout << text[i] << std::endl;
    }

    std::cout << "---------------------\n" << std::endl;



    std::cout << "Вывод результатов в Списке" << std::endl;

    std::list<long double> this_list(text.begin(), text.end());

    for (long double& i : this_list) {
        std::cout << i << " " << std::endl;
    }

    std::cout << "---------------------\n" << std::endl;

    std::cout << "Вывод кольцевого буфера" << std::endl;

    std::vector<long double> this_vector(this_list.begin(), this_list.end());

    for (long double& i : this_vector) {
        std::cout << i << " " << std::endl;
    }

    std::cout << "---------------------\n" << std::endl;

   


    int switch_on = 0;

    std::cout << "Выберите действие от 1 до 6" << std::endl;
    std::cout << "1. Добавить элемент после второго элемента" << std::endl;
    std::cout << "2. Удалить последний элемент" << std::endl;
    std::cout << "3. Удалить все элементы" << std::endl;
    std::cout << "4. Удалить с третьего элемента до последнего" << std::endl;
    std::cout << "5. Добавления элементов в начало и конец" << std::endl;
    std::cout << "6. Проверка вектора на пустоту" << std::endl;
    std::cout << "7. LIST SWAP" << std::endl;



    std::cout << std::endl;

    std::cout << "Вы выбрали: ";

    std::cin >> switch_on;

    std::cout << std::endl;


    switch (switch_on)
    {
    case 1: {
        std::cout << "Добавляем  элемент после второго элемента" << std::endl;
        auto iter1 = text.cbegin();
        text.insert(iter1 + 2, 8);

        for (int i = 0; i < 11; i++) {
            std::cout << text[i] << std::endl;
        }
    }
          break;

    case 2: {
        std::cout << "Удаление последнего элемента вектора" << std::endl;
        text.pop_back();

        for (int i = 0; i < 11; i++) {
            std::cout << text[i] << std::endl;
        }

    }
          break;

    case 3: {
        std::cout << "Элементы удалены" << std::endl;
        text.clear();

     

    }
          break;

    case 4: {
        int n;
        std::cout << "Введите число: ";
        std::cin >> n;
        int m = n + 1;
        text.erase(text.begin() + n, text.end() - 1); // удаляем с третьего элемента до последнего
        for (int i = 0; i < m; i++) {
            std::cout << text[i] << std::endl;
        }

    }
          break;

    case 5: {
        int g;
        std::cout << "Введите число для добавления элемента в начало: ";
        std::cin >> g;
        int h;
        std::cout << "Введите число для добавления элемента в конец: ";
        std::cin >> h;
        std::cout << "Добавили элемент в начало и в конец" << std::endl;
        text.insert(text.begin(), g);  // добавили элемент в начало
        text.insert(text.end(), h);  // добавили элемент в конец
        for (int i = 0; i < text.size(); i++) {
            cout << text[i] << " " << std::endl;
        }

    }
          break;



    case 6: {

        if (text.empty()) {
            std::cout << "Вектор пустой" << std::endl;
        }
        else {
            std::cout << "Вектор не пустой" << std::endl;
        }

    case 7: {
        std::list<long double> this_list2 = { 6, 7, 8, 9 };
        this_list.swap(this_list2);
        for (long double& i : this_list) {
            std::cout << i << " " << std::endl;
        }
    }
          break;

    }





          return 0;



    default:
        std::cout << "выполнить, если ни один вариант не подошел" << std::endl;
        
            break;

          break;

          return 0;
        
   


       
    }

    


    
 

    std::cout << std::endl;
    std::cout << "Вычисления закончены!" << std::endl;
    std::cout << std::endl;
}