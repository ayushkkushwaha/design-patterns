#pragma once

class ResumePrototype{
public:
    virtual ResumePrototype* clone() = 0;
    virtual void print() = 0;

    virtual ~ResumePrototype() = default; //imp when using inheritance
};