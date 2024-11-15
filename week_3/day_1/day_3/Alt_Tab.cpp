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
       
    int t;cin>>t;
    vector<string>v(t);
    for(int i=0;i<t;i++)
        cin>>v[i];
    map<string,int>mp;
    for(int i=t-1;i>=0;i--){
        if(!mp[v[i]]){
            mp[v[i]]=i;
            int n = v[i].size();
            cout<<v[i][n-2]<<v[i][n-1];
        }
    }

    // for(auto i:v1){
    //     int sz = i.size();
    //     cout<<i[sz-2]<<i[sz-1];
    // }

    return 0;
}