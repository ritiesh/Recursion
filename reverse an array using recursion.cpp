#include <iostream>

using namespace std;
int fun(int l,int r,int arr[])
{
    if(l>=r)
    {
    return 0;
    }
    swap(arr[l],arr[r]);
    fun(l+1,r-1,arr);
}
int main()
{
    int n=5;
    int arr[n]={1,2,3,4,5};
    
    fun(0,n-1,arr);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }

    return 0;
}
