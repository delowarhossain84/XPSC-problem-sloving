#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
       int t;cin>>t;
       deque<int>dq;
       map<int,int>mp;
       while(t--){
        int n;cin>>n;
       for(int i=0;i<n;i++){
        int x;cin>>x;
        dq.push_back(x);
        }

        for(int i=n-1;i>=0;i--){
            // auto it = find(dq1.begin(),dq1.end(),dq[i]);
            if(!mp[dq[i]]){
                mp[dq[i]]= i;
                }
            else break;
    
        }
        cout<<dq.size() - mp.size()<<nl;
        dq.clear();mp.clear();
    }

    return 0;
}