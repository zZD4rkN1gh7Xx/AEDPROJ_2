//
// Created by Asus on 27/10/2023.
//
#include "Course.h"

using namespace std;

Course::Course(){} // default constructor

void Course::addStudent(Student student_)
{
    studentMap[student_.getStudentCode()] = student_; // falta ver se da para adicionar a pessoa
}

Student& Course::getStudent(int studentCode)
{
    return studentMap[studentCode];
}

unordered_map<int, Student> Course::getAllStudents()
{
    return studentMap;
}

void Course::addSubject(Subject subject)
{
    Subjects[subject.getSubjectCode()] = subject;
}

unordered_map<string, Subject> Course::getSubjects()
{
        return Subjects;
}

Subject& Course::getSubject(string UcCode)
{
    return Subjects[UcCode];
}

void Course::showSubjects()
{
        for(auto it : getSubjects())
        {
            cout << "Subject : " << it.first << endl;
        }
}