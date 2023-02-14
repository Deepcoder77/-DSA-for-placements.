#include<bits/stdc++.h>
using namespace std;
int main(){
    //asuming the vector to be return may be sorted or not sorted
int arr[5]={3,4,5,6,7};
int ar[5]={3,4,5,6,7};
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
    if(arr[i]==ar[j]){
        ar[j]=INT_MIN;
    }
}
}
vector<int>v;
for(int i=0;i<5;i++){
    v.push_back(arr[i]);
}
for(int i=0;i<5;i++){
    if(ar[i]!=INT_MIN){
v.push_back(ar[i]);
    }
}
    for(auto m:v){
        cout<<m<<" ";
        
    }

    return 0;
}