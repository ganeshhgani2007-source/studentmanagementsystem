#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student
{
    int id;
    string name;
    float marks;
};

void addStudent();
void viewStudents();
void searchStudent();
void deleteStudent();

#endif