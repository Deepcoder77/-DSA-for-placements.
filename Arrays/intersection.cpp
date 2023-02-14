#include<bits/stdc++.h>
using namespace std;
int main(){
    //asuming the vector to be return may be sorted or not sorted
int arr[5]={3,4,3,5,7};
int ar[5]={3,4,9,1,3};
vector<int>v;
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
    if(arr[i]==ar[j]){
        v.push_back(arr[i]);
        break;
    }
}
}


    for(auto m:v){
        cout<<m<<" ";
        
    }

    return 0;
}