using namespace std;
#include <iostream>
#include <string>

string searchDelete(string s, string part);

int main() {

  string input;
  cin >> input;

  input = searchDelete(input, "eraser");
  input = searchDelete(input, "erase");
  input = searchDelete(input, "dreamer");
  input = searchDelete(input, "dream");

  if (input.empty() == true) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}


string searchDelete(string s, string part) {
  int pos = s.find(part);
  while (pos != string::npos) {
    s.erase(pos, part.length());
    pos = s.find(part);
  }
  return s;
}