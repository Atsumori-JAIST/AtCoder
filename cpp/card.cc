using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main() {

  int alice = 0;
  int bob = 0;
  int result = 0;

  int n = 0;
  cin >> n;

  vector<int> cards(n);
  for (int k = 0; k < n ; k++) {
    cin >> cards[k];
  }
  sort(cards.begin(), cards.end(), greater<int>{});

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      alice += cards[i];
    } else {
      bob += cards[i];
    }
  }

  result = alice - bob;
  cout << result << endl;

  return 0;
  
}