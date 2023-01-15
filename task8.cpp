#include <iostream>
using namespace std;
string isInside(int valueOfH, int valueOfX, int valueOfY);

main()
{
    int valueOfH;
    int valueOfX;
    int valueOfY;
    string result;

    cout << "Enter value of h:  ";
    cin >> valueOfH;
    cout << "Enter value of x:  ";
    cin >> valueOfX;
    cout << "Enter value of Y:  ";
    cin >> valueOfY;

    result = isInside(valueOfH,  valueOfX, valueOfY);
    cout << result << endl;
}

string isInside(int valueOfH, int valueOfX, int valueOfY)
{
    if ((valueOfX >= 0 && valueOfX <= (3 * valueOfH)) && (valueOfY >= 0 && valueOfY <= valueOfH))
    {
        if (valueOfX % valueOfH == 0 && valueOfY % valueOfH == 0)
        {
            return "Border";
        }
        else
        {
            return "Inside";
        }
    }

    else if ((valueOfX >= valueOfH && valueOfX <= (2 * valueOfH)) && (valueOfY >= valueOfH && valueOfY <= (valueOfH * 4)))
    {
        if (valueOfX % valueOfH == 0 && valueOfY % valueOfH == 0)
        {
            return "Border";
        }
        else
        {
            return "Inside";
        }
    }
    else
    {
        return "Outside";
    }
}
