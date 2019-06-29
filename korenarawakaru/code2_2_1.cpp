#include <iostream>
#include <string>
using namespace std;

class KNeko {
  string name;

  public:
    void SetName(string n) {
      name = n;
    }
    void Naku() const{
      cout << "nya. " << name << "!" << endl;
    }
};

int main() {
  KNeko x;
  x.Naku();

  x.SetName("Tama");
  x.Naku();
}
