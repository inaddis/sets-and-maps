#include <iostream>
#include <set>
#include <string>

class Cow {
  private:
    std::string name;

  public:   
    Cow(const std::string& name) : name(name) {}

    ~Cow() {
      std::cout << "Cow named " << name << "has been destroyed" << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& os, const Cow& cow) {
      os << "Cow Name: " << cow.name;
      return os;
    }

  const std::string& getName() const {
    return name;
  }
};
