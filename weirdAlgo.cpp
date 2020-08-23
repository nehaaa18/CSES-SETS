/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //cout<<"Hello World";
    long long int n;
    cin>>n;
    cout<<n<<" ";
   while(n!=1)
    {
       if ((n%2)==0)
       {
         n=n/2;
         
       }
       else
       {
       n=((n*3)+1);
       }
     cout<<n<<" ";
    }
    return 0;
}
