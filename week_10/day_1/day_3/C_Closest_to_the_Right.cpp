#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 int n,k;
 cin>>n>>k;
 vector<int>v(n+1);
 for(int i=1;i<=n;i++) cin>>v[i];

 for(int i =1;i<=k;i++){
    int key;cin>>key;
    int l=1,r=n,mid,result = n +1;
 
    while(l<=r){
        mid = (l+r)/2;
        // mid = l + (r-l)/2;
        if(v[mid]>=key) {
            result = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout<<result<<nl;
 }
}
int main(){
   fastread()
   solve();
    return 0;
}