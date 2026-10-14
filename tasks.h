#ifndef TASKS_H
#define TASKS_H

#include <vector>
#include <string>

class TaskManager {
private:
    std::vector<std::string> tasks;
public:
    void addTask(const std::string& task);
    void listTasks() const;
};

#endift