#include<bits/stdc++.h>
using namespace std;
int binarytodecimal(int n){
int decimal=0;
int i=0;
while(n){//iska matlab jabtak number end nahi ho jata
    
    int ans=n%10;
    //since binary number base is 2 so we multiply by power of 2;
    decimal=ans*pow(2,i)+decimal;
    n=n/10;
    i++;
}
return decimal;
}



int main(){
int binaryno;
cin>>binaryno;
int f=binarytodecimal(binaryno);
cout<<f<<endl;

    return 0;
}