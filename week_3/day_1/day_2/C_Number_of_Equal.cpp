#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
       int n,m;
       ll ans=0;
       cin>>n>>m;
       vector<int>v1(n),v2(m);
        map<int,int>mp;

       for(int i=0;i<n;i++){
        cin>>v1[i];
       }

       for(int i=0;i<m;i++){
        cin>>v2[i];
       }

       for(auto i:v1){
        mp[i]++;
       }
       for(auto j:v2){
        ans+=mp[j];
       }
       cout<<ans;
       

    return 0;
}