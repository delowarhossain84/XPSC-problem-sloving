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
       while(t--){

        int n;cin>>n;
       string s;
       cin>>s;
       int l=0,r=n-1,sz=n;
       while(l<r){
            if(s[l]==s[r]){
                break;
            }
            else{
                sz-=2;l++;r--;
            }
       }
       cout<<sz<<nl;;
       }

    return 0;
}