#include <stdio.h>
#include<string.h>
double add(double x, double y)
{
    return x + y;
}
double sub(double x, double y)
{
    return x - y;
}
double mul(double x, double y)
{
    return x * y;
}
double div(double x, double y)
{
    if (y == 0.0)
    {
        printf("Wrong!Division by zero!");
        return 0;
    }
    return x / y;
}
void clac(double(*p)(double, double), double x, double y, char z)
{

    double result = 0;
    result = p(x, y);
    if (result != 0)
    {
        printf("%.4lf%c%.4lf=%.4lf\n", x, z, y, result);
    }
}
int main()
{
    double result = 0;
    double x = 0;
    double y = 0;
    char z;
    while (scanf_s("%lf%c%lf", &x, &z,1, &y) != EOF)
    {
        switch (z)
        {
        case '+':
        {
            clac(add, x, y, z);
            break;
        }
        case '-':
        {
            clac(sub, x, y, z);
            break;
        }
        case '*':
        {
            clac(mul, x, y, z);
            break;
        }
        case '/':
        {
            clac(div, x, y, z);
            break;
        }
        default:
        {
            printf("Invalid operation!");
            break;
        }
        }
    }
    return 0;
}