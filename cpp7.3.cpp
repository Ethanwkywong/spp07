//PREPEND BEGIN
#include<iostream>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
int my_max_index(double a[], int length=3)
{
    // TODO
    int i=0;
    double max=a[0];
    /*if(length==3)
    {
        for(int k=0;k<3;k++)
    {
        if (a[k+1]>=max)
        {
            max=a[k];
            i=k+1;
        }

    }
    }
    else
    {*/
           for(int k=0;k<length;k++)
    {
        if (a[k]>=max)
        {
            max=a[k];
            i=k+1;
        }

    }
    //}


    return i;

}

int my_max_index(double a[], double b[], int length_a, int length_b){
    // TODO
    int C[length_a+length_b];

    for(int k=0;k<length_a;k++)
    {
        C[k]=a[k];
    }
    for(int k=length_a;k<length_a+length_b;k++)
    {
        C[k]=b[k-length_a];
    }
     int i=0;
    double max=C[0];
         for(int k=0;k<length_a+length_b;k++)
    {
        if (C[k]>=max)
        {
            max=C[k];
            i=k+1;
        }

    }
    return i;
}

//TEMPLATE END

//APPEND BEGIN
int main(){
    int N_a, N_b;

    cin >> N_a >> N_b;

    double *a = new double[N_a];
    double *b = new double[N_b];

    for(int i = 0; i < N_a ; i++)
        cin >> a[i];
    for(int i = 0; i < N_b ; i++)
        cin >> b[i];
    cout << "Maximum in array [a1,a2,a3] is at position: ";
    cout << my_max_index(a) << endl;
    cout << "Maximum in array [b1,b2,b3] is at position: ";
    cout << my_max_index(b) << endl;
    cout << "Maximum in array a is at position: ";
    cout << my_max_index(a, N_a) << endl;
    cout << "Maximum in array b is at position: ";
    cout << my_max_index(b, N_b) << endl;
    cout << "Maximum in array (a + b) is at position: ";
    cout << my_max_index(a, b, N_a, N_b) << endl;

    delete [] a;
    delete [] b;

    return 0;
}
//APPEND END
