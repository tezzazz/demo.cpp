#include <iostream>
using namespace std;
int highest();
int even();
int pocket();
int prime();
int main()
{
    int amountmom;
    cout << "Enter mom's amount: ";
    cin >> amountmom;
    int amountdad;
    cout << "Enter dad's amount: ";
    cin >> amountdad;
    int total_amount = amountmom + amountdad;
    cout << "Total amount you get: " << total_amount << endl;
    highest();
    even();
    pocket();
    prime();
    return 0;
}
int highest()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a > b > c)
    {
        cout << "Highest number is: " << a;
    }
    else if (b > a > c)
    {
        cout << "Highest number is: " << b;
    }
    else
    {
        cout << "Highest number is: " << c << endl;
    }
    return 0;
}
int even()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "It's even!" << endl;
    }
    else
    {
        cout << "It's odd!" << endl;
    }
    return 0;
}
int pocket()
{
    int pocketmoney = 3000;
    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue;
        }
        if (pocketmoney == 0)
        {
            break;
        }
        pocketmoney -= 300;
        cout << date << endl;
    }
    return 0;
}
int prime()
{
    int numA, numB;
    cout << "Enter two numbers: ";
    cin >> numA, numB;
    for (int numA; numA <= numB; numA++)
    {
        cout << numA << endl;
    }
    return 0;
}