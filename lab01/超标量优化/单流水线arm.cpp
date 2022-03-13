#include<iostream>
#include<sys/time.h>
#include<time.h>
using namespace std;
int main()
{

    const int n=100000;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=i+1;
    int sum=0;
	struct timeval t_start,t_end;

	gettimeofday(&t_start,NULL);
    for(int i=0;i<n;i++)
        sum+=a[i];
    gettimeofday(&t_end,NULL);
	//endtime
    cout<<"Cost: "<<(1000000*(t_end.tv_sec-t_start.tv_sec）+(t_end.tv_usec-t_start.tv_usec)))/1000<<"ms"<<endl;
    return 0;
}
