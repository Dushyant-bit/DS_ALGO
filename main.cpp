#include<bits/stdc++.h>
using namespace std;
int wine(int i,int j ,int year,int arr[],int dp[]){
    if(i>j){
        return 0;
    }
    dp[i]=max((arr[i]*year + wine(i+1,j,year+1,arr,dp)),(arr[j]*year+wine(i,j-1,year+1,arr,dp)));
    return dp[i];}
int main(){
    int dp[100]={0};
    int arr[5]={3,1,8,7,5};
  cout<<  wine(0,4,1,arr,dp);

}