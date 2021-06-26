using namespace std;
#include <iostream>

int main() {

  int tmp = 0;
  int result = 0;
  int allSum = 0;
  
  int input[3];
  for (int i = 0; i < 3; i++) {
    cin >> input[i];
  }

  for (int x = 1; x <= input[0]; x++) {
    tmp = (x / 10) + (x % 10);
    if (tmp >= input[1] && tmp <= input[2]) {
      result += x;
    }
  }

  cout << result << endl;

}