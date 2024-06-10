#include <bits/stdc++.h>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define int long long

signed main() {
  IOS 
    int n, m;
    cin >> n >> m;
    int ans = 0;
    map<int, int> m1;
    for (int i = 0; i < n; ++i) {
      int x, u;
      cin >> x >> u;
      m1[x * u]++;
    }
    for (int i = 0; i < m; ++i) {
      int y, v;
      cin >> y >> v;
      if (m1.count(y * v)) {
        ans++;
        m1[y * v]--;
        if (m1[y * v] == 0) {
          m1.erase(y * v);
        }
      }
    }
    cout << ans << "\n";
  
  return 0;
}
