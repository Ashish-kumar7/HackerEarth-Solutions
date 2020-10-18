#include<bits/stdc++.h>
using namespace std;

#define LL long long
const int N = 1e5 + 5;
int n, q, r, g, b, x, y, z;
vector<pair<int,int>> a[N], c[N], d[N];
vector<int> mn1[N], mn2[N], mn3[N];

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    
    cin >> n >> q;

    while(n--) {
        cin >> r >> g >> b;
        a[r].push_back({g, b});
        c[g].push_back({r, b});
        d[b].push_back({r, g});
    }

    for(auto &i : a) sort(i.begin(), i.end());
    for(auto &i : c) sort(i.begin(), i.end());
    for(auto &i : d) sort(i.begin(), i.end());
    
    for(int i = 0; i < N; i++) {
        int mn = 1e9;
        for(auto j : a[i]) {
            mn = min(mn, j.second);
            mn1[i].push_back(mn);
        }
    }

    for(int i = 0; i < N; i++) {
        int mn = 1e9;
        for(auto j : c[i]) {
            mn = min(mn, j.second);
            mn2[i].push_back(mn);
        }
    }

   for(int i = 0; i < N; i++) {
        int mn = 1e9;
        for(auto j : d[i]) {
            mn = min(mn, j.second);
            mn3[i].push_back(mn);
        }
    }


    while(q--) {
        cin >> x >> y >> z;
        
        bool ok = 1, pk = 1, ck = 1;
        int pp = 0, qq = 0, rr = 0;
        int mx = 1e9;

        if(!a[x].empty()) pp = upper_bound(a[x].begin(), a[x].end(), make_pair(y, mx)) - a[x].begin();
        if(!c[y].empty()) qq = upper_bound(c[y].begin(), c[y].end(), make_pair(x, mx)) - c[y].begin(); 
        if(!d[z].empty()) rr = upper_bound(d[z].begin(), d[z].end(), make_pair(x, mx)) - d[z].begin();  

        //cout << pp << " " << qq << " " << rr << '\n';
       // cout << mn1[pp] << " " << mn2[qq] << " " << mn3[rr] << '\n';
        cout << ((pp && qq && rr) && (mn1[x][pp-1] <= z && mn2[y][qq-1] <= z && mn3[z][rr-1] <= y) ? "YES" : "NO") << '\n';
    }
}