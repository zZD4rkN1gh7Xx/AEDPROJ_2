//
// Created by Asus on 27/10/2023.
//

#ifndef UNTITLED_SCHEDULE_H
#define UNTITLED_SCHEDULE_H

#include "Subject.h"
#include "Class.h"
#include <iostream>
#include <vector>

using namespace std;

class Schedule
{
private:
    vector<Classe> schedule_;

public:
    Schedule();
    void showSchedule();
    void addClass(Classe classe);
    void removeClass(Classe classe);
    vector<Classe>& getSchedule();
    // fazer uma funçao para ordenar a schedule por ordem de dias e horas
    // falta tambem pensar como e que se vai fazer a schedule em si
    // so quando resolver os 2 primeiros exeis e que se faz isto (classes.csv e classes_per_uc.csv)

};

#endif //UNTITLED_SCHEDULE_H
