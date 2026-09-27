#include <bits/stdc++.h>
#include "tagmanager.h"

using namespace std;

int main()
{
    cout << "Driver Code initiated" << endl;

    TagManager *manager = TagManager::getInstance();
    manager->setValue("tag1", 56);
    cout << manager->value("tag1") << endl;
    manager->setValue("tag2", 23);
    cout << manager->value("tag2") << endl;

    for(auto i : manager->allTagNames())
        cout << i << endl;

    cout <<TagManager::getInstance()->value("tag2");
    return 0;
}