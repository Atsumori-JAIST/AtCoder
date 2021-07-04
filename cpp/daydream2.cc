using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main() {

  vector<char> chars = {'a','d','e','m','r','s'};
  string input;
  cin >> input;

  string chunk;
  int idx = 0;

  while (input.empty() != true) {

    auto tmp = find(chars.begin(), chars.end(), input[idx]);
    if (tmp == chars.end()) {
      cout << "NO" << endl;
      break;
    } else {
      chunk += input[idx];
    }

    switch (input.length()) {
      case 5:
        if (input.substr(0,5)=="erase" || input.substr(0,5)=="dream") {
          cout << "YES" << endl;
          goto OUT;
        }
      case 6:
        if (input.substr(0,6) == "eraser") {
          cout << "YES" << endl;
          goto OUT;
        }
      case 7:
        if (input.substr(0,7) == "dreamer") {
          cout << "YES" << endl;
          goto OUT;
        }
      default:
        if (idx == 7) {
      
          if (chunk.substr(0,6) == "eraser") {
            input.erase(input.begin(), input.begin()+6);
            chunk.clear();
            idx = 0;
          } else if (chunk.substr(0,5) == "erase") {
            input.erase(input.begin(), input.begin()+5);
            chunk.clear();
            idx = 0;
          } else if (chunk.substr(0,7) == "dreamer") {
            if (chunk.rfind("a") != 7) {
              input.erase(input.begin(), input.begin()+7);
              chunk.clear();
              idx = 0;
            } else {
              input.erase(input.begin(), input.begin()+5);
              chunk.clear();
              idx = 0;
            }
          } else {
            cout << "NO" << endl;
            goto OUT;
          }
        }
    }

    idx++;
  }

OUT:
  return 0;
}
