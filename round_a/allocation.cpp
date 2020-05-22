#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int n, b, a[10000];

void solve()
{
  cin >> n >> b;
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  sort(a, a + n);
  int count = 0;
  for (int i = 0; i < n; ++i)
  {
    if (b >= a[i])
    {
      b -= a[i];
      ++count;
    }
  }
  cout << count << '\n';
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, i = 1;
  cin >> t;
  while (t--)
  {
    cout << "Case #" << i << ": ";
    solve();
    i++;
  }
}
