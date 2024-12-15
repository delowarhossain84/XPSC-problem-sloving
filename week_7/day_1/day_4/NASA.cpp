#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int mxbit = (1LL <<15);

bool is_palindrome(int a){
    string n = to_string(a);
    string m = to_string(a);
    reverse(m.begin(),m.end());
    if(m==n) return true;
    else return false;
 }

vector<int>allpalindrome;
 void makepalindrome(){
    for(int i=0;i<mxbit;i++){
    if(is_palindrome(i)) allpalindrome.push_back(i);
    }
 }


void solve(){
 int n;cin>>n;
 vector<int>v(n),freq(mxbit+1);
 for(int i=0;i<n;i++) {cin>>v[i]; freq[v[i]]++;}
ll result = n;
for(int i=0;i<n;i++){
    for(int j = 0;j<allpalindrome.size();j++){
        int current = v[i] ^ allpalindrome[j];
        result+=freq[current];

    }
}cout<<result/2<<nl;
 
}
int main(){
   fastread()

makepalindrome();
int t;cin>>t;
while(t--){
   solve();
  
}
    return 0;
}