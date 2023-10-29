//
// Created by Asus on 27/10/2023.
//
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "Class.h"
#include "Course.h"
#include "Schedule.h"
#include "Student.h"
#include "Subject.h"
#include "Reader.h"
using namespace std;

Course read_1(const string& fileName, Course course) // funçao que le e processa o ficheiro classes_pere_uc.csv
{

    ifstream inputFile(fileName);


    if(inputFile.is_open())
    {
        string line;
        getline(inputFile, line);
        while(getline(inputFile,line))
        {
            string UcCode, ClassCode;
            istringstream ss(line);

            if(getline(ss,UcCode,',') && getline(ss, ClassCode))
            {
                if( course.getSubjects().count(UcCode) > 0 ) // estamos a ver se o subject ja existe no nosso curso
                {
                    Classe newClass = Classe(ClassCode); // adiciona a turma nova ao
                    course.getSubject(UcCode).addClass(newClass);
                }

                else
                {
                    Subject newSubject = Subject(UcCode); // criar novvo subject
                    Classe newClass = Classe(ClassCode); // criar nova turma para o Subject

                    course.addSubject(newSubject); // estamos a adicionar um novo subject ao nosso curso
                    course.getSubject(UcCode).addClass(newClass);
                }
            }

        }

        inputFile.close();
    }

    else
    {
        cerr << "Error to open :" << fileName << std::endl;
    }

    return course;
}

Course read_2(const string& fileName, Course course) // funçao que le e processa o ficheiro classes.csv
{
    ifstream inputFile(fileName);


    if(inputFile.is_open())
    {
        string line;
        getline(inputFile, line);
        while(getline(inputFile,line))
        {
            string UcCode, ClassCode , Weekday, StartHour, Duration, Type;
            istringstream ss(line);

            if(getline(ss,ClassCode,',') && getline(ss, UcCode,',') && getline(ss,Weekday, ',') && getline(ss, StartHour, ',') && getline(ss, Duration, ',') && getline(ss, Type))
            {
                course.getSubject(UcCode).getSubjectClass(ClassCode).setClass(Weekday, stof(StartHour), stof(Duration), Type);
            }

        }

        inputFile.close();
    }

    else
    {
        cerr << "Error to open :" << fileName << std::endl;
    }

    return course;
}


Course read_3(const string& fileName, Course course) // funçao que le e processa students_classes.csv
{
    ifstream inputFile(fileName);


    if(inputFile.is_open())
    {
        string line;
        getline(inputFile, line);
        while(getline(inputFile,line))
        {
            string StudentCode, StudentName, UcCode, ClassCode;
            istringstream ss(line);

            if(getline(ss,StudentCode,',') && getline(ss, StudentName,',') && getline(ss,UcCode, ',') && getline(ss, ClassCode))
            {
                if(course.getAllStudents().count(stoi(StudentCode)) > 0)
                {
                    course.getStudent(stoi(StudentCode)).getSchedule().addClass(course.getSubject(UcCode).getSubjectClass(ClassCode));
                }

                else
                {
                    Student student = Student(stoi(StudentCode),StudentName);
                    student.getSchedule().addClass(course.getSubject(UcCode).getSubjectClass(ClassCode));
                    course.addStudent(student);
                }
            }

        }

        inputFile.close();
    }

    else
    {
        cerr << "Error to open :" << fileName << std::endl;
    }

    return course;
}