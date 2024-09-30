#include "Passport.h"
#include <iostream>
using namespace std;

Passport::Passport(int passport_data, int passpord_id, string Surname, string name, string patronymic,
    int day, int month, int year, string registration)
{
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

void Passport::setpassport_data(int passport_data)
{
    this->passport_data = passport_data;
}

void Passport::setpasspord_id(int passpord_id)
{
    this->passpord_id = passpord_id;

}

void Passport::setSurname(string Surname)
{
    this->Surname = Surname;

}

void Passport::setName(string name)
{
    this->name = name;

}

void Passport::setPatronymic(string patronymic)
{
    this->patronymic = patronymic;

}

void Passport::setDay(int day)
{
    this->day = day;

}

void Passport::setMonth(int month)
{
    this->month = month;

}

void Passport::setYear(int year)
{
    this->year = year;

}

void Passport::setRegistration(string registration)
{
    this->registration = registration;

}

int Passport::GetPassport_data() const
{
    return passport_data;
}

int Passport::GetPasspord_id() const
{
    return passpord_id;
}

string Passport::GetSurname() const
{
    return string(Surname);
}

string Passport::GetName() const
{
    return string(name);
}

string Passport::Getpatronymic() const
{
    return string(patronymic);
}

int Passport::GetDay() const
{
    return day;
    
}

int Passport::GetMonth() const
{
    return month;
}

int Passport::GetYear() const
{
    return year;
}

string Passport::GetRegistration() const
{
    return string(registration);
}

void Passport::showInfo() const
{
    /*
    int passport_data, int passpord_id, string Surname, string name, string patronymic,
    int day, int month, int year, string registration
    
    
    */
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
