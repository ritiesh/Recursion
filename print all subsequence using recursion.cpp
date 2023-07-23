#include <iostream>
#include <vector>
using namespace std;
int sub(int ind,int arr[],int n,vector<int>&v)
{
    if(ind>=n)
    {
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        return 0;
    }
    v.push_back(arr[ind]);
    sub(ind+1,arr,n,v);
    v.pop_back();
    sub(ind+1,arr,n,v);
}
int main()
{
    int n=3;
    int arr[n]={3,2,1};
    vector<int>v; 
    sub(0,arr,n,v);
    return 0;
}
