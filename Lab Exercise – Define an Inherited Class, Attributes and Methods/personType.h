#pragma once
#include "header.h"

class personType
{
public:
	personType();
	~personType();

	void setinitialValue(string aName, int aAge, int aWeight, double aHeight);
	void setName(string aName);
	void setAge(int aAge);
	void setWeight(int aWeight);
	void setHeight(double aWeight);

	void print() const;
	string getName() const;
	int getAge() const;
	int getWeight() const;
	double getHeight() const;

private:
	string name;
	int    age;
	int    weight;
	double height;
};