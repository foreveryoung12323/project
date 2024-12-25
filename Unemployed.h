#pragma once
#include "Person.h"
class Unemployed : public Person {
private:
    string desired_profession;

public:
    Unemployed(string name, int age, string education, string last_job, string phone, string desired_profession);
    string toString() const override;
    bool is_suitable(const string& vacancy_requirements) const;
};
