#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter the size of array"<<endl;
cin>>n;
vector<int>arr(n);
cout<<"enter the array element"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int i=0;
int start=0;
int end=n-1;
while(i!=end){
    if(arr[i]==0){
        swap(arr[i],arr[start]);
        i++;
        start++;
    }
    else{
        swap(arr[i],arr[end]);
        end--;
    }
}
cout<<"the sorted array is given by"<<endl;
for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}
    
    return 0;
}