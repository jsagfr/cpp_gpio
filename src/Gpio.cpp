#include "Gpio.h"
#include <string>
#include <fstream>

std::string gpio_path = {"/sys/class/gpio/"};

Gpio::Gpio(unsigned int number) :
  _number(number),
  _folder(gpio_path + "gpio" + std::to_string(number) + "/")
{}

unsigned int Gpio::getNumber() const
{
  return _number;
}




Gpo::Gpo(unsigned int number) :
  Gpio(number)
{
  _value.open(_folder + "value"); 
}

Gpo::~Gpo()
{
  _value.close();
}
  
void Gpo::setState(int state)
{
  _value.seekg(0);
  _value << state;
  _value.sync();
}

int Gpo::getState()
{
  _value.seekg(0);
  int state;
  _value >> state;
  return state;
}

void Gpo::setHigh()
{
  setState(1);
}

void Gpo::setLow()
{
  setState(0);
}
  
