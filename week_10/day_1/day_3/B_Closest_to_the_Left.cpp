#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    
    for (int i = 1; i <= n; i++) cin >> v[i];
    
    for (int j = 1; j <= k; j++) {
        int result = 0,l = 1, r = n;
        int key;cin>>key;
        if(key<v[1]) cout<<0<<nl;
        else{
            while(l<=r){
            int mid  =(l+r)/2;
            if(key>=v[mid]){
                result = mid;
                l = mid+1;
                }
            else r = mid-1;
        }
        cout<<result<<nl;
    }
     
  }
}

int main() {
    fastread();
    solve();
    return 0;
}
