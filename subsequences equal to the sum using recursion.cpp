
#include <iostream>
#include <vector>

using namespace std;
int sub(int ind,vector<int>&v,int n,int k, int arr[],int sum)
{
    if(ind==n)
    {
        if(sum==k)
        {
            for(auto x:v)
            cout<<x<<" ";
        }
        cout<<endl;
        return 0;
    }
    v.push_back(arr[ind]);
    sum+=arr[ind];
    sub(ind+1,v,n,k,arr,sum);
    sum-=arr[ind];
    v.pop_back();
    sub(ind+1,v,n,k,arr,sum);
    return 0;
}
int main()
{
    int n=3;
    int k=2;
    int arr[n]={1,2,1};
    int sum=0;
    vector<int>v;
    sub(0,v,n,k,arr,sum);
    

    return 0;
}
