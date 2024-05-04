#include <iostream>
#include <vector>
#include <string>
#include<iomanip>
using namespace std;

struct Task {
    std::string description;
    bool completed;
};

int main() {
    std::vector<Task> todoList;
    std::string taskDescription;
    for(int i=0;i<201;i++)
    {
        std::cout << "*";
    };
    std::cout << "\n\nWelcome to the To-Do List!\n\n";

    // Loop to get tasks from the user
    do {
        std::cout << "Enter a task (or type 'Exit' to exit): ";
        std::getline(std::cin, taskDescription);

        if (taskDescription != "Exit") {
            Task newTask = {taskDescription, false};
            todoList.push_back(newTask);
        }
    } while (taskDescription != "Exit");
    std::cout << "\n";
    // Printing the to-do list
    for(int i=0;i<201;i++)
    {
        std::cout << "*";
    };
    std::cout << "\n\nYour To-Do List:\n\n";
    for (size_t i = 0; i < todoList.size(); ++i) {
        std::cout << i + 1 << ". ";
        if (todoList[i].completed) {
            std::cout << "[] ";
        } else {
            std::cout << "[] ";
        }
        std::cout << todoList[i].description << std::endl;
    }

    // Marking tasks as completed
    std::cout << "\nMark tasks as completed enter task number or press '0' to finish: ";
    int taskNumber;
    while (std::cin >> taskNumber && taskNumber != 0) {
        if (taskNumber > 0 && taskNumber <= static_cast<int>(todoList.size())) {
            todoList[taskNumber - 1].completed = true;
        }
        std::cout << "Mark another task as completed enter task number or press '0' to finish: ";
    }
    cout << endl;
    for(int i=0;i<201;i++)
    {
        std::cout << "*";
    };
    cout << setw(81)<< left  << "" << "Your Updated To-Do List:" << setw(96)<< right << "";  
    for (const auto& task : todoList) {
        cout << setw(81)<< left  << "*" ;
        if (!task.completed) {
            std::cout << "[ Not completed ] ";
        } else {
            std::cout << "[  Completed.   ] ";
        }
        cout << setw(101)<< left  << task.description <<"*";
        
    }
    std::cout << "\n";
    for(int i=0;i<201;i++)
    {
        std::cout << "*";
    };

    return 0;
}
