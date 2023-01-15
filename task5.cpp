#include <iostream>
using namespace std;

float studio(string month, float stay);
float discountStudio(float total, float stay, string month);
float apart(string month, float stay);
float discoutApart(float totalapart, float stay);

main()
{
    string month;
    float stay;
    float answer;
    float answer2;
    float answer3;
    float answer4;

    cout << "Enter month:  ";
    cin >> month;
    cout << "Enter stay:  ";
    cin >> stay;

    answer = studio(month, stay);
    answer2 = discountStudio(answer, stay, month);
    answer3 = apart(month, stay);
    answer4 = discoutApart(answer3, stay);

    cout << "Apartmrnt:  " << answer4 << "$" << endl;
    cout << "Studio:  " << answer2 << "$" << endl;
}

float studio(string month, float stay)
{
    float total;
    if (month == "may" || month == "october")
    {
        total = stay * 50;
    }

    if (month == "june" || month == "september")
    {
        total = stay * 75.20;
    }

    if (month == "july" || month == "august")
    {
        total = stay * 76;
    }
    return total;
}

float discountStudio(float total, float stay, string month)
{
    float totalPrice = total;
    if ((month == "may" || month == "october") && stay > 7)
    {
        totalPrice = total - ((total * 5) / 100);
    }

    if ((month == "may" || month == "october") && stay > 14)
    {
        totalPrice = total - ((total * 30) / 100);
    }

    if ((month == "june" || month == "september") && stay > 14)
    {
        totalPrice = total - ((total * 20) / 100);
    }

    return totalPrice;
}

float apart(string month, float stay)
{
    float totalapart;
    if (month == "may" || month == "october")
    {
        totalapart = stay * 65;
    }

    if (month == "june" || month == "september")
    {
        totalapart = stay * 68.70;
    }

    if (month == "july" || month == "august")
    {
        totalapart = stay * 77;
    }
    return totalapart;
}

float discoutApart(float totalapart, float stay)
{
    float discount;
    if (stay > 14)
    {
        discount = totalapart - ((totalapart * 10) / 100);
    }
    else if(stay < 14)
    {
        discount = totalapart;
    }
    return discount;
}
