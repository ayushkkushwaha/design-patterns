#include <bits/stdc++.h>
using namespace std;

class TagManager
{
    TagManager();
    ~TagManager();
    static TagManager *instance;
    unordered_map<string,double> m_tags;

public:
    static TagManager* getInstance();

    double value(string name);
    void setValue(string name,double value);
    vector<string> allTagNames();
};

