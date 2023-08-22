#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
    string description;
    bool completed;
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask (const string& description) {
        Task newTask = {description, false};
        tasks.push_back(newTask);
        cout << "Task added: " << description << endl;
    }

    void viewTasks () {
        cout << "Tasks:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". ";
            if (tasks[i].completed) {
                cout << "[X] ";
            } 
            else {
                cout << "[ ] ";
            }
            cout << tasks[i].description << endl;
        }
    }

    void markTaskCompleted (size_t index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
            cout << "Task marked as completed: " << tasks[index].description << endl;
        } 
        else {
            cout << "Invalid task index." << endl;
        }
    }

    void removeTask (size_t index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
            cout << "Task removed." << endl;
        } 
        else {
            cout << "Invalid task index." << endl;
        }
    }
};

int main() {
    ToDoList todoList;
    char choice;

    do {
        cout << "\nMENU:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                string description;
                cout << "Enter task description: ";
                cin.ignore(); // Clear input buffer
                getline(cin, description);
                todoList.addTask(description);
                break;
            }
            case '2': {
                todoList.viewTasks();
                break;
            }
            case '3': {
                size_t index;
                cout << "Enter task index to mark as completed: ";
                cin >> index;
                todoList.markTaskCompleted(index - 1); // Adjust for 0-based index
                break;
            }
            case '4': {
                size_t index;
                cout << "Enter task index to remove: ";
                cin >> index;
                todoList.removeTask(index - 1); // Adjust for 0-based index
                break;
            }
            case '5': {
                cout << "Exiting..." << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please select again." << endl;
        }
    } while (choice != '5');

    return 0;
}
