#include "Person.h"

Person::Person(string name, int age, string education, string last_job, string phone)
{
	this->name = name;
	this->age = age;
	this->education = education;
	this->last_job = last_job;
	this->phone = phone;
}

string Person::toString() const
{
	return "Name: " + name + "\nAge: " + to_string(age) + "\nEducation: " + education + "\nLast Job: " + last_job + "\nPhone: " + phone;;
}

bool Person::operator==(const Person& other) const
{
	return name == other.name && last_job == other.last_job;
}

bool Person::operator>(const Person& other) const
{
	static vector<string> levels = { "Middle", "Middle special", "Higher","Complete higher education" };
	return find(levels.begin(), levels.end(), education) > find(levels.begin(), levels.end(), other.education);
}

bool Person::operator<(const Person& other) const
{
	return other > *this;
}
