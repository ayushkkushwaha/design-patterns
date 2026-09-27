#include "builder.h"

class ResumeDirector{

public:
    void construct(Builder &builder){
        builder.addHeader();
        builder.addEducation();
        builder.addExperience();
        builder.addProjects();
        builder.addSkills();
        builder.addHeader();
    }
};