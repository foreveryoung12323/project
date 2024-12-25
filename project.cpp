#include "EmploymentAgency.h"
#include "Person.h"
#include "Unemployed.h"
#include "Vacancy.h"
#include <iostream>

int main() {
    EmploymentAgency agency;
    Unemployed person1("Ivan Ivanenko", 30, "Вища", "Software Engineer at TechCorp", "123-456-789", "Python Developer");
    Vacancy vacancy1("IT Solutions", "Python Developer", "$2500", "Python", "Provided");
    agency.add_unemployed(person1);
    agency.add_vacancy(vacancy1);
    agency.find_matches();
    agency.save_to_file("database.txt");
}