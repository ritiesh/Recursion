#include <iostream>

using namespace std;
int fun(string s,int i,int n)
{
    if(i>n)
    {
        cout<<"true";
        return 0;
    }
    if(s[i]!=s[n])
    {
        cout<<"false";
        return 0;
    }
    else
    {
        fun(s,i+1,n-1);
    }
}
int main()
{
    string s="map";
    int n=s.size();
    fun(s,0,n-1);
  
    return 0;
}
