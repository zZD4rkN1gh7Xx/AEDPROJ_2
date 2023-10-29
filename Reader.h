//
// Created by Asus on 28/10/2023.
//

#ifndef UNTITLED_READER_H
#define UNTITLED_READER_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "Class.h"
#include "Course.h"
#include "Schedule.h"
#include "Student.h"
#include "Subject.h"
using namespace std;

Course read_1(const string& fileName, Course course);
Course read_2(const string& fileName, Course course);
Course read_3(const string& fileName, Course course);

#endif //UNTITLED_READER_H
