#include<bits/stdc++.h>
using namespace std;
//this is the logic to swap to variable without using the third variable;
void reverse(int arr[],int n){
    int i=0;
int j=4;
while(i<j){
    arr[i]=arr[i]^arr[j];
    arr[j]=arr[i]^arr[j];
     arr[i]=arr[i]^arr[j];
     i++;
     j--;
    
}
}
int main(){
int arr[5]={3,4,5,6,7};

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}