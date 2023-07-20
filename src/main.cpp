#include <iostream>
#include "my-operation.h"

int main() {
  Operation operation;
  std::vector<Operation> data;
  std::string command;
  if (cmd() != "scalpel") {
    std::cout << "Error operation.";
    return 1;
  } else {
    command = "scalpel";
    enter_coord(operation, data,command);//if scalpel
    std::cout << "A cut was made between the entered coordinates." << std::endl;
    int count = 1;
    do {
      command = cmd();
      if (command == "hemostat" || command == "tweezers") {
        enter_coord(operation, data,command);//if hemostat or tweezers
        ++count;
        std::cout << command << " installed the entered coordinates: "
                  << data.at(count).X << " and " << data.at(count).Y << std::endl;
      }
    } while (command != "suture");
    while (!enter_coord(operation, data,command)){
      enter_coord(operation, data,command);//if suture
    }
    std::cout << "Operation completed."<< std::endl;
  }
  return 0;
}
