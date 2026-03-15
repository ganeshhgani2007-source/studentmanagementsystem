#include<iostream>
#include "student.h"

using namespace std;

int main()
{
    int choice;
    while(true)
    {
        cout << " \n====student management system====\n";
        cout << "1. Add student\n";
        cout << "2. view student\n";
        cout << "3. search student\n";
        cout << "4. delete student\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1 :
                    addStudent();
                    break;
            case 2 :
                    viewStudents();
                    break;
            case 3 : 
                    searchStudent();
                    break;
            case 4 :      
                    deleteStudent();
                    break;
            case 5 : 
                    cout << "existing program....\n";
                    return 0;
            default : 
                    cout << "invalid choice try again.\n";
        }
    }
}