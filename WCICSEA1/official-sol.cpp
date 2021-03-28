#include <bits/stdc++.h>
using namespace std;
const int MN = 1e5+2;
int n, m;
struct D {
   int t, s;
   D (int t, int s): t(t), s(s) {}
   D () : t(100*MN), s(100*MN) {}
   bool isInf() const {return t == 100*MN && s == 100*MN;}
   D operator+(const D &x) const {return D{t+x.t, s+x.s};}
   bool operator<(const D &x) const {
       if (t != x.t) return t < x.t; return s < x.s;
   }
   bool operator>(const D &x) const {
       if (t != x.t) return t > x.t; return s > x.s;
   }
};
vector<pair<int, D>> g1[MN], g2[MN];
D dst1[MN], dst2[MN];
void dijkstra(int s, vector<pair<int, D>> *g, D *dst) {
   priority_queue<pair<D, int>, vector<pair<D, int>>, greater<>> q;
   q.emplace(D{0, 0}, s);
   while (!q.empty()) {
       D d = q.top().first; int i = q.top().second; q.pop();
       if (d > dst[i]) continue;
       dst[i] = d;
       for (pair<int, D> j : g[i]) {
           int t = j.first; D td = j.second;
           if (d+td < dst[t]) {
               dst[t] = d+td;
               q.emplace(dst[t], t);
           }
       }
   }
}
int main() {
   ios::sync_with_stdio(0); cin.tie(0);
   cin >> n >> m;
   for (int i = 0; i < m; ++i) {
       int a, b, t, s; cin >> a >> b >> t >> s;
       g1[a].emplace_back(b, D{t, s});
       g2[b].emplace_back(a, D{t, s});
   }
   dijkstra(1, g1, dst1); dijkstra(n, g2, dst2);
   int mnp = dst1[n].t; D ssp;
   for (int i = 1; i <= n; ++i) for (pair<int, D> j : g1[i]) {
       D t = dst1[i] + j.second + dst2[j.first];
       if (t.t > mnp && t < ssp) ssp = t;
   }
   if (ssp.isInf()) cout << -1 << endl;
   else cout << ssp.t << " " << ssp.s << endl;
}
