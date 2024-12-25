#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Person
{
	string name;
	int age;
	string education;
	string last_job;
	string phone;
public:
	Person(string name, int age, string education, string last_job, string phone);
	virtual ~Person() = default;
	virtual string toString() const;
	bool operator  ==(const Person& other) const;
	bool operator  >(const Person& other) const;
	bool operator  <(const Person& other) const;
};

