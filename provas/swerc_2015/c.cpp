#include <bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define cl(x, v) memset((x), (v), sizeof(x))

#define db(x) cerr << #x << " == " << x << endl
#define dbs(x) cerr << x << endl
#define _ << ", " <<

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;

const ld EPS = 1e-9, PI = acos(-1.);
const int INF = 0x3f3f3f3f, MOD = 1e9+7;
const int N = 1e5+5;

int t, n;
ll ans;
priority_queue<ll> pq;

int main() {
  scanf("%d", &t);
  for(int tt=0; tt<t; tt++) {
    ans = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
      ll tmp;
      scanf("%lld", &tmp);
      pq.push(-tmp);
    }

    while(pq.size() > 1) {
      ll a, b;
      a = pq.top();
      pq.pop();
      b = pq.top();
      pq.pop();
      ans -= a+b;
      pq.push(a+b);
    }

    pq.pop();

    printf("%lld\n", ans);
  }
  return 0;
}
