// Data-Structure-LaB.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Fasil Tafesse
// Data Structures Spring, 2021.
// Due 1/20/21
// Lab 1 C++ Class Example
#include<iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int id; // declare ID
    string classes[4];
    int grades[100]; 
    float gpa; // declare the gpa
    int semester[100];
    int numberOfclasses;//the number of classes that the student is taking
public:
    //constructor
    Student() {}
    //set methods
    void setName()
    {
        cout << "Enter name" << endl;

        cin >> name;
    }
    void setId()
    {
        cout << "Enter ID" << endl;
        cin >> id;
    }
    void setClasses()
    {
        cout << "Enter number of classes" << endl;
        cin >> numberOfclasses;
        for (int i = 0;i < numberOfclasses;i++)
        {
            cout << "Enter Class " << i + 1 << endl;
            cin >> classes[i];
        }
    }
    void setGrades()
    {
        for (int i = 0;i < numberOfclasses;i++)
        {
            cout << "Enter Grade for class " << classes[i] << endl;
            cin >> grades[i];
        }
    }
    void setGPA()
    {
        cout << "Enter GPA" << endl;
        cin >> gpa;
    }
    void setSemester()
    {
        for (int i = 0;i < numberOfclasses;i++)
        {
            cout << "Enter Semester for class " << classes[i] << endl;
            cin >> semester[i];
        }
    }
    //getters
    void getID()
    {
        cout << "ID is " << id << endl;
    }
    void getGPA()
    {
        cout << "GPA is: " << gpa << endl;

    }
    void getName()
    {
        cout << "Name is: " << name << endl;
    }
    // displying array in its function
    void getClasses()
    {
        cout << "Classes are" << endl;
        for (int i = 0;i < numberOfclasses;i++)
        {
            cout << classes[i] << endl;
        }
    }
    void getSemester()
    {
        cout << "Semesters are" << endl;
        for (int i = 0;i < numberOfclasses;i++)
        {
            cout << semester[i] << endl;
        }
    }
    void getGrades()
    {
        cout << "Grades are" << endl;
        for (int i = 0;i < numberOfclasses;i++)
        {
            cout << grades[i] << endl;
        }
    }
    //calculate GPA
    void calculateGPA()
    {
        int sum = 0;
        for (int i = 0;i < numberOfclasses;i++)
        {
            sum = sum + grades[i];
        }
        gpa = sum / numberOfclasses;
    }
    //finding a grade
    void findGrade()
    {
        cout << "Enter Grade to find" << endl;
        int g;
        cin >> g;
        cout << "Classes of required grades are: " << endl;
        for (int i = 0;i < numberOfclasses;i++)
        {
            if (grades[i] == g)
            {
                cout << classes[i] << endl;
            }
        }
    }
};



int main()
{
    Student s;
    s.setName();
    s.setId();
    s.setClasses();
    s.setGrades();
    s.setSemester();
    s.calculateGPA();
    s.getID();
    s.getName();
    s.getClasses();
    s.getGrades();
    s.getSemester();
    s.getGPA();
    s.findGrade();
    system("pause");
    return 0;
}