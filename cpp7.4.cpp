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

	int N = 0;
	cin>>N;
	file f[N];
	file temp;
	for(int i = 0;i<N;i++)
    {
        cin>>f[i].year>>f[i].month>>f[i].day>>f[i].salary;
    }
 
    for(int k = 0;k < N-1;k++)
    {
    	for(int j = k+1;j < N;j++)
    	{
    		if(f[k].year > f[j].year)
            {
               temp = f[k];
               f[k] = f[j];
               f[j] = temp;
 
            }
            else if(f[k].year==f[j].year)
            {
                if(f[k].month>f[j].month)
                {
                temp=f[k];
                f[k]=f[j];
                f[j]=temp;
   
                }
                else if(f[k].month==f[j].month)
                {
                    if(f[k].day>f[j].day)
                     {
                        temp=f[k];
                        f[k]=f[j];
                        f[j]=temp;
                     }
                    else if(f[k].day==f[j].day)
                     {
                        if(f[k].salary<f[j].salary)
                        {
                           temp=f[k];
                           f[k]=f[j];
                           f[j]=temp;
                        }
                     }
                }
            }
		}
        
    }
    cout<<"Birthday:\tSalary\n";
    for(int i=0;i<N;i++)
    {
    	cout<<f[i].year<<"/"<<f[i].month<<"/"<<f[i].day<<"\t"<<f[i].salary<<"\n";
	}

}
