#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    int l = 0, cnt = 0;
    ll sum = 0;

    for (int r = 0; r < n; r++) {
        sum += v[r];

        while (sum > k ) {
            sum -= v[l];
            l++;
        }

        if (sum == k) {
            cnt++;
        }
    }

    cout << cnt << nl;
}

int main() {
    fastread();
    solve();
    return 0;
}
