#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int a[100];
    cout<<"Enter total no of  elements in an arrar  : ";
    cin>>n;
    cout<<"Enter no's  : "<<endl;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
       if(a[0]<a[i])
           a[0]=a[i];
    }
    cout<<"Max element in an array : ";
    cout<<a[0];
}
