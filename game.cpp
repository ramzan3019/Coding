#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int num = rand()%100+8;             //here 100 shows that the number will be between 0 and 100.
    cout<<Enter your guess: ;
    int guess;
    cin>>guess;

    while(guess!=num)
    {
        if(guess>num)
        {
          cout<<Higher Guess<<endl;
        }
        else
        {
            cout<<Lower Guess<<endl;
        }
       cin>>guess;
    }
    cout<<Accurate Guess <<endl;

    return 0;
}

