//
// Created by Asus on 27/10/2023.
//

#ifndef UNTITLED_COURSE_H
#define UNTITLED_COURSE_H

#include <iostream>
#include <string>
#include <unordered_map>
#include "Student.h"
#include <vector>
#include "Subject.h"
#include <unordered_map>

using namespace std;

class Course
{
    private:
        unordered_map<int, Student> studentMap;
        unordered_map<string, Subject> Subjects;

    public:
        Course();
        void addStudent(Student student_);
        void addSubject(Subject subject_);
        Student& getStudent(int studentCode);
        unordered_map<int, Student> getAllStudents();
        unordered_map<string, Subject> getSubjects();
        Subject& getSubject(string UcCode);
        void showSubjects();

};
void showSubjects();
#endif //UNTITLED_COURSE_H
