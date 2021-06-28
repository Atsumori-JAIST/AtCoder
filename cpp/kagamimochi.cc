using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main() {

  int result = 1;

  int n = 0;
  cin >> n;

  vector<int> mochi(n);
  for (int i = 0; i < n; i++) {
    cin >> mochi[i];
  }
  sort(mochi.begin(), mochi.end(), greater<int>{});

  for (int j = 1; j < n; j++) {
    if (mochi[j-1] != mochi[j]) {
      result++;
    }
  }

  cout << result << endl;
}