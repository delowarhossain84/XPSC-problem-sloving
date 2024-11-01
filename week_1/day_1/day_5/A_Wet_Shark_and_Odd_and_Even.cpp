#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 int n;cin>>n;

 vector<int>v,even,odd;
 
 for(int i=0;i<n;i++){
    int x;cin>>x;
    v.push_back(x);
 }

 long long int sum=0,sum2=0;

 for(int i:v){
    if(i%2==0) even.push_back(i);
    else odd.push_back(i);
 }

 for(int i:even){
    sum+=i;
 }

 sort(odd.begin(),odd.end(),greater<int>());

 if(odd.size()%2==0){
    for(int i:odd){
        sum2+=i;
    }
   
 }
 else{
    for(int i=0;i<odd.size()-1;i++){
        sum2+=odd[i];
     } 
   
     }
 cout<<sum+sum2;
    return 0;
}