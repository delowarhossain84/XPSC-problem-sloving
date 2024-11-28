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
 int t;cin>>t;
 while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=n;i>0;i--){
        v.push_back(i);
        
    }
    reverse(v.begin(),v.begin()+ k+1);
    for(int i=0;i<n;i++) cout<<v[i]<<sp;
    cout<<nl;
 }

    return 0;
}