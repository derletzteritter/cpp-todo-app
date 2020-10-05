#include <iostream>
#include <vector>

std::vector<std::string> todo_items;
std::string action;

void addItem(std::string item_name) {
  todo_items.push_back(item_name);
}

void showItems() {
  for (size_t i = 0; i < todo_items.size(); i++)
  {
    std::cout << todo_items[i] << "\n";
  }
  
}

int main() {


  std::cout << "Welcome to your C++ Todo app...in a console.\n\n";
  std::cout << "To add a new item, type: add <name of item>\n";
  std::cout << "To remove a existing item, type: remove <name of item>\n";
  std::cout << "To view all items, type: show\n";

  addItem("Something cool");
  addItem("Wow, this is actually dope");
  showItems();

  //std::cin >> action;
//
//
  //if (action == "add") {
  //  std::string task;
  //  std::cout << "Write a task:";
  //  std::cin >> task;
//
  //  addItem(task);
  //  std::cout << "Task: " << task << " has been added to the list\n";
  //}
//
  //if (action == "show") {
  //  showItems();
  //}

  return 0;

}


