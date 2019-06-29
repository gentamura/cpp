#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  int age;
  cout << "input name:";
  cin >> name;
  cout << "input age:";
  cin >> age;
  cout << name << "さん、こんにちは。" << endl;
  cout << "あなたは" << age << "歳なんですね。" << endl;
}

