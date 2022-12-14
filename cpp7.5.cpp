//PREPEND BEGIN
#include <iostream>
using namespace std;

int N =0;

struct CARD{
    char name[100];
    int attack;
    int blood;
};

template <typename X>
void show(X card){
    cout<<"name : "<<card.name<<"\n";
    cout<<"blood : "<<card.blood<<"\n";
    cout<<"attack : "<<card.attack<<"\n";
    cout<<"----------------------------\n";
}
//PREPEND END

//TEMPLATE BEGIN
template <typename X>
void fight(X cards[],int card1,int card2){
  // Please fill this blank
  cards[card1].blood=cards[card1].blood-cards[card2].attack;
  cards[card2].blood=cards[card2].blood-cards[card1].attack;
  for(int i = 0; i < N; i++)
  {
  	
  	if(cards[i].blood<=0)
  	{
  	    for(int j = i; j < N-1; j++)
  	    {  
		cards[j]=cards[j+1];
		}
		i--;
		N--;
	}
	
  }
}
//TEMPLATE END

//APPEND BEGIN
int main() {
    CARD cards[1000];
    int card1=0,card2=0;

    cin>>N;

    for(int i=0;i<N;++i)
        cin>>cards[i].name>>cards[i].blood>>cards[i].attack;

    while(cin>>card1>>card2)
        fight(cards,card1,card2);

    for(int i =0 ; i<N;++i)
        show(cards[i]);

    return 0;
}

//APPEND END
