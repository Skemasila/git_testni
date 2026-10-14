#include "tasks.h"
#include <iostream>

void TaskManager::addTask(const std::string& task) {
    tasks.push_back(task);
    std::cout << "Zadatak dodan: " << task << "\n";
}

void TaskManager::listTasks() const {
    std::cout << "\n--- Lista zadataka ---\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i] << "\n";
    }
}