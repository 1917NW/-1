#include<iostream>
#include<sys/time.h>
#include<time.h>
using namespace std;
int main()
{
	
	const int n = 600;
	int b[n][n];
	int sum[n]={0};
	int a[n];
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

	gettimeofday(&t_start,NULL);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            sum[j]+=a[i]*b[i][j];
    }
	gettimeofday(&t_end,NULL);
    cout<<"Cost: "<<(t_end.tv_usec-t_start.tv_usec)/1000<<"ms"<<endl;
}
