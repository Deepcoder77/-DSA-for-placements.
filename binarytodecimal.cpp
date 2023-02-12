#include<bits/stdc++.h>
using namespace std;


//first method by bitwise &;
//since hamara n pahle se hi memory me as a binary present hai to ham jab n&1 karenge to
//memory me stored binary ka last bit mil jayega usko ham bit me store kara lenge;
//then reverse kar denge i.e jo bit hame obtained hua hai usko last me rahna hai 
//hamre retrun type ke according ;

//then right shift by 1 kar denge for next left bit to obtain;


int binarytodecimalmethod1(int n){

    int b=0;
    int i=0;

    while(n>0){
        int bit=(n&1);
        //aisa isliye kiye hai taki obtained bits ko last me send kar sake basically reverse kiye hai har baar 
        //and  b me store kiye hai because hame in hi return karna hai;
        b=bit*pow(10,i++)+b;
        
        n=n>>1;
    }
    return b;
}


//method 2 by division operator
int binarytodecimalmethod2(int n){

    int b=0;
    int i=0;
    while(n>0){
        int bit=n%2;
        //obtained bit ko last me send karne ke liye b ke (basically har step par reverse kar de rahe);
        //since return type is int so reverse karte ja rahe and b me store karte ja rahe;
        b=bit*pow(10,i)+b;
        i++;
        n=n/2;
    }
    return b;
}



int main(){
int n;
cin>>n;
int ans=binarytodecimalmethod1(n);
    cout<<ans<<endl;
    int ahd=binarytodecimalmethod2(n);
    cout<<ahd<<endl;
    return 0;
}