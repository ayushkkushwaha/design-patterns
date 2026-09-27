#pragma once

#include "resume.h"

class Builder
{
public:
    virtual void addExperience() = 0;
    virtual void addEducation() = 0;
    virtual void addSkills() = 0;
    virtual void addProjects() = 0;
    virtual void addHeader() = 0;

    virtual Resume getResults() = 0;
};