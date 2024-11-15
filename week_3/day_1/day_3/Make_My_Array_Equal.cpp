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
       while (t--)
       {
       map<int,int>mp;
        int n;cin>>n;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x!=0){
            mp[x]++;
            }
        }

        if(mp.size()==0 || mp.size()==1) cout<<yes<<nl;
        else cout<<no<<nl;

       
       }
       

    return 0;
}