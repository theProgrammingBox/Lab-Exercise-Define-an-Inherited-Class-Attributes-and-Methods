#include "header.h"
#include "personType.h"
#include "studentType.h"

studentType::studentType()
{
	major.clear();
	gpa = 0;
	classYear = FRESHMAN;
}

studentType::~studentType()
{
}

void studentType::SetStudent(string aMajor, float aGpa, yearClass aClassYear)
{
	major = aMajor;
	gpa = aGpa;
	classYear = aClassYear;
}

void studentType::SetMajor(string aMajor)
{
	major = aMajor;
}

void studentType::SetGpa(float aGpa)
{
	gpa = aGpa;
}

void studentType::SetclassYear(yearClass aClassyear)
{
	classYear = aClassyear;
}

string studentType::GetMajor() const
{
	return major;
}

float studentType::GetGpa() const
{
	return gpa;
}

yearClass studentType::GetclassYear() const
{
	return classYear;
}

void studentType::DisplayStudent() const
{
	cout
		<< "Major: " << major << endl
		<< "GPA: " << gpa << endl
		<< "ClassYear: " << classYear << "\n\n";
}