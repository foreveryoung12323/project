#pragma once
#include "Unemployed.h"
#include "Vacancy.h"
#include <vector>
#include <string>
using namespace std;

struct ArchiveEntry {
    Unemployed person;
    string reason;
};

class EmploymentAgency {
private:
    vector<Unemployed> unemployed_list;
    vector<Vacancy> vacancy_list;
    vector<ArchiveEntry> archive;

public:
    void add_unemployed(const Unemployed& person);
    void add_vacancy(const Vacancy& vacancy);
    void find_matches();
    void archive_entry(const Unemployed& person, const string& reason);
    void save_to_file(const string& filename) const;
    void load_from_file(const string& filename);
};