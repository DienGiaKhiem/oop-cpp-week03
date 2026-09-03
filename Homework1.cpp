#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;

    do
    {
        cout << "Enter number of students (2-20): ";
        cin >> N;

        if (N < 2 || N > 20)
        {
            cout << "Invalid number. Please enter again.\n";
        }

    } while (N < 2 || N > 20);


    string names[20];
    string ids[20];
    string phones[20];


    for (int i = 0; i < N; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Name: ";
        cin >> names[i];

        cout << "ID: ";
        cin >> ids[i];

        cout << "Phone: ";
        cin >> phones[i];
    }


    cout << "\n===== STUDENT INFORMATION =====\n";

    for (int i = 0; i < N; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name: " << names[i] << endl;
        cout << "ID: " << ids[i] << endl;
        cout << "Phone: " << phones[i] << endl;
    }

    return 0;
}