#include <vector>
#include <set> 

class Ship {
  private: 
    std::string shipName;
    std::vector<Cow*> cowInventory;
    std::set<std::string> abductedCows;
    int numCows;

  public:
    Ship(const std::string& shipName) : shipName(shipName), numCows(0) {}

    ~Ship() {
        std::cout << "Ship named " << shipName << " has been destroyed." << std::endl;
        for (Cow* cow : cowInventory) {
          delete cow;
        }
    }

    void abductCow(Cow* cow) {
      if (abductedCows.insert(cow->getName()).second) {
        cowInventory.push_back(cow);
        numCows++;
        std::cout << "Cow named " << cow->getName() << " has been abducted!" << std::endl;
      }
      else {
        std::cout << "Error: Duplicate cow named " << cow->getName() << ". Abduction failed!" << std::endl;
        delete cow;
      }
    }

    const std::string& getShipName() const {
      return shipName;
    }

    int getNumCows() const {
      return numCows;
    }

    void blowUpShip(Ship* ship) {
      delete ship;
    }
};
