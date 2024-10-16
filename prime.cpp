#include<iostream>
using namespace std;
int main()
{

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    bool prime = true;

    if(num<=1)
    {
        cout<<"Non-Prime Number"<<endl;
    }

    else
    {

       for( int i=2; i<=num-1; i++)
    //  for(int i=2; i*i<=num; i++)                           //this trick is also useful and more efficient
       {
         if(num%i == 0)
          {
             prime = false;
             break;
          }
       }

      if(prime == true)                                     //one way to find a prime number
        {
            cout<<"Prime Number";
        }
      else
        {
            cout<<"Non-Prime Number";
        }

    }

   return 0;
}
