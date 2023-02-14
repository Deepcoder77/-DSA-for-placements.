class Solution{
  public:
   
    int majorityElement(int a[], int size)
    {
        
        // your code here
         //approach 1
    map<int,int>m;
    for(int i=0;i<size;i++){
     m[a[i]]++;   
    }
    for(auto v:m){
        if(v.second>size/2){
            return v.first;
        }
    }
    return -1;
        
        //approach 2
        
        //this gives tle if time complexity is o(n) because count function already take o(n)
        //time complexity and if it used inside a loop then time complexty becomes o(n^2);
        //for(int i=0;i<size;i++){
        //    int c=count(a,a+size,a[i]);
        //    if(c>size/2){
        //        return a[i];
        //    }
        //}
        //return -1;
    }
};
