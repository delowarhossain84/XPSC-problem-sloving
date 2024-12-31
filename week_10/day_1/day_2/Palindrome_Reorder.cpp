#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    string s;cin>>s;
    map<char,int>mp;
    deque<char>dq;
    for(auto i:s)  mp[i]++;
    
    int cnt=0;
    char ch;
    for(auto [x,y]:mp){
        if(y%2 !=0) {
            cnt++;
            ch = x;
        }
    }
    if(cnt>1){
         cout<<"NO SOLUTION"<<nl;
         return;
         }

    if(cnt) dq.push_front(ch);

    for(auto [x,y]:mp){
        for(int i = 0;i<y/2;i++){
            dq.push_front(x);
            dq.push_back(x);        
        }
    }
    for(auto i:dq) cout<<i;
    
 
}
int main(){
   fastread()
 solve();
    return 0;
}