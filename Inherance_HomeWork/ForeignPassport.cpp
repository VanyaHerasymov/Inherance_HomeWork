#include "ForeignPassport.h"
#include <iostream>
#pragma once

using namespace std;
ForeignPassport::ForeignPassport(int passport_data, int passpord_id, string Surname, string name, string patronymic, int day, int month, int year, string registration, string VectorVis){


    this->passport_data = passport_data;
    this->passpord_id = passpord_id;
    this->Surname = Surname;
    this->name = name;
    this->patronymic = patronymic;
    this->day = day;
    this->month = month;
    this->year = year;
    this->registration = registration;


}

void ForeignPassport::SetVectorVis(string VectorVis)
{
}

string ForeignPassport::getVectorVis() const
{
    return string();
}

void ForeignPassport::showInfo() const
{
    cout << "passport_data: " << passport_data << endl;
    cout << "passpord_id: " << passpord_id << endl;
    cout << "Surname: " << Surname << endl;
    cout << "name: " << name << endl;
    cout << "patronymic: " << patronymic << endl;
    cout << "day: " << day << endl;
    cout << "month: " << month << endl;
    cout << "year: " << year << endl;
    cout << "registration: " << registration << endl;
    
}
