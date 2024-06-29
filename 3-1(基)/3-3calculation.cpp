#include"3-3calculation.h"

void Calculation::setNumber1(int num)
{
    num1 = num;
}

void  Calculation::setNumber2(int num)
{
    num2 = num;
}

int  Calculation::getNumber1()
{
    return num1;
}

int  Calculation::getNumber2()
{
    return num2;
}
int  Calculation::add()
{
    return num1 + num2;
}
int  Calculation::sub()
{
    return num1- num2;
}