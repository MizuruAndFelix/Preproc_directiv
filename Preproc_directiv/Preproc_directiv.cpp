#include <iostream>
#include "numEnter.h" //NumEnter::numEnter(double numX, int count)
#include "Sum.h"      //Sum::numSum(double num1, double num2)
#include <locale.h>
#include <windows.h>
using namespace std;

#define MODE 2
#if !defined MODE
#error "Eror! требуется переопределить MODE!" 
#endif 

int main()
{
    setlocale(LC_ALL, ".UTF8");
    setlocale(LC_ALL, "Russian"); 
    system("chcp 1251");
    SetConsoleCP(1251); //перевод на русский
    SetConsoleOutputCP(1251);

cout << "start\n";


#ifdef MODE
#if MODE == 1
    //
   cout << endl << "\nРаботаю в режиме тренировки\n";
    //

//
#elif MODE == 2
    //
    cout << "\nРаботаю в боевом режиме\n";
    double num1 = 0;
    double num2 = 0;
    int count = 0;
    bool numMode = true;

    ++count;//вроде сработало
    num1 = NumEnter::numEnter(num1, count);
    ++count;
    num2 = NumEnter::numEnter(num2, count);
    cout << "Результат сложения: " << Sum::numSum(num1, num2);
    //
#else MODE
    //
    cout << "\nНеизвестный режим!\n" << "Закрываю программу!\n";
    //
//

//----//
#endif//
#endif//
//----//

#ifndef MODE
    //
    cout << "\nНе включен #error и не определён #define MODE.\n";
    //
#endif

    cout << "\n\nEnd";
}