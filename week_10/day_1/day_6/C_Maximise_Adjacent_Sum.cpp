#include <bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp " " 
#define fastread() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    deque<int>dq;
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    
    sort(v.begin(), v.end());
    ll ans = 0;
   
    swap(v[0],v[n-1]);
    swap(v[0],v[1]);
    
    for (int i = 0; i < n-1; i++) ans+= v[i] + v[i + 1];
   
    
    cout << ans << nl;
   
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
