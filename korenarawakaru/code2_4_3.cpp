#include <iostream>
#include <string>
using namespace std;

class KNeko {
  string name;
public:
  KNeko(){}
  KNeko(string n){
    name = n;
  }
  void SetName(string n) {
    name = n;
  }
  void Naku() const {
    cout << "にゃー。俺様は" << name << "だ。" << endl;
  }
};

int main() {
  KNeko x("タマ");
  x.Naku();

  KNeko y;
  y.SetName("ミケ");
  y.Naku();
}
  
