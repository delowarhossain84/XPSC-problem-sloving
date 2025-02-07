#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
   fastread();
   int n, t;
   cin >> n >> t;
   vector<int> v(n);
   for (int i = 0; i < n; i++) cin >> v[i];

   auto result = [&](ll sec) {
       ll cnt = 0;
       for (int i = 0; i < n; i++) {
           cnt += (sec / v[i]);
           if (cnt >= t) return true;
       }
       return cnt >= t;
   };

   ll l = 1, r = 1e18, ans, mid; 
   while (l <= r) {
       mid = l + (r - l) / 2; 
       if (result(mid)) {
           ans = mid;
           r = mid - 1;
       } else {
           l = mid + 1;
       }
   }
   cout << ans << nl;
   return 0;
}
