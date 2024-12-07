#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, m;
vl ks;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  ks = vl(n, 0);
  for (auto i = 0; i < n; ++i) {
    string s;
    cin >> s;

    if (s == "+") {
      ks[i] = 1;
    } else if (s == "-") {
      ks[i] = -1;
    }
  }

  for (auto i = 1; i < n; ++i) {
    for (auto j = 0; j < n; ++j) {
      string s;
      cin >> s;
    }
  }

  cin >> m;

  for (auto i = 0; i < m; ++i) {
    ll b, c;
    cin >> b >> c;

    if (c < b) {
      swap(b, c);
    }

    if (b == 0) {
      cout << (ks[c] == 1 ? "+" : "-") << '\n';
    } else {
      cout << (ks[b] * ks[c] == 1 ? "+" : "-") << '\n';
    }
  }

  return 0;
}