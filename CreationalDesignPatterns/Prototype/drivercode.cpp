#include "bits/stdc++.h"
#include "resumeprototype.h"
#include "sderesumetemplate.h"
#include "cppdevresumetemplate.h"

using namespace std;

int main(){

    SdeResumeTemplate sdeResume("", "", "");
    CppDevResume cppDevResume("", "", "");

    SdeResumeTemplate* _ayushSde = (SdeResumeTemplate*)sdeResume.clone();
    _ayushSde->setName("ayush");
    _ayushSde->setNumber("+098");
    _ayushSde->setSkills("dsa,lld,hld");

    CppDevResume* _ayushCpp = (CppDevResume*)cppDevResume.clone();
    _ayushCpp->setName("ayush");
    _ayushCpp->setNumber("+098");
    _ayushCpp->setSkills("cpp,threading,mutex");

    _ayushCpp->print();
    cout << endl << endl;
    _ayushSde->print();


    delete _ayushCpp;
    delete _ayushSde;

    return 0;
}