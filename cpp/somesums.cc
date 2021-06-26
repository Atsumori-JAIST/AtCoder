using namespace std;
#include <iostream>

int DigitSum(int n);

int main() {

  int tmp = 0;
  int result = 0;
  int allSum = 0;
  
  int input[3];
  for (int i = 0; i < 3; i++) {
    cin >> input[i];
  }

  for (int x = 1; x <= input[0]; x++) {
    tmp = DigitSum(x);
    if (tmp >= input[1] && tmp <= input[2]) {
      result += x;
    }
  }

  cout << result << endl;

}

int DigitSum(int n) {
  if (n < 10) {
    return n;
  } else {
    return DigitSum(n / 10) + (n % 10);
  }
}