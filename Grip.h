#include <string>

class Grip
{
public:
  Grip();

  ~Grip();

  int open();

  std::string load(std::string file);

  void setState(int newState);

  int getState();

protected:

  int _state;

};
