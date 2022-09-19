#include<iostream>
using namespace std;

template <typename T>
T arrMax(T arr[], int n){
    T res = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > res)
            res = arr[i];
    }
    return res;
}

int main()
{
    int arr1[] = {10, 40, 3};
    cout << arrMax <int> (arr1, 3)   << " "; // 40
    
    float arr2[] = {10.5, 3.5, 1.5, 30.5};
    cout << arrMax <float> (arr2, 4) << " "; // 30.5
    return 0;
}

/* Limit should be a const value as both the functions are created at compile time so, we have to tell the limit before the compilation only and we are able 
to do so only, if we try to pass a variable with normal value like int x=100 and pass it as x then it gives an error, and if we use with const int x=100 
then it's works fine */

#include<iostream>

using namespace std;

template<typename T,int limit> //template<typename T1,typename T2>
T arrMax(T arr[], int n)
{
    T res=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>res)
          res=arr[i];
    }  
  return res; 
}
int main(){
     int arr1[]={10,4,3};
     cout<<arrMax<int,100> (arr1,3);
     float arr2[]={10.5, 3.5, 1.5, 30.5};
     cout<<arrMax<float,50> (arr2,4);
    return 0;
}
