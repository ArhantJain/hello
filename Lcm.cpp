// SATYAMEVA JAYATE

// Property : LCM*HCF = Product of two number (Lcm*Hcf = a*b)

#include <bits/stdc++.h>
using namespace std;

long long int hcf(long long int a,long long int b)
{
	 if ( a==b)
		 return a;
	 else 
	 {
		  if ( a>b)
			  return hcf(a-b,b);
		  return hcf(a,b-a);
	 }
}
long long int lcm( long long int a,long long int b)
{
	long long int c;
	c = a*b;
	return ( c/hcf(a,b));
}

int main()
{
	long long int a,b,ans;
	cout << "Enter two numbers\n";
	cin >> a >> b;
	ans = lcm(a,b);
	cout <<"Lcm of "<<a<<" and "<<b<<" is "<< ans << endl;
	return 0;
}

