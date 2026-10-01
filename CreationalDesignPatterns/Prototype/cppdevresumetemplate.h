#include "bits/stdc++.h"
#include "resumeprototype.h"
using namespace std;

class CppDevResume : public ResumePrototype
{

    string name;
    string number;
    string skills;

public:
    CppDevResume(string name, string skills, string number)
    {
        this->name = name;
        this->skills = skills;
        this->number = number;
    }

    ResumePrototype *clone() override
    {
        // Copy Constructor
        return new CppDevResume(*this);
    }

    void print() override
    {
        cout << "\n-----------------------------\n";
        cout << "C++ Developer Resume\n";
        cout << "Name   : " << name << endl;
        cout << "Number : " << number << endl;
        cout << "Skills : " << skills << endl;
        cout << "-----------------------------\n";
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setSkills(string skills)
    {
        this->skills = skills;
    }

    void setNumber(string number)
    {
        this->number = number;
    }
};