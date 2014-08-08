#include "Grip.h"
#include <iostream>

int main(int argc, char **argv)
{
  std::cerr << "Stating Test" << std::endl;

  Grip grip;

  std::cerr << "Grip State = " << grip.getState() << std::endl;

  grip.setState(100);

  std::cerr << "Grip New State = " << grip.getState() << std::endl;

  return 0;
}
