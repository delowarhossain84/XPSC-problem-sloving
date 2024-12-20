#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int result = INT_MAX;

    for(int i=0;i<26;i++){
        int l=0,r = n-1,cnt=0;
        bool valid = true;
        char target = 'a' + i;
        while(l<=r){
            if(s[l]==s[r]){
                l++,r--;
            }else if(s[l]==target){
                l++;cnt++;
            }else if(s[r]==target){
                r--,cnt++;
            }else{
                valid =false;
                break;
            }
        }
        if(valid) result = min(result,cnt);
    }

if(result == INT_MAX) cout<<-1<<nl;
else cout<<result<<nl;

}

int main() {
    fastread();
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
