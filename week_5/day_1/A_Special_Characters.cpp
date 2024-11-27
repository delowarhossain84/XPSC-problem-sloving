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
    int n;cin>>n;
    if(n%2 !=0) cout<<no<<nl;
    else {
        cout<<yes<<nl;
        for(int i=0;i<n/2;i++){
            if(i%2==0) cout<<"AA";
            else cout<<"BB";
        }cout<<nl;
        
    }
 }
    return 0;
}