// CODSOFT TASK 3
#include <iostream>
using namespace std;

// DISPLAY FUNCTION
void display(int size, string names[], char grades[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << i + 1 << " - Name: " << names[i] << ", Grade: " << grades[i] << endl;
    }
}

// AVERAGE GRADE CALCULATOR FUNCTION
char averageGrade(int size, char grades[])
{
    float sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += static_cast<float>(grades[i]);
    }
    float avg = sum / size;
    return static_cast<char>(avg);
}

// LOWEST GRADE CALCULATOR FUNCTION
char lowestGrade(int size, char grades[])
{
    char lowest = grades[0];
    for (int i = 1; i < size; i++)
    {
        if (grades[i] > lowest)
        {
            lowest = grades[i];
        }
    }
    return lowest;
}

// HIGHEST GRADE CALCULATOR FUNCTION
char highestGrade(int size, char grades[])
{
    char highest = grades[0];
    for (int i = 1; i < size; i++)
    {
        if (grades[i] < highest)
        {
            highest = grades[i];
        }
    }
    return highest;
}

// MAIN FUNCTION
int main()
{
    int students;
    cout << "Enter the numbr of students: ";
    cin >> students;
    cout << endl;
    string names[students + 1];
    char grades[students + 1];

    cout << "Enter the student names and then there grades" << endl;
    for (int i = 0; i < students; i++)
    {
        cout << "Student " << i + 1 << " Name: ";
        cin >> names[i];
        cout << "Student " << i + 1 << " Grade: ";
        cin >> grades[i];
    }

    display(students, names, grades);

    char average = averageGrade(students, grades);
    char lowest = lowestGrade(students, grades);
    char highest = highestGrade(students, grades);

    cout << "Average Grade: " << average << endl;
    cout << "Highest Grade: " << highest << endl;
    cout << "Lowest Grade: " << lowest << endl;

    return 0;
}
