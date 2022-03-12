#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    const int n=100000;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=i+1;
    int sum1=0,sum2=0;
    int sum;
	long long head,tail,freq;

	QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

	//starttime
	QueryPerformanceCounter((LARGE_INTEGER*)&head);
    for(int i=0;i<n;i+=2)
    {
       sum1+=a[i];
       sum2+=a[i+1];
    }
    sum=sum1+sum2;
	QueryPerformanceCounter((LARGE_INTEGER*)&tail);
	//endtime
    cout<<"Col: "<<(tail-head)*1000.0/freq<<"ms"<<endl;
  
    return 0;
}
