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
  cout << "さあ、いよいよロケットが完成しました。" << endl;
  cout << "操縦するのはあなたです。" << endl;
  cout << "毎回、噴射量を決めてください。" << endl;
  cout << "加速のチャンスは3回だけです。" << endl;
  x.Report();

  int b;
  int i;
  for(i=0; i < 3; i++) {
    cout << "噴射量を入力：";
    cin >> b;
    x.Accel(b);
    x.Report();
  }

}
