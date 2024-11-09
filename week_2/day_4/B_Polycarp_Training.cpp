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
       int n;cin>>n;
      multiset<int>ms;
       for(int i=0;i<n;i++){
        int x;cin>>x;
        ms.insert(x);
       }
    
    int c=0,day=1;
    while(!ms.empty()){
        auto a = ms.lower_bound(day);
        if(a !=ms.end()){
           c++;
           ms.erase(a);
        }
        else break;
        day++;
       
    }
    cout<<c;
    return 0;
}