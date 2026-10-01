#include "bits/stdc++.h"
#include "resumedirector.h"
#include "resume.h"
#include "resumebuilder.h"

using namespace std;

int main(){
    ResumeBuilder _resumebuilder;
    ResumeDirector _resumeDir;

    _resumeDir.construct(_resumebuilder);
    Resume resume = _resumebuilder.getResults();

    resume.preview();
    return 0;
}