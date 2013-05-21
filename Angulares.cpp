// Dauble.cpp: определяет точку входа для консольного приложения.
//
#include"stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
setlocale(0,"Russian");
char dolube1=34;
char dolube2=5;
char dolube3=10;

cout<<"Введите первый кут: ";
cin>>dolube1;
cout<<"Введите втарой кут: ";
cin>>dolube2;
cout<<"Введите третий кут: ";
cin>>dolube3;
cout<<"Сумма: %lf."<<dolube1<<dolube2<<dolube3;
  return 0;
}

