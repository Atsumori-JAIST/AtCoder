using namespace std;
#include <iostream>
#include <vector>

int main() {

  int sum = 0;
  vector<int> iniBill(3,0);
  vector<int> resBill(3,0);

  vector<int> input(2);
  for (int i = 0; i < 2; i++) {
    cin >> input[i];
  }

  for (int j = 0; j <= input[0]; j++) {
    for (int k = 0; k <= input[0]; k++) {
      int l = input[0] - j - k;
      if (j>=0 && k>=0 && l>=0) {
        sum = (10000 * j) + (5000 * k) + (1000 * l);
        if (sum == input[1]) {
          resBill[0] = j;
          resBill[1] = k;
          resBill[2] = l;
          goto OUT;
        }
      }
    }
  }

OUT:
  if (iniBill == resBill) {
    cout << -1 << " " << -1 << " " << -1 << endl;
  } else {
    for (int m = 0; m < 3; m++) {
      cout << resBill[m] << " ";
    }
    cout << endl;
  }

  return 0;
  
}