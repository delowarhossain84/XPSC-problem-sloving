// #include<bits/stdc++.h>
// #define nl "\n"
// #define ll long long int
// #define yes "YES"
// #define no "NO"
// #define sp  " " 
// #define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// using namespace std;
// void solve(){
//  int n;cin>>n;
//  vector<int>v(n+5);
//  for(int i=0;i<n;i++) cin>>v[i];
 
//  map<int,int>mp;
//  for(int i = 0;i<n;i++){

//     for(int j=2;j*j<=v[i];j++){
//         while(v[i]%j==0){
//             mp[j]++;
//             v[i]/=j;
//           }
//         }
//     if(v[i]>1) mp[v[i]]++;

// }
// bool ans = true;
// for(auto[x,y]:mp){
//     if(y%n !=0){
//         ans = false; 
//     }
//     }

//     if(ans) cout<<yes<<nl;
//     else cout<<no<<nl;

// }
// int main(){
//    fastread();

// int t;cin>>t;
// while(t--){
//    solve();
// }
//     return 0;
// }

#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 int n;cin>>n;
 vector<int>v(n+5);
 for(int i = 0;i<n;i++) cin>>v[i];

 map<int,int>mp;
 for(int i = 0;i<n;i++){
    for(int j = 2;j*j<=v[i];j++){
        while(v[i]%j==0){
            mp[j]++;
            v[i]/=j;
        }
    }
    if(v[i]>1) mp[v[i]]++;
 }
 for(auto [x,y]:mp){
    cout<<x<<"--> "<<y<<nl;
 }cout<<nl;

}
int main(){
   fastread();

int t;cin>>t;
while(t--){
   solve();
}
    return 0;
}