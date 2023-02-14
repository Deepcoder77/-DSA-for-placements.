#include <iostream>

using namespace std;

int main()
{
   int arr[10]={1,2,3,4};
   //sizeof() operator tells the size of memory which the array element taken
   cout<<sizeof(arr[0])<<endl;//in this case 4 gets printed because one int element takes 4 byte in memory;
   
   
   cout<<sizeof(arr)<<endl;//int this case 40 gets printed not 16 because inspit we put inly four element in
   //arr but we allocate size 10 to array so 40 byte of memory is take by the array no matter how less
   //element you push in array;
  
  
   cout<<sizeof(arr)/sizeof(int)<<endl;// int this case 10 gets printed because (size of arr=40/size of int=4)=10


//sizeof() wale function se aap array me kitna memory le rahe hai ye bata sakte hai aapne kitna element fill kiya hai
//array me wo to aap sizeof(arr)/sizeof(int) karke bhi pata nahi kar payenge agar apne allocated size se kam
//element fill kiye hai to;
    return 0;
}