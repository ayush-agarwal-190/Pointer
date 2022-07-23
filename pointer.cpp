#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int *aptr;
    aptr=&a;
   // Will print the address
    cout<<&a<<endl;
   // Will print the address
    cout<<aptr<<endl;
    // This will Print the value of a means 10
    cout<<*aptr<<endl;
     *aptr=20;
    cout<<a<<endl;


int arr[]={1,2,3,4,5};

cout<<*arr<<endl;
// will print 1 0th element

int *ptr=arr;
for(int i=0;i<5;i++)
{
cout<<*ptr<<" ";
cout<<*(arr+i)<<" ";
ptr++;
}



    return 0;
}