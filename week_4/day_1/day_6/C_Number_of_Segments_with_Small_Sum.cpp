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
 int n,s;
 cin>>n>>s;
 ll sum=0,ans=0;
 int l=0,r=0;
 vector<int>v(n);
 for(int i=0;i<n;i++) cin>>v[i];

 while(r<n){
    sum+=v[r];
    if(sum<=s){
        ans+=(r-l+1);
    }
    else{
        while(sum>s){
            sum-=v[l];
            l++;

        if(sum<=s){
        ans+=(r-l+1);
    }
        }
    }
    r++;
 }
    cout<<ans;
    return 0;
}