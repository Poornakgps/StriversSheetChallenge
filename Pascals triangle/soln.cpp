#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> pascal;
    vector<ll> prev;
    prev.pb(1);
    pascal.pb(prev);
    while(--n){
        ll sz=prev.size();
        vector<ll> temp;
        for(int i=0; i<sz; i++){
          if(i==0 ){
            temp.pb(prev[i]);
            continue;
          }
          else{
            temp.pb(prev[i-1] +prev[i]);
          }

        }
        temp.pb(1);
        pascal.pb(temp);
        prev=temp;
    }
    return pascal;
}

void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> pascal;
    pascal= printPascal(n);

    for(auto it: pascal){
        for(auto it1: it){
            cout<<it1<<" ";
        }
        cout<<endl;
    }
}

int main(){

    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}