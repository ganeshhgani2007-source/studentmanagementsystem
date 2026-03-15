#include "student.h"

void addStudent()
{
    ofstream file("students.txt", ios::app);

    Student s;

    cout << "Enter Student ID: ";
    cin >> s.id;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Marks: ";
    cin >> s.marks;

    file << s.id << " " << s.name << " " << s.marks << endl;

    file.close();

    cout << "Student added successfully\n";
}

void viewStudents()
{
    ifstream file("students.txt");

    Student s;

    cout << "\nStudent Records\n";
    cout << "--------------------\n";

    while(file >> s.id >> s.name >> s.marks)
    {
        cout << "ID: " << s.id << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
        cout << "--------------------\n";
    }

    file.close();
}

void searchStudent()
{
    ifstream file("students.txt");

    int searchID;
    bool found = false;

    cout << "Enter Student ID to search: ";
    cin >> searchID;

    Student s;

    while(file >> s.id >> s.name >> s.marks)
    {
        if(s.id == searchID)
        {
            cout << "Student Found\n";
            cout << "Name: " << s.name << endl;
            cout << "Marks: " << s.marks << endl;

            found = true;
            break;
        }
    }

    if(!found)
        cout << "Student not found\n";

    file.close();
}

void deleteStudent()
{
    ifstream file("students.txt");
    ofstream temp("temp.txt");

    int deleteID;
    bool found = false;

    cout << "Enter Student ID to delete: ";
    cin >> deleteID;

    Student s;

    while(file >> s.id >> s.name >> s.marks)
    {
        if(s.id == deleteID)
        {
            found = true;
            continue;
        }

        temp << s.id << " " << s.name << " " << s.marks << endl;
    }

    file.close();
    temp.close();

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if(found)
        cout << "Student deleted successfully\n";
    else
        cout << "Student not found\n";
}