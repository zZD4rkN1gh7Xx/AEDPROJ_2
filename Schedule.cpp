//
// Created by Asus on 27/10/2023.
//
#include "Schedule.h"
#include <iostream>
#include <vector>
#include "Subject.h"



Schedule::Schedule()
{

}
void Schedule::showSchedule()
{
    // ainda tenho de fazer um show schedule
}

void Schedule::addClass(Classe classe)
{
    schedule_.push_back(classe);
}

void Schedule::removeClass( Classe classe)
{
    auto it = schedule_.begin();
    while (it != schedule_.end())
    {
        if (it->getClassCode() == classe.getClassCode() )
        {
            it = schedule_.erase(it);
            break;
        }
        it++;
    }
}

vector<Classe>& Schedule::getSchedule()
{
    return schedule_;
}