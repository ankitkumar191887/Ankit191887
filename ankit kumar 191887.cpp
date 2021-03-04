#include<iostream>
#include<math.h>
using namespace std;
double power(double m,int n=2)
{
    double mn=pow(m,n);
    return mn;
}
 
int main()
{
    double mn;
    double m;
    int n,t;

    cout<<" Enter the value of m "<<endl;
    cin>>m;
    
    cout<<"Press 0 if you want square of m -- ";
    cin>>t;
    
    if(t==0)
    {
    	mn=power(m);
    	cout<<" m to power n : "<<mn<<endl;
	}
	else
	{
		cout<<" Enter the value of n "<<endl;
    	cin>>n;
		mn=power(m,n);
    	cout<<" m to power n : "<<mn<<endl;
	}
return 0;
}
