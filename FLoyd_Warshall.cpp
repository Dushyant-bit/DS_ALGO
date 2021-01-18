#include<bits/stdc++.h>
#define INF 10000
using namespace std;
vector<vector<int>> floyd_Warshall(vector<vector<int>> b){
    vector<vector<int>>N(b);
    int x =N.size();
    for(int k=0;k<x;k++){
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                if(N[i][j]>(N[i][k]+N[k][j])){
                    N[i][j]=N[i][k]+N[k][j];
                }
            }
        }
    }
    return N;}
int main(){
    vector<vector<int>> f={{0,INF,-2,INF},
                           {4,0,3,INF},
                           {INF,INF,0,2},
                           {INF,-1,INF,0}};
    auto result = floyd_Warshall(f);
    for(int i=0;i<result.size();i++){
        cout<<endl;
        {for(int j=0;j<result.size();j++)
                cout<<result[i][j]<<" ";
        }
    }
    return 0;
}