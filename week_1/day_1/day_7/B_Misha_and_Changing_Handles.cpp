#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
    map<string,string>mp1,mp2;
    int n;cin>>n;
    while(n--){
        string s,s1;
        cin>>s>>s1;

        if(mp2.find(s) != mp2.end()){
            string k = mp2[s];
            mp1[k]= s1;
            mp2.erase(s);
            mp2[s1] = k; 
        }
        else{
            mp1[s] =  s1;
            mp2[s1] = s;
        }
        
        }
        cout<<mp1.size()<<endl;
        for(auto[x,y]:mp1){
            cout<<x<<" "<<y<<"\n";
        }

    return 0;
}