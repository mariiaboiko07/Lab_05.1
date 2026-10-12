// Lab_05_1.cpp
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз
// Варіант 1

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Прототип функції
double k(const double x, const double y);

int main()
{
    double p, q;

    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    // Обчислення за формулою:
    // c = ( k(1 + p*q, q*q) + k*k(p, p*p) ) / ( 1 + k(p*q + q*q, p) )
    double k1 = k(1 + p * q, q * q);
    double k2 = k(p, p * p);
    double k3 = k(p * q + q * q, p);

    double c = (k1 + k2 * k2) / (1 + k3);

    cout << fixed << setprecision(5);
    cout << "c = " << c << endl;

    return 0;
}

// Визначення функції k(x, y) = x / (1 + sin^2(y)) + y / (1 + x^2)
double k(const double x, const double y)
{
    return (x / (1.0 + sin(y) * sin(y))) + (y / (1.0 + x * x));
}