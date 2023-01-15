#include <iostream>
using namespace std;
string sign(string month, int day);

main()
{
    string month;
    int day;
    string answer;

    cout << "Enter month:  ";
    cin >> month;
    cout << "Enter day:  ";
    cin >> day;

    answer = sign(month, day);
    cout << answer << endl;
}

string sign(string month, int day)
{
    string name;
    if(month == "march" && day >=21)
    {
        name = "aries";
    }

    else if(month == "april" && day <=19)
    {
        name = "aries";
    }

    else if(month == "april" && day >=20)
    {
        name = "taurus";
    }

    else if(month == "may" && day <=20)
    {
        name = "taurus";
    }

    else if(month == "may" && day >=21)
    {
        name = "gemini";
    }

    else if(month == "june" && day <=20)
    {
        name = "gemini";
    }

    else if(month == "june" && day >=20)
    {
        name = "cancer";
    }

    else if(month == "july" && day <=22)
    {
        name = "cancer";
    }

     else if(month == "june" && day >=23)
    {
        name = "leo";
    }

    else if(month == "august" && day <=22)
    {
        name = "leo";
    }

     else if(month == "august" && day >=23)
    {
        name = "virgo";
    }

    else if(month == "september" && day <=22)
    {
        name = "virgo";
    }

     else if(month == "september" && day >=23)
    {
        name = "libra";
    }

    else if(month == "october" && day <=22)
    {
        name = "libra";
    }

    else if(month == "october" && day >=23)
    {
        name = "scorpio";
    }

    else if(month == "november" && day <=21)
    {
        name = "scorpio";
    }

    else if(month == "november" && day >=22)
    {
        name = "sagittarius";
    }

    else if(month == "december" && day <=21)
    {
        name = "sagittarius";
    }

    else if(month == "december" && day >=22)
    {
        name = "capricorn";
    }

    else if(month == "january" && day <=19)
    {
        name = "capricorn";
    }

    else if(month == "january" && day >=20)
    {
        name = "aquarius";
    }

    else if(month == "february" && day <=18)
    {
        name = "aquarius";
    }

    else if(month == "february" && day >=19)
    {
        name = "pisces";
    }

    else if(month == "march" && day <=20)
    {
        name = "pisces";
    }
    return name;
}
