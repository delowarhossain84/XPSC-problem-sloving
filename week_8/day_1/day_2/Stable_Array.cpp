#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 int n;cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++) cin>>v[i];

 int mx = INT_MIN,cnt=0;
 for(int i=n-1;i>=0;i--){
    int j = i -1;
    if(v[i]>v[j]){
        while(j>=0 && v[i]>v[j]){
            cnt++;
            j--;
        }

    }
    mx = max(mx,cnt);
    cnt=0;
    i = j+1;

 }
 cout<<mx<<nl;
}
int main(){
   fastread()

int t;cin>>t;
while(t--){
   solve();
}
    return 0;
}