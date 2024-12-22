#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 int n,a,b,c;
 cin>>n>>a>>b>>c;
 ll k = a+b+c;
 ll  result =  (n/k)*3;
 n=n%k;
 if(n>0){
    result++;
    n-=a;
 }
 if(n>0){
    result++;
    n-=b;
 }
 if(n>0){
    result++;
    n-=c;
 }
cout<<result<<nl;

}
int main(){
   fastread()

int t;cin>>t;
while(t--){
   solve();
}
    return 0;
}