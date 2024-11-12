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
       int n,m;
       cin>>n>>m;
       vector<int>v(n),v1(m);

       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       for(int i=0;i<m;i++){
        cin>>v1[i];
       }
       int l=0,r=0,cnt=0;
       while (r < m) {
        if (l < n && v[l] < v1[r]) {
         cnt++, l++;
        }
        else {
         cout << cnt << " ";
         r++;
      }
   }

    return 0;
}