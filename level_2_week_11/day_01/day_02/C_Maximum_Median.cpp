#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


int main(){
   fastread()

int n,k;
cin>>n>>k;
vector<int>v(n);
for(int i=0;i<n;i++) cin>>v[i];
sort(v.begin(),v.end());

auto median = [&](int med){
    ll cnt = 0;
    for(int i=n/2;i<n;i++){

        cnt+= (med > v[i] ? (med - v[i]):0);
    }
    //return cnt<=k;
    if(cnt<=k) return true;
    else return false;
};

int l = 1,r = 2e9,ans;
while(l<=r){
    ll mid = l+(r-l)/2;
    if(median(mid)){
        ans  = mid;
        l = mid + 1;
    }
    else{
        r = mid - 1;
    }
}
cout<<ans<<nl;
    return 0;
}