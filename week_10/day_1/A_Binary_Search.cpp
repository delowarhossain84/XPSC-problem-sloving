#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
   int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<k;i++){
    int key;cin>>key;
    int l=0,r=n-1;
    bool ok = false;
    while(l<=r){
        int mid = (l+r)/2;
        if(key==v[mid]) {ok = true;break;}
        else if(key>v[mid]){
            l=mid+1;
        }
        else if(key<v[mid]){
            r = mid-1;
        }
    }
    if(ok) cout<<yes<<nl;
    else cout<<no<<nl;
}
}
int main(){
   fastread()
 
    solve();
    return 0;
}