// laba6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h> 
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c, x, F;
	printf("¬вед≥ть зм≥нн≥:");
   scanf_s("%lf %lf %lf %lf",&a,&b,&c,&x);
   if (x < 0 && b != 0) { F = a * x * x; }
   else if (x > 0 && b == 0 && x != c) { F = (x - a) / (x - c); }
   else if (c > 0) { F = x / c; }
   else { printf("ERROR");};
   printf("‘ункц≥€ дор≥внюЇ: %lf", F);
}
