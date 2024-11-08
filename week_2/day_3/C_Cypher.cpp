#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp " "
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        int x;string s;
        cin>>x>>s;

        for(int j=0;j<x;j++){
            if(s[j]=='U'){
                if(v[i]==0) v[i]=9;
                else v[i]--;
            }
            else{
                if(v[i]==9) v[i]=0;
                else v[i]++;
            }
        }
    }
    for(auto i:v){
        cout<<i<<sp;
    }
    cout<<nl;

}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
       int t;cin>>t;
       while(t--){
        solve();
       }

    return 0;
}