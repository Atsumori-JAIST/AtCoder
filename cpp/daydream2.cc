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

    /*
    auto tmp = find(chars.begin(), chars.end(), input[idx]);
    if (tmp == chars.end()) {
      cout << "NO" << endl;
      break;
    } else {
      chunk += input[idx];
    }
    */
    chunk += input[idx];

    if (idx == 7) {

      cout << chunk << endl;
      
      if (chunk.erase(6) == "eraser") {
        input.erase(input.begin(), input.begin()+6);
        chunk.clear();
        idx = 0;
      } else if (chunk.erase(5) == "erase") {
        input.erase(input.begin(), input.begin()+5);
        chunk.clear();
        idx = 0;
        cout << input << endl;
        cout << chunk.empty() << endl;
      } else if (chunk.erase(7) == "dreamer") {
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
        cout << "Not Match!!" << endl;
        break;
      }

      if (!chunk.empty()) {
        cout << "NO" << endl;
        break;
      }
    }


    idx++;
  }

  cout << "DEBUG!!" << endl;
  return 0;
}
