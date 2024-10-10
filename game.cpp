#include<iostream>
#include<cstlib>
using namespace std;
int main()
{
    srand(time(0));  //her the value will be different every time.
    int num = rand()%100;          //here 100 shows that the number will be between 0 and 100.
    cout<<"Enter your guess: ";
    int guess;
    cin>>guess;

    while(guess!=num)
    {
        if(guess>num)
        {
          cout<<"Higher Guess"<<endl;
        }
        else
        {
            cout<<"Lower Guess"<<endl;
        }
       cin>>guess;
    }
    cout<<"Accurate Guess "<<endl;

    return 0;
}
