// #include <stdlib>
#include <iostream>
#include "Gpio.h"

int main()
{
  Gpo test(49);
  
  std::cout << "Etat: " << test.getState() << std::endl;
  test.setState(1);

  std::cout << "Etat: " << test.getState() << std::endl;
  test.setState(0);

  std::cout << "Etat: " << test.getState() << std::endl;

  exit(EXIT_SUCCESS);
}
