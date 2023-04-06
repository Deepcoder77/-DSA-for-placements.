#include<bits/stdc++.h>
using namespace std;
int main(){
//to count the number of set bits in a given number we don't need to convert the given number 
//in binary form. If we use bitwise operator then it, by default work on the bits of the given number.
int n;
cin>>n;
 int ans=0;

 //ham bitwise operator use kar rahe hai to wo apne aap bit level par kaam karega 
 //(&) check karega ki n ki last bit 1 hai ya nahi ; 
 //then jab last bit check ho jayegi to hame use hatana hoga means uske left side ki bit ab check karni hogi
 // to ye number level par to baat ho nahi rahi hai ki n-- kar denge to dusre bit par jaane ke liye hame right shift karna padega;
 //to last wali bit gayab ho jayegi and then uske jagah jo bit aayegi uspar (&) operator functioning karega; 
 while(n!=0){
    if(n&1){ //this means if n&1==1 then set bit ke count ko incresase kar do ye kaam tu xor se bhi l=kar sakta hai if(n^1==0) ans++; i.e 1^1==0 hota hai to agar bit 
     //set bit rahegi to 1se xor karne par 0 degi;
     //OR se check karne ke liye if(n|0==1) ans++; agar bit 1 rahegi tabhi 0 ke sath or 1 dega; 
        ans++;
    }

   n= n>>1;
 }

cout<<ans<<endl;

    return 0;
}
