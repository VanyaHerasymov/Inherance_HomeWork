#pragma once
#include "Passport.h"
class ForeignPassport :protected Passport
{
	string VectorVis;
public:
	ForeignPassport(int passport_data, int passpord_id,
		string Surname, string name, string patronymic, int day,
		int month, int year, string registration,string VectorVis);
	void SetVectorVis(string VectorVis);
	string getVectorVis()const;

	void showInfo()const;
};

