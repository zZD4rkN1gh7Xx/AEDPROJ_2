//
// Created by Asus on 27/10/2023.
//

#include "Student.h"

#include<iostream>
#include<string>
#include<vector>

using namespace std;

Student::Student() {}

Student::Student(int studentCode, string name)
{
    this->studentCode_ = studentCode;
    this->name_ = name;
}

std::string Student::getName()
{
    return name_;
}
int Student::getStudentCode()
{
    return studentCode_;
}

void Student::addSchedule(Schedule schedule)
{
    this->schedule_ = schedule;
}

Schedule& Student::getSchedule()
{
    return schedule_;
}