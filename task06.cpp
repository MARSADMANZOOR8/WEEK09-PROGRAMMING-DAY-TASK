#include<iostream>
using namespace std;
main()
{
 int  number[3];
 int num;
 cout << "enter the number of time you want to perform even odd transform  " << endl;
 cin >> num;
 for(int idx=0 ; idx<3 ; idx++)
  {
    cout << "enter the number " << endl;
    cin >> number[idx];
    if(number[idx]%2==0)
    {
        for(int i=0;i<=num;i++)
        {
          number[idx]=number[idx]-2;
        }
    }
    if(number[idx]%2!=0)
    {
        for(int i=0;i<=num;i++)
        {
          number[idx]=number[idx]+2;
        }
    }

   }
   for(int idx=0 ; idx<3 ; idx++)
  {
    cout << number[idx]<< endl;
  }
    
}