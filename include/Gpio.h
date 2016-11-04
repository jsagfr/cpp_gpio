#ifndef GPIO_H
#define GPIO_H

#include <string>
#include <fstream>

// enum State {
//   Low  = 0,
//   High = 1
// }

class Gpio {
protected:
  unsigned int const _number;
  std::string const _folder;

 public:
  Gpio(unsigned int number);

  unsigned int getNumber() const;
};


class Gpo: public Gpio {
protected:
  std::fstream _value;

public:
  Gpo(unsigned int number);
  ~Gpo();
  
  int getState();
  void setState(int state);
  void setHigh();
  void setLow();
  
};

#endif  // GPIO_H
