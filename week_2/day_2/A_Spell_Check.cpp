#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
       int t;cin>>t;
       while(t--){
        int n;cin>>n;
        string name;
        cin>>name;

        if(name.size()>5) cout<<no<<nl;
        else{
         sort(name.begin(),name.end());
            if(name=="Timru") cout<<yes<<nl;
            else cout<<no<<nl;  
          }  
        }

    return 0;
}