//Q> Minimum Number of dice throws Required to reach the destination 26 starting form the source .
//Find the shortest path as well.
#include<bits/stdc++.h>
using namespace std;
//template<typename T>
int main(){

    map<int,list<int>> V;
    V[0].push_back(1);
    V[1].push_back(2);
    V[0].push_back(3);
    for(auto x:V){
        cout<<(x.first)<<" ";
        for(auto k:x.second)
        cout<<k<<" ";
    }
}