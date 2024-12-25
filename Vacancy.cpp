#include "Vacancy.h"
Vacancy::Vacancy(string company, string position, string salary, string requirements, string housing)
    : company(company), position(position), salary(salary), requirements(requirements), housing(housing) {}
string Vacancy::toString() const {
    return "Company: " + company + "\nPosition: " + position + "\nSalary: " + salary + "\nRequirements: " + requirements + "\nHousing: " + (housing.empty() ? "None" : housing);
}
bool Vacancy::operator==(const Vacancy& other) const {
    return company == other.company && position == other.position;
}
const string& Vacancy::getRequirements() const {
    return requirements;
}
const string& Vacancy::getCompany() const {
    return company;
}
const string& Vacancy::getPosition() const {
    return position;
}