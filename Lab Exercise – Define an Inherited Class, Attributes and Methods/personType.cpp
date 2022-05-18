#include "header.h"
#include "personType.h"

personType::personType()
{
	name.clear();
	age = 0;
	weight = 0;
	height = 0;
}

personType::~personType()
{

}

void personType::setinitialValue(string aName, int aAge, int aWeight, double aHeight)
{
	name = aName;
	age = aAge;
	weight = aWeight;
	height = aHeight;
}

void personType::setName(string aName)
{
	name = aName;
}

void personType::setAge(int aAge)
{
	age = aAge;
}

void personType::setWeight(int aWeight)
{
	weight = aWeight;
}

void personType::setHeight(double aHeight)
{
	height = aHeight;
}

void personType::print() const
{
	cout << left
		<< "Name:   " << name << endl
		<< "Age:    " << age << endl
		<< "Weight: " << weight << endl
		<< "Height: " << height << "\n\n";

}

string personType::getName() const
{
	return name;
}

int personType::getAge() const
{
	return age;
}

int personType::getWeight() const
{
	return weight;
}

double personType::getHeight() const
{
	return height;
}