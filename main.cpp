#include <iostream>
#include "calculator.h"
#include "tasks.h"

int main() {
    std::cout << "=== Pametni Kalkulator i Task Manager (C++) ===\n\n";

    std::cout << "Test sabiranja (5 + 3): " << Calculator::add(5, 3) << "\n";

    TaskManager manager;
    manager.addTask("Nauciti osnove Git a");
    manager.addTask("Napraviti PDF dokumentaciju za profesorja");
    manager.listTasks();
    return 0;
}