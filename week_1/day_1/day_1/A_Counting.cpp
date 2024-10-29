#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 int n,m;
 cin>>n>>m;
 int count=0;
 if(n>m) cout<<0;
 else{
    for(int i=n;i<=m;i++){
        count++;
    }
    cout<<count;
 }

    return 0;
}