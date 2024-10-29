#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 int a,b,c,ans=0;
 cin>>a>>b>>c;
 for(int i=a;i<=b;i++){
    if(i%c==0){
        ans=i; break;
    }
 }
 if(ans)  cout<<ans<<nl;
 else cout<<-1<<nl;

    return 0;
}