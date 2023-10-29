//
// Created by Asus on 27/10/2023.
//

#ifndef UNTITLED_CLASS_H
#define UNTITLED_CLASS_H

#include <string>
#include <vector>

using namespace std;

class Student;
class Classe
{
private:
    string classCode_;
    string day_;
    float hour_;
    float duration_;
    string type_;
    vector<int> classStudents_;


public:
    Classe();
    Classe(string code);
    void setClass(string day, float hour, float duration, string type);
    string getClassCode(void);
    string getDay(void);
    int getHour(void);
    int getDuration(void);
    string getType(void);
    void showClass(Classe class_to_show);
    void addStudent(int studentCode);

};


#endif //UNTITLED_CLASS_H
