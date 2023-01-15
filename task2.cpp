#include <iostream>
using namespace std;
float totalMarks(float sub1, float sub2, float sub3, float sub4, float sub5);
float calculate(float marks);
string grade(float percentage);

main()
{
    string name;
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
    float answer1;
    float answer2;
    string answer3;

    cout << "Enter name:  ";
    cin >> name;
    cout << "Enter number of first subject:  ";
    cin >> sub1;
    cout << "Enter number of second subject:  ";
    cin >> sub2;
    cout << "Enter number of third subject:  ";
    cin >> sub3;
    cout << "Enter number of fourth subject:  ";
    cin >> sub4;
    cout << "Enter number of fifth subject:  ";
    cin >> sub5;

    answer1 = totalMarks(sub1, sub2, sub3, sub4, sub5);
    answer2 = calculate(answer1);
    answer3 = grade(answer2);

    

    cout << "Total marks is:  " << answer1 << " percentage is:  " << answer2 << " grade is:  " << answer3 << endl;


}

float totalMarks(float sub1, float sub2, float sub3, float sub4, float sub5)
{
    float marks;
    marks = sub1 + sub2 + sub3 + sub4 + sub5;
    return marks;
}

float calculate(float answer1)
{
    float percentage;
    percentage = (answer1 * 100) / 500;
    return percentage;

}

string grade(float percentage)
{
    string value;
    if(percentage >= 91 && percentage <= 100)
    {
      value = "A+";
    }

    if(percentage >= 81 && percentage <= 90)
    {
      value = "A";
    }

    if(percentage >= 71 && percentage <= 80)
    {
      value = "B+";
    }

    if(percentage >= 61 && percentage <= 70)
    {
      value = "B";
    }

    if(percentage >= 51 && percentage <= 60)
    {
      value = "C";
    }

    if(percentage >= 41 && percentage <= 50)
    {
      value = "D";
    }

    if(percentage >= 31 && percentage <= 40)
    {
      value = "F";
    }
    return value;
}
