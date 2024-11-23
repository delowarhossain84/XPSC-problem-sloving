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
   int a,b,n;
   cin>>a>>b>>n;
   ll sum=b;
    deque<int>dq(n);
    for(int i=0;i<n;i++){
        cin>>dq[i];
        if(dq[i] < a) sum+=dq[i];
        else sum+= a - 1 ;
        }
        cout<<sum<<nl;
   }

 return 0;
}