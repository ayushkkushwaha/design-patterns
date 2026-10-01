#pragma once

#include "bits/stdc++.h"

class Resume
{
    std::string experience;
    std::string projects;
    std::string skills;
    std::string education;

    std::string previewStr;

public:
    void addHeader(){
        previewStr.append("\n---------------------\n");
    }
    
    void addExperience(std::string exp)
    {
        this->experience.append("\n" + exp);
        previewStr.append(experience);
    }

    void addProjects(std::string prj)
    {
        this->projects.append("\n" + prj);
        previewStr.append(projects);
    }

    void addSkills(std::string skills){
        this->skills.append("\n" + skills);
        previewStr.append(this->skills);
    }

    void addEducation(std::string edu){
        this->education.append("\n" + edu);
        previewStr.append(education);
    }

    void preview(){
        std::cout << previewStr;
    }
};