//
// Created by Asus on 27/10/2023.
//

#ifndef UNTITLED_SUBJECT_H
#define UNTITLED_SUBJECT_H

#include<iostream>
#include<string>
#include <vector>
#include <unordered_map>

#include "Class.h"
using namespace std;

class Subject
{
    private:

        string Code_;
        unordered_map<string, Classe> subjectClasses;


    public:
        Subject(string code);
        Subject();
        string getSubjectCode();
        void addClass(Classe class_);
        void showSubject();
        unordered_map<string, Classe>& getSubjectClasses();
        Classe& getSubjectClass(string classCode);
        // adicionar mais funçoes relevantes
};
#endif //UNTITLED_SUBJECT_H
