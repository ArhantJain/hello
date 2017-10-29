#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    long long int n,i,flag;
    cout <<"Enter a number\n";
    cin >>n;
    if(n<=1)
	flag=1;

    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)   // Check for a  factor of the number (b/w 2 to n-1)
        {
            flag=1;  // Number has a factor 
            break;
        }
    }

    if (flag==0)
       cout<<n<<" is a Prime number\n";
    else
       cout<<n<<" is not a Prime number\n";
    
    return 0;
}
