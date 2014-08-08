
#include "Grip.h"
#include <iostream>
#include <fstream>
#include <sstream>

Grip::Grip()
{
  std::cerr << "Creating Grip Object" << std::endl;
  _state = 0;
}

Grip::~Grip(){}

int Grip::open()
{
  std::cerr << "Opening Grip!" << std::endl;
  return 0;
}

std::string Grip::load(std::string file)
{
  std::cerr << "Loading File" << std::endl;

  std::ifstream newFile;
  newFile.open(file);
  
  std::stringstream outputString;
  outputString << newFile.rdbuf();
  
  return outputString.str();
}

void Grip::setState(int newState)
{
  std::cerr << "Setting State" << std::endl;
  _state = newState;
}

int Grip::getState()
{
  std::cerr << "Getting State" << std::endl;
  return _state;
}
