#include<iostream>
#include<sys/time.h>
#include<time.h>
using namespace std;
int main()
{
	int count=20;
	double time=0;
	const int n = 600;
	int** b=new int*[n];
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
	struct timeval t_start,t_end;
	for(int i=count;i>0;i--){
	gettimeofday(&t_start,NULL);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            sum[j]+=a[i]*b[i][j];
    }
	gettimeofday(&t_end,NULL);
	time+=(t_end.tv_usec-t_start.tv_usec);
	}
    cout<<"Cost: "<<time/(count*1000)<<"ms"<<endl;
}
