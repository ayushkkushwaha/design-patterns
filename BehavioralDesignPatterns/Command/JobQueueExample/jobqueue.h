#pragma once
#include "bits/stdc++.h"
#include "command.h"
using namespace std;

class JobQueue{
    queue<Command*> _queue;
public:
    void addTask(Command* command){
        _queue.push(command);
    }

    void processJobs(){
        while(!_queue.empty()){
            Command* cmd = _queue.front();
            _queue.pop();
            cmd->run();
        }
    }
};