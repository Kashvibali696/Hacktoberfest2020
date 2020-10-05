#include<iostream>
using namespace std;
int main()
{
int i,f=1,n,sum=0;
cout<<"Enter a number : ";
cin>>n;
for(i=1;i<=n;i++)
{
f=f*i;
sum=sum+f;
}
cout<<" Sum of factorial of a number : ";
cout<<sum<<endl;
return 0;
}
