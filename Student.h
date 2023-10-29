//
// Created by Asus on 27/10/2023.
//

#ifndef UNTITLED_STUDENT_H
#define UNTITLED_STUDENT_H

#include"Subject.h"
#include<iostream>
#include<string>
#include<vector>
#include "Schedule.h"

using namespace std;


class Student
{
private:
    string name_;
    int studentCode_;
    Schedule schedule_;

public:
    Student();
    Student(int studentCode, string name);
    string getName();
    int getStudentCode();
    void addSchedule(Schedule schedule); // ainda falta pensar em como e que vou por este a entrar nos subjects e ver as suas coisas
    Schedule& getSchedule();
};
#endif //UNTITLED_STUDENT_H
