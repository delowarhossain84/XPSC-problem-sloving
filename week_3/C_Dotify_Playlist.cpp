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
       while(t--){
        int n,k,l,ans=0;
        cin>>n>>k>>l;
        vector<pair<int,int>>p(n);
    
        for(int i=0;i<n;i++){
            cin>>p[i].first>>p[i].second;
        }

        sort(p.rbegin(),p.rend());

    for(int i=0;i<n;i++){
        if(p[i].second ==l && k>0){
            ans+=p[i].first;
            k--;
        }
    }

    if(ans == 0 || k!=0){
        cout<<-1<<nl;
    }
    else cout<<ans<<nl;


            
    //     vector<int>v;
    //     for(auto [x,y]:p){
    //            if(l==y) v.push_back(x);

    //     }
    //     if(v.size()==0) cout<<-1<<nl;
    //     else{
    //     sort(v.begin(),v.end(),greater<int>());
    //     for(int i=0;i<k;i++){
    //         ans+=v[i];
    //     }
    //      cout<<ans<<nl;
    //      v.clear();
    //    }
        
       }   

       

    return 0;
}