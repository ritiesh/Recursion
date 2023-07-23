
#include <iostream>

using namespace std;
int fun(int n)
{
    if(n<=1)
    return n;
    return fun(n-1)+fun(n-2);
}
int main()
{
    int n=4;
    cout<<fun(n);
  
    return 0;
}
