#include<bits/stdc++.h>
using namespace std;
#define  nl "\n"
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 int a,b;
 cin>>a>>b;

 if(a==b) cout<<a+b;
 else if(a>b){
    cout<< a+(a-1)<<nl;
 }
 else cout<<b+(b-1);

    return 0;
}