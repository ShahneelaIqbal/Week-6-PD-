#include <iostream>
using namespace std;

int convertHoursAndMinutesIntoMinutes(int hours, int minutes);
string difference(int time1, int time2);

main()
{
    int hourOfExam;
    int minuteOfExam;
    int hourOfArrival;
    int minuteOfArrival;

    int answer;
    int answer1;
    int answer2;

    cout << "Exam starting time(hour):  ";
    cin >> hourOfExam;
    cout << "Exam starting time(minute):  ";
    cin >> minuteOfExam;
    cout << "Time of arrival(hour):  ";
    cin >> hourOfArrival;
    cout << "Time of arrival(minute):  ";
    cin >> minuteOfArrival;

    int examTotalMinutes = convertHoursAndMinutesIntoMinutes(hourOfExam, minuteOfExam);
    int arrivalTotalMinutes = convertHoursAndMinutesIntoMinutes(hourOfArrival, minuteOfArrival);
    int totalTime = examTotalMinutes - arrivalTotalMinutes;
    int remainingHours = (totalTime / 60) % 24;
    int remainingMinutes = totalTime % 60;

    if (totalTime == 0)
    {
        cout << "On Time";
    }

    else if (totalTime > 0 && totalTime <= 30)
    {
        cout << "On Time\n"
             << remainingMinutes << " minutes before the start";
    }

    else if (totalTime > 30)
    {
        if (remainingHours == 0)
            cout << "Early\n"
                 << remainingMinutes << " minutes before the start";
        else
        {
            cout << "Early\n"
                 << remainingHours << ":" << remainingMinutes << " hours before the start";
        }
    }

    else
    {
        remainingMinutes = -remainingMinutes;
        remainingHours = -remainingHours;

        if (remainingHours == 0)
            cout << "Late\n"
                 << remainingMinutes << " minutes after the start";
        else
        {
            cout << "Late\n"
                 << remainingHours << ":" << remainingMinutes << " hours after the start";
        }
    }
}

int convertHoursAndMinutesIntoMinutes(int hours, int minutes)
{
    int time;
    time = (hours * 60) + minutes;
    return time;
}
