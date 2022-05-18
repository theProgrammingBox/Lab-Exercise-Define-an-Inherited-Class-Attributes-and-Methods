#pragma once
#include "header.h"
#include "personType.h"

class studentType : public personType
{
public:
	studentType();
	~studentType();

	void SetStudent(string aMajor, float aGpa, yearClass aClassYear);
	void SetMajor(string aMajor);
	void SetGpa(float aGpa);
	void SetclassYear(yearClass aClassYear);

	string GetMajor() const;
	float GetGpa() const;
	yearClass GetclassYear() const;
	void DisplayStudent() const;

private:
	string major;
	float gpa;
	yearClass classYear;
};