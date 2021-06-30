using namespace std;
#include <iostream>
#include <string>

int main() {

  string input;
  cin >> input;
  
  int eraserPos = input.find("eraser");
  while (eraserPos != string::npos) {
    input.erase(eraserPos, 6);
    eraserPos = input.find("eraser");
  }

  int erasePos = input.find("erase");
  while (erasePos != string::npos) {
    input.erase(erasePos, 5);
    erasePos = input.find("erase");
  }

  int dreamerPos = input.find("dreamer");
  while (dreamerPos != string::npos) {
    input.erase(dreamerPos, 7);
    dreamerPos = input.find("dreamer");
  }

  int dreamPos = input.find("dream");
  while (dreamPos != string::npos) {
    input.erase(dreamPos, 5);
    dreamPos = input.find("dream");
  }

  if (input.empty() == true) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}