#include "EmploymentAgency.h"
#include <fstream>
#include <iostream>
void EmploymentAgency::add_unemployed(const Unemployed& person) {
    unemployed_list.push_back(person);
}
void EmploymentAgency::add_vacancy(const Vacancy& vacancy) {
    vacancy_list.push_back(vacancy);
}
void EmploymentAgency::find_matches() {
    for (const auto& unemployed : unemployed_list) {
        for (const auto& vacancy : vacancy_list) {
            if (unemployed.is_suitable(vacancy.getRequirements())) {
                cout << "Match found for " << unemployed.toString() << "\n";
                cout << vacancy.toString() << "\n";
                archive.push_back({ unemployed, "Hired" });
            }
        }
    }
}
void EmploymentAgency::archive_entry(const Unemployed& person, const string& reason) {
    archive.push_back({ person, reason });
}

void EmploymentAgency::save_to_file(const string& filename) const {
    ofstream file(filename);
    for (const auto& unemployed : unemployed_list) {
        file << unemployed.toString() << "\n";
    }
    for (const auto& vacancy : vacancy_list) {
        file << vacancy.toString() << "\n";
    }
    file.close();
}

void EmploymentAgency::load_from_file(const string& filename) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
    }
    file.close();
}