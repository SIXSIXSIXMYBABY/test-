#include<iostream>

//function prototype
inline double multiplication (double n1, double n2);
inline double addication (double n1, double n2);
int main()
{
    using namespace std;
    double num1,num2;
    cout << "Enter two number:";
    cin >> num1 >> num2;
    cout << "num1 = " << num1 
         << " and num2 = " << num2;
    cout << endl;
    cout << "num1 * num2 = " 
         << multiplication(num1,num2)
         << endl;
    cout << "num1 + num2 = "
         << addication(num1,num2)
         << endl;

    return 0;
}

inline double multiplication (double n1, double n2)
{
    return n1 * n2;
}

inline double addication (double n1, double n2)
{
    return n1 + n2;
}