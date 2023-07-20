#pragma once
#include <iostream>
#include <vector>


double getValue();

std::string cmd();

struct Operation {
  double X = 0.0;
  double Y = 0.0;
};

bool enter_coord(Operation coord, std::vector<Operation> &data,std::string &command);
