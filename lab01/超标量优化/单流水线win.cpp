#include<iostream>
#include<windows.h>
using namespace std;
int main()
{

    const int n=100000;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=i+1;
    int sum=0;
	long long head,tail,freq;

	QueryPerformanceFrequency((LARGE_INTEGER*)&freq);
	//starttime
	QueryPerformanceCounter((LARGE_INTEGER*)&head);
    for(int i=0;i<n;i++)
        sum+=a[i];
      QueryPerformanceCounter((LARGE_INTEGER*)&tail);
	//endtime
    cout<<"Col: "<<(tail-head)*1000.0/freq<<"ms"<<endl;
    return 0;
}
