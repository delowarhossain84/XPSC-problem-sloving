#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int n;cin>>n;
    deque<int>dq(n);

    for(int i=0;i<n;i++){
        cin>>dq[i];
    }
   
    int s=0,d=0,w = 1;

    while(!dq.empty()){
    int left = dq.front();
    int right = dq.back();
    int mx = max(left,right);

    if(w % 2 !=0) s+=mx;
    else d+=mx;
  
    if(mx==left) dq.pop_front();
    else dq.pop_back();
  w++;
    }
    cout<<s<<" "<<d;

    

    return 0;
}