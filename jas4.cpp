#include<iostream>
using namespace std;
int reverse(int);
int main()
{
int i,n,r;
cout<<"enter the number:";
cin>>n;
r=reverse(n);
cout<<"Reverse="<<r;
return 0;
}
int reverse(int n)
{
int rev=0,rem;
while(n>0)
{
rem=n%10;
n=n/10;
rev=rev*10+rem;
}


}

