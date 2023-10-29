//
// Created by Asus on 27/10/2023.
//

#include "Subject.h"
#include <iostream>
#include <string>
#include "Class.h"
#include <unordered_map>

using namespace std;

Subject::Subject() {};

Subject::Subject(string code)
{
    this->Code_ = code;
}

string Subject::getSubjectCode() {
    return Code_;
}

void Subject::addClass(Classe class_)
{
    subjectClasses[class_.getClassCode()] = class_;
}

void Subject::showSubject()
{
    cout << "Subject with code: " << getSubjectCode() << endl;

    for(auto& pair : subjectClasses)
    {
        cout << "class: " << pair.first << endl;
    }
}

unordered_map<string, Classe>& Subject::getSubjectClasses()
{
    return subjectClasses;
}

Classe& Subject::getSubjectClass(string classCode)
{
    return subjectClasses[classCode];
}
