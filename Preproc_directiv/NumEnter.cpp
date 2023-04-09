#pragma once
#include "numEnter.h"
#include <iostream>
using namespace std;
double NumEnter::numEnter(double num, int count)
{
    cout << "¬ведите число " << count << ": ";
    cin >> num;
    return num;
}