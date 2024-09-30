#pragma once
#include <string>
using namespace std;
class Passport
{
protected:
	int passport_data;
	int passpord_id;
	string Surname;
	string name;
	string patronymic;
	int day;
	int month;
	int year;
private:
	string registration;
public:
	Passport(int passport_data, int passpord_id,
		string Surname, string name, string patronymic, int day,
		int month, int year, string registration);
	void setpassport_data(int passport_data);
	void setpasspord_id(int passpord_id);
	void setSurname(string Surname);
	void setName(string name);
	void setPatronymic(string patronymic);
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	void setRegistration(string registration);
	
	int GetPassport_data()const;
	int GetPasspord_id()const;
	string GetSurname()const;
	string GetName()const;
	string Getpatronymic()const;
	int GetDay()const;
	int GetMonth()const;
	int GetYear()const;
	string GetRegistration()const;
	
	void showInfo()const;






};

