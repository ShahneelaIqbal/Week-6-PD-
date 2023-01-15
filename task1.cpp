#include <iostream>
using namespace std;
string activity (string temperature, string humidity);

main()
{
    string temperature;
    string humidity;
    string answer;

    cout << "Enter temperatur:  ";
    cin >> temperature;
    cout << "Enter humidity:  ";
    cin >> humidity;
    
    answer = activity (temperature, humidity);
    cout << answer << endl;

}

string activity (string temperature, string humidity)
{
    string print;
    if(temperature == "warm" && humidity == "dry")
    {
        print = "Play tennis";
    }

   else if(temperature == "warm" && humidity == "humid")
    {
        print = "Swim";
    }

    else if(temperature == "cold" && humidity == "dry")
    {
        print = "Play basketball";
    } 
    else if(temperature == "cold" && humidity == "humid")
    {
        print = "Watch tv";
    }
    else
    {

    }
    return print;
}