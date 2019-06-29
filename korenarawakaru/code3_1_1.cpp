#include <iostream>
using namespace std;

class Rocket {
  int f; // 燃料
  int v; // 速度
  int h; // 高度
public:
  Rocket() {
    f = 100;
    v = 0;
    h = 0;
  }
  void Accel(int b) {
    f -= b;
    v += b;
    h += v;
  }
  void Report() const {
    cout << "状況報告" << endl;
    cout << "燃料：" << f << endl;
    cout << "速度：" << v << endl;
    cout << "高度：" << h << endl;
    cout << endl;
  }
};

int main()
{
  Rocket x;
  x.Report();
  x.Accel(10);
  x.Report();
  x.Accel(10);
  x.Report();
  x.Accel(10);
  x.Report();
}

