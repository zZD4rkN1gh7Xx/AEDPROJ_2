//
// Created by Asus on 27/10/2023.
//
#include "Class.h"

#include "Class.h"
#include <iostream>
#include <string>

using namespace std;

Classe::Classe(){};
Classe::Classe(string code)
{
    this->classCode_ = code;
}

void Classe::setClass(string day, float hour, float duration, string type)
{
    this->day_ = day;
    this->hour_ = hour;
    this->duration_ = duration;
    this->type_ = type;
}

string Classe::getClassCode(void)
{
    return classCode_;
}

string Classe::getDay(void)
{
    return day_;
}

int Classe::getHour()
{
    return hour_;
}

int Classe::getDuration(void)
{
    return duration_;
}

string Classe::getType(void)
{
    return type_;
}

void Classe::showClass(Classe class_to_show)
{
    cout << "The class Code is: " << getClassCode() << endl;
    cout << "the class is on a: " << getDay() << " and it is a: " << getType() << ". It has a duration of: " << getDuration() << " and it starts at: " << getHour() << endl;
}