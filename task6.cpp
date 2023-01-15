#include <iostream>
using namespace std;

float bill(char customer, char code, float minute);

main()
{
    char customer;
    char code;
    float minute;
    float answer;

    cout << "Enter type of coustomer:  ";
    cin >> customer;
    cout << "Enter code:  ";
    cin >> code;
    cout << "Enter minute:  ";
    cin >> minute;

    answer = bill(customer, code, minute);
    cout << "The charges are:  " << answer << "$" << endl;
}

float bill(char customer, char code, float minute)
{
    float result;
    if (customer == 'r' && minute <= 50)
    {
        result = 10.00;
    }

    else if (customer == 'r' && minute > 50)
    {
        result = 10.00 + 0.20;
    }

    if (customer == 'p' && code == 'd' && minute <= 75)
    {
        result = 25.00;
    }
    if (customer == 'p' && code == 'd' && minute > 75)
    {
        result = 25.00 + 0.10;
    }

    else if (customer == 'p' && code == 'n' && minute <= 100)
    {
        result = 25.00;
    }
    else if (customer == 'P' && code == 'n' && minute > 100)
    {
        result = 25.00 + 0.05;
    }
    return result;
}