#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
       
       int n;cin>>n;
       map<int,int>mp;
       int mx = 0;

       for(int i=1;i<=n;i++){
         int x;cin>>x;
         mp[x]++;
         mx= max(mx,mp[x]);
       }

      //  for(auto[x,y]:mp){
      //    cout<<x<<" "<<y<<endl;
      //  }

       cout<<mx;
      
    return 0;
}