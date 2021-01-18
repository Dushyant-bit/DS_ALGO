#include<bits/stdc++.h>
using namespace std;
void prime(int n){
    vector<pair<int,int>> Factor;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int count=0;
            while(n%i==0){
                n=n/i;
                count++;
            }
            Factor.push_back(make_pair(i,count));
        }
    }
    if(n!=1){
        Factor.push_back(make_pair(n,1));
    }
    for(auto x:Factor){
        cout<<x.first<<" ^ "<<x.second<<endl;
    }
    return ;}
int main(){
    int n;
    cin>>n;
    prime(n);
}