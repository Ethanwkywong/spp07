//PREPEND BEGIN
#include<iostream>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
int duck(int n, int d){
  	int left=0;
  	left=2*d+2;
    if(n>1)
    {
        return duck(n-1,left);
    }
    else
    {
        return left;
    }



  	//After passing (n-1) villages, ??? ducks are left
  	//Keep using duck(n-1, ???) function
  	//Thinking about when recursion stops
}
//TEMPLATE END

//APPEND BEGIN
int main()
{
	int N, D;
	cin >> N >> D;
	cout << duck(N, D);
    return 0;
}
//APPEND END
