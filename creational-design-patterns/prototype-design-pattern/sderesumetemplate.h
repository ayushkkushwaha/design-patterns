#include "resumeprototype.h"
#include "bits/stdc++.h"
using namespace std;

class SdeResumeTemplate : public ResumePrototype{

    std::string name;
    std::string skills;
    std::string number;
    
public:
    SdeResumeTemplate(std::string name,std::string skills,std::string number){
        this->name = name;
        this->skills = skills;
        this->number = number;
    }

    ResumePrototype* clone() override{
        //Copy Constructer
        return new SdeResumeTemplate(*this);
    }
    
    void print() override{

         cout << "\n-----------------------------\n";
        cout << "Software Engineer Resume\n";
        cout << "Name   : " << name << endl;
        cout << "number : " << number << endl;
        cout << "Skills : " << skills << endl;
        cout << "-----------------------------\n";
    }

    void setName(string name){
        this->name = name;
    }

    void setSkills(string skills){
        this->skills = skills;
    }

    void setNumber(string number){
        this->number = number;
    }
};