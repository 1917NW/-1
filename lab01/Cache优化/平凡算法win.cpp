#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	//n x n matrix
	const int n = 600;
	int** b=new int* [n];
	for(int i=0;i<n;i++)
		b[i]=new int[n];
	int sum[n]={0};
	int* a=new int[n];
	for(int i=0;i<n;i++)
    {
         a[i]=1;
    }
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
		b[i][j]=i+j;
	}
	long long head,tail,freq;

	QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

	//starttime
	QueryPerformanceCounter((LARGE_INTEGER*)&head);
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
            sum[j]+=b[i][j]*a[i];
    }
    QueryPerformanceCounter((LARGE_INTEGER*)&tail);
	//endtime
    cout<<"Col: "<<(tail-head)*1000.0/freq<<"ms"<<endl;
}