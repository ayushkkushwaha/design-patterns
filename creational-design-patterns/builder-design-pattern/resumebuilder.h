#pragma once
#include "builder.h"
#include "resume.h"

class ResumeBuilder : public Builder
{

    Resume resume;

public:
    void addExperience() override
    {
        resume.addExperience("2+ Yrs Software Engineering");
    }
    void addEducation() override
    {
        resume.addEducation("B.tech 2020-2024");
    }
    void addSkills() override
    {
        resume.addSkills("C++,Java,Python");
    }
    void addProjects() override
    {
        resume.addProjects("RAG System");
    }
    void addHeader() override{
        resume.addHeader();
    }

    Resume getResults() override{
        return resume;
    }
};