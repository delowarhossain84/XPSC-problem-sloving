#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n,q;cin>>n>>q;
    vector<int>v(n),v1(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.rbegin(),v.rend());
     
     v1[0] = v[0];
    for(int i=1;i<n;i++){
        v1[i] = v1[i-1] + v[i];
    } 

    // for(int i=0;i<q;i++){
    //     int key;cin>>key;
    //     int l = 0,r = n-1,mid,ans = -1;
    //     bool f = false;
    //     while(l<=r){
    //         mid = (l+r)/2;
    //         if(v1[mid]>=key){
    //             ans = mid;
    //             r = mid -1;
    //             f = true;
    //         }
    //         else l = mid+1;
    //     }
    //     if(f) cout<<ans+1<<nl;
    //     else cout<<ans<<nl;
    // }

     for(int i=0;i<q;i++){
        int ans=-1;
        bool f = false;
        int key;cin>>key;
        auto it = lower_bound(v1.begin(),v1.end(),key);
        if(it != v1.end()){
            ans = it - v1.begin();
            f = true;
        }
       if(f) cout<<ans+1<<nl;
       else cout<<-1<<nl;
     }
}
int main(){
   fastread()

int t;cin>>t;
while(t--){
 solve();
 }
    return 0;
}