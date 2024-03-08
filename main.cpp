#include <iostream>
#include "Cow.hpp"
#include "Ship.hpp"
#include <vector>

int main() {
  std::vector<Ship*> ships;

  while (true) {
    std::cout << "Menu: " << std::endl;
    std::cout << "1. Create a ship\n2. Abduct a cow\n3. Self-destruct (quit program)\nEnter Choice: ";
    int choice;
    std::cin >> choice;
}
