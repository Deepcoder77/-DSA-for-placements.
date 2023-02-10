//pass by value means copy of actual variable gets created in function .

#include<bits/stdc++.h>
using namespace std;
void print (int nun){
    nun++;
    cout<<nun<<endl;
}
int main(){
int a;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"after calling the print function value of a is "<<endl;

print(a);
cout<<"printing value of a in main function"<<endl;
    cout<<a<<endl;
    return 0;
}
//let's understand what happend if we create print function and pass nun as argument then 
//copy of a from main function gets created at different memory location but it's value is same as
// a entered by the coder; because a copy is created then if we make any change in print function on 
//nun(i.e copy of a) and calling the print function main then updated value of a according to print 
//function gets printed;
//but if we cout value of a in main function then then actual value of a (as entered by coder) 
//gets printed if we not make any changes on value of a in main function. 
