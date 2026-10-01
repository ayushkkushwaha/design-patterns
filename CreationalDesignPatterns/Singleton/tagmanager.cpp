#include "tagmanager.h"
TagManager *TagManager::instance = 0;

TagManager::TagManager()
{
    cout << "Tag-Manager initiated..." << endl;
}

TagManager *TagManager::getInstance()
{
    if (instance == 0)
        instance = new TagManager();

    return instance;
}

void TagManager::setValue(string name, double value)
{
    m_tags[name] = value;
}

double TagManager::value(string name)
{
    return m_tags[name];
}

vector<string> TagManager::allTagNames()
{
    vector<string> tagList;
    for (const auto &tag : m_tags){
        tagList.push_back(tag.first);
    }
    return tagList;
}