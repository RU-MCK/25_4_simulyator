#include "my-operation.h"
#include <iostream>
#include <vector>


double getValue() {
  while (true) {
    std::cout << "Enter a double value: ";
    double a;
    std::cin >> a;
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(32767, '\n');
      std::cout << "That input is invalid. Please try again.\n";
    } else{
      std::cin.ignore(32767, '\n');
    }
    return a;
  }
}
std::string cmd() {
  std::string str;
  while (true) {
    std::cout << "Input the command: " << std::endl;
    std::cin >> str;
    if (str == "scalpel" || str == "hemostat" || str == "tweezers" || str == "suture") {
      break;
    } else
      std::cout << "Enter Error! Try again." << std::endl;
  }
  return str;
}
bool enter_coord(Operation coord, std::vector<Operation> &data,std::string &command) {
  std::cout << "Input coordinate < X >" << std::endl;
  coord.X = getValue();
  if(command == "suture") {
    if (coord.X != data.at(0).X){
      std::cout << "Wrong coordinate"<< std::endl;
      return false;
    }
  }
  std::cout << "Input coordinate < Y >" << std::endl;
  coord.Y = getValue();
  if(command == "suture") {
    if (coord.Y != data.at(0).Y){
      std::cout << "Wrong coordinate"<< std::endl;
      return false;
    }
  }
  data.push_back(coord);
  if (command == "scalpel"|| command == "suture") {
    std::cout << "Input coordinate < X 2 >" << std::endl;
    coord.X = getValue();
    if(command == "suture") {
      if (coord.X != data.at(1).X){
        std::cout << "Wrong coordinate"<< std::endl;
        return false;
      }
    }
    std::cout << "Input coordinate < Y 2 >" << std::endl;
    coord.Y = getValue();
    if(command == "suture") {
      if (coord.Y != data.at(1).Y){
        std::cout << "Wrong coordinate"<< std::endl;
        return false;
      }
    }
    data.push_back(coord);
  }
  return true;
}