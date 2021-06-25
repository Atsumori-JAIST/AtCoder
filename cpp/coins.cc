using namespace std;
#include <iostream>

int main() {

  int count  = 0;
  int tmpSum = 0;

  int input[4];
  for (int i = 0; i < 4; i++) {
    cin >> input[i];
  }

  for (int l = 0; l <= input[0]; l++) {
    for (int m = 0; m <= input[1]; m++) {
      for (int n = 0; n <= input[2]; n++) {
        tmpSum = (500 * l) + (100 * m) + (50 * n);
        if (input[3] == tmpSum) {
          count++;
        }
      }
    }
  }

  cout << count << endl;
  return 0;
}