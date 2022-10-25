#include<iostream>
using namespace std;
struct file
{
    int year;
    int month;
    int day;
    int salary;
};
int main()
{

	int N=0;
	cin>>N;
	file f[N];
	file temp;
	for(int i=0;i<N;i++)
    {
        cin>>f[i].year>>f[i].month>>f[i].day>>f[i].salary;
    }
    for(int k=0;k<N;k++)
    {
        if(f[k].year<f[k+1].year)
        {
            temp=f[k];
            f[k]=f[k+1];
            f[k+1]=temp;
        }
        else
        {
            if(f[k].month<f[k+1].month)
            {
                temp=f[k];
            f[k]=f[k+1];
            f[k+1]=temp;
            }
            else
            {
               if(f[k].day<f[k+1].day)
                {
                temp=f[k];
                f[k]=f[k+1];
                f[k+1]=temp;
                }
               else
               {
                   if(f[k].salary<f[k+1].salary)
                {
                temp=f[k];
                f[k]=f[k+1];
                f[k+1]=temp;
                }
               }
            }
        }
    }

}
