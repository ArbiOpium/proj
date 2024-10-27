#include "Student.h"
#include "Programmer.h"
#include <iostream>
using namespace std;

int main()
{
    Human* people[2];

    people[0] = new Student("Lincoln Burrows", 22, 3000.0, "Fox River");

    people[1] = new Student("Michael Scoffield", 20, 2300.0, "Fox River");

    for (int i = 0; i < 2; ++i)
    {
        people[i]->Output();
        people[i]->Salary();
        cout << endl;
    }

    for (int i = 0; i < 2; ++i)
    {
        delete people[i];
    }

    return 0;
}