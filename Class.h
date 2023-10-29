//
// Created by Asus on 27/10/2023.
//

#ifndef UNTITLED_CLASS_H
#define UNTITLED_CLASS_H

#include <string>

using namespace std;

class Classe
{
private:
    string classCode_;
    string day_;
    float hour_;
    float duration_;
    string type_;

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

};


#endif //UNTITLED_CLASS_H
