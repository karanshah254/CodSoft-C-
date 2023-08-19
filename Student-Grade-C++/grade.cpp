/*

By CodeSoft

Create a program that manages student grades. Allow the user
to input student names and their corresponding grades.
Calculate the average grade and display it along with the highest
and lowest grades

*/

#include <iostream>
using namespace std;

int main()
{
    char name[100];
    int grade[10], i, n;
    float avg, f_avg;
    int roll_no[100];

    cout << "\n|----------Welcome to VGEC's Student Grading System----------|";

    fflush(stdin);
    cout << "\n\nThis will display all the neccesary details of Students of VGEC, Chandkheda .";

    cout << "\n\nEnter Number of Students whose records is to be displayed on screen : ";
    cin >> n;

    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "\nEnter Full Name of Student " << i + 1 << " : ";
        cin >> name[i];
    }

    cout << "\n";

    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Roll Number / ID Number of Student " << i + 1 << " : ";
        cin >> roll_no[i];
    }

    avg = 0;

    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "\n\nEnter Overall Grade / Percentage of Student " << i + 1 << " : ";
        cin >> grade[i];

        avg = ((avg) + (grade[i]));

        f_avg = (avg) / n;
    }

    int max = grade[0];
    int min = grade[0];

    fflush(stdin);

    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        if (grade[i] > max)
        {
            max = grade[i];
        }
        else if (grade[i] < min)
        {
            min = grade[i];
        }
    }

    fflush(stdin);

    cout << "\n|--Final Display--|";

    for (int i = 0; i < n; i++)
    {
        cout << "\n\nThe ID of Student " << i + 1 << " is " << roll_no[i];
    }

    cout << "\n\nAverage Grades are " << f_avg << ".";

    fflush(stdin);
    cout << "\n\nMaximum = " << max << " percentage";

    cout << "\n\nMinimum = " << min << " percentage";

    cout << "\n\n|----------Thank You----------|";

    return 0;
}