#include <iostream>
using namespace std;
float price(string product, string day, float amount);

main()
{
    string product;
    string day;
    float amount;
    float answer;

    cout << "Enter product:  ";
    cin >> product;
    cout << "Enter day:  ";
    cin >> day;
    cout << "Enter quantity:  ";
    cin >> amount;

    answer = price(product, day, amount);
    cout << answer << endl;
}

float price(string product, string day, float amount)
{
    float price;
    string result;

    if (product == "banana" && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = amount * 2.50;
    }

    else if (product == "apple" && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = amount * 1.20;
    }

    else if (product == "orange" && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = amount * 0.85;
    }

    else if (product == "bgrapefruit" && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = amount * 1.45;
    }

    else if (product == "kiwi" && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = amount * 2.70;
    }

    else if (product == "pineapple" && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = amount * 5.50;
    }

    else if (product == "grapes" && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = amount * 3.85;
    }

    if (product == "banana" && (day == "saturday" || day =="sunday"))
    {
        price = amount * 2.70;
    }

    else if (product == "apple" && (day == "saturday" || day == "sunday"))
    {
        price = amount * 1.25;
    }

    else if (product == "orange" && (day == "saturday" || day == "sunday"))
    {
        price = amount * 0.90;
    }

    else if (product == "grapefruit" && (day == "saturday" || day == "sunday"))
    {
        price = amount * 1.60;
    }

    else if (product == "kiwi" && (day == "saturday" || day == "sunday"))
    {
        price = amount * 3.00;
    }

    else if (product == "pineapple" && (day == "saturday" || day == "sunday"))
    {
        price = amount * 5.60;
    }

    else if (product == "grapes" && (day == "saturday" || day == "sunday"))
    {
        price = amount * 4.20;
    }
    
    return price;
}