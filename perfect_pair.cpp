#include<iostream>
using namespace std;
int main()
{
    int combined_time;
    cin>>combined_time;

    int players[5];
    for (int i=0; i<5; i++)
    {
        cin>>players[i];
    }

    int separate_time[5];
    for (int i=0; i<5; i++)
    {
        cin>>separate_time[i];
    }
    int max_skill=0;
    int pair_1=0, pair_2=0;

    for (int i=0; i<5; i++)
    {
        for (int j=i+1; j<5; j++)
        {
          if (separate_time[i] + separate_time[j] ==combined_time && abs(players[i] - players[j])<=50)     //i used abs for getting positive value
            {
             int combined_skill =players[i]+players[j];
            if (combined_skill>max_skill)
                {
                 max_skill=combined_skill;
                 pair_1 =i;
                 pair_2 =j;
                }
               }
              }
          }
    if (max_skill== 0)
    {
      cout<<"-1";
    }
  else
    {
      cout<<max_skill<<endl;
      cout<<pair_1+1<<" "<<pair_2+1<<endl;
        cout << players[pair_1]<<" "<<players[pair_2]<<" "<<separate_time[pair_1]<<" "<<separate_time[pair_2]<<endl;
    }

    return 0;
}
