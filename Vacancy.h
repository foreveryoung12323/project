#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vacancy {
private:
    string company;
    string position;
    string salary;
    string requirements;
    string housing;

public:
    Vacancy(string company, string position, string salary, string requirements, string housing = "");
    string toString() const;
    bool operator==(const Vacancy& other) const;
    const string& getRequirements() const;
    const string& getCompany() const;
    const string& getPosition() const;
};