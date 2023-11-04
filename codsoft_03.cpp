#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Task {
public:
    Task(const string& description) : description(description), completed(false) {}

    void markCompleted() {
        completed = true;
    }

    bool isCompleted() const {
        return completed;
    }

    const string& getDescription() const {
        return description;
    }

private:
    string description;
    bool completed;
};

class ToDoList {
public:
    void addTask(const string& description) {
        Task task(description);
        tasks.push_back(task);
        cout << "Task added: " << description << std::endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks in the list" << endl;
        } else {
            cout << "Tasks in the list:" <<endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                const Task& task = tasks[i];
                cout << i + 1 << ". " << task.getDescription();
                if (task.isCompleted()) {
                    cout << " (Completed)";
                }
                cout << endl;
            }
        }
    }

    void markTaskCompleted(int taskIndex) {
        if (taskIndex >= 1 && taskIndex <= tasks.size()) {
            Task& task = tasks[taskIndex - 1];
            task.markCompleted();
         cout << "Task marked as completed: " << task.getDescription() <<endl;
        } else {
            cout << "Invalid task index." <<endl;
        }
    }

    void removeTask(int taskIndex) {
        if (taskIndex >= 1 && taskIndex <= tasks.size()) {
            cout << "Task removed: " << tasks[taskIndex - 1].getDescription() << endl;
            tasks.erase(tasks.begin() + taskIndex - 1);
        } else {
            cout << "Invalid task index " <<endl;
        }
    }

private:
    vector<Task> tasks;
};

int main() {
    ToDoList toDoList;
    int choice;

    while (true) {
         cout<<"**************************************************************************************************************************************"<<endl;
                     cout<<"\t\t\t\t\t WELCOME TO YOUR OWN To-Do LIST MANAGER"<<endl;
                     cout<<"\t\t\t\t\tYOU CAN USE IT FOR YOUR PERSONAL WORK 100"<<endl;
                     
                     cout<<"**************************************************************************************************************************************"<<endl;
        cout << "To-Do List Manager" <<endl;
        cout << "1. Add Task" <<endl;
        cout << "2. View Tasks" <<endl;
        cout << "3. Mark Task as Completed" <<endl;
        cout << "4. Remove Task" <<endl;
        cout << "5. Exit" <<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string description;
                cout << "Enter task description: ";
                cin.ignore();
                getline(std::cin, description);
                toDoList.addTask(description);
                break;
            }
            case 2:
                toDoList.viewTasks();
                break;
            case 3: {
                int taskIndex;
                cout << "Enter the task index to mark as completed that one : ";
                cin >> taskIndex;
                toDoList.markTaskCompleted(taskIndex);
                break;
            }
            case 4: {
                int taskIndex;
                cout << " PLS Enter the task index to remove: ";
                cin >> taskIndex;
                toDoList.removeTask(taskIndex);
                break;
            }
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again"<<endl;
        }
    }

    return 0;
}
