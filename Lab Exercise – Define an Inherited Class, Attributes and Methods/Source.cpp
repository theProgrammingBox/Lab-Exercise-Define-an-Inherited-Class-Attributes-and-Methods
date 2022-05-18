#include "header.h"
#include "personType.h"
#include "studentType.h"

int main()
{
	studentType student;
	personType people;

	people.setinitialValue("Jake", 19, 55, 170);

	people.print();

	people.setName("Nate");
	people.setAge(25);
	people.setWeight(90);
	people.setHeight(165);

	cout
		<< people.getName() << endl
		<< people.getAge() << endl
		<< people.getWeight() << endl
		<< people.getHeight() << "\n\n";


	student.setinitialValue("Doth", 19, 65, 180);

	student.print();

	student.setName("Krate");
	student.setAge(20);
	student.setWeight(80);
	student.setHeight(200);

	cout
		<< student.getName() << endl
		<< student.getAge() << endl
		<< student.getWeight() << endl
		<< student.getHeight() << "\n\n";

	student.SetStudent("Math", 3.99, SOPHOMORE);

	student.DisplayStudent();

	student.SetMajor("Computer Science");
	student.SetGpa(2.99);
	student.SetclassYear(SENIOR);

	cout
		<< student.GetMajor() << endl
		<< student.GetGpa() << endl
		<< student.GetclassYear() << "\n\n";

	return 0;
}