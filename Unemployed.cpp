#include "Unemployed.h"

Unemployed::Unemployed(string name, int age, string education, string last_job, string phone, string desired_profession)
    : Person(name, age, education, last_job, phone), desired_profession(desired_profession) {}

string Unemployed::toString() const {
    return Person::toString() + "\nDesired Profession: " + desired_profession;
}
bool Unemployed::is_suitable(const string& vacancy_requirements) const {
    return desired_profession.find(vacancy_requirements) != string::npos;
}
