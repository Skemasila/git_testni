#include <iostream>
#include "calculator.h"
#include "tasks.h"

int main() {
    std::cout << "Test sabiranja (5 + 3): " << Calculator::add(5, 3) << "\n";
    std::cout << Calculator::divide(8, 2) << "\n";

    TaskManager manager;
    manager.addTask("Nauciti osnove Git a");
    manager.addTask("Napraviti PDF dokumentaciju za profesorja");
    manager.listTasks();
    return 0;
}