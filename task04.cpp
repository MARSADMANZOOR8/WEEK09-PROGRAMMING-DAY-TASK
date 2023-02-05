#include<iostream>
using namespace std;
main()
{
    int number;
    cout <<"enter the number of the digits you want to enter in the array :: " << endl;
    cin >> number;
    bool istrue=false;
    int count=0;
    
    int number1[number];
    int rem;
    for(int idx=0 ; idx<number ;idx++)
    {
         cout << "enter the digit you want to enter in the array :: " << endl;
         cin >> number1[idx];

         if(number1[idx]>9)
        {
            while(number1[idx]>9)
            {
              rem=number1[idx]%10;
              number1[idx]=number1[idx] / 10 ;
            }

        }
        

         if (number1[idx]==7 || rem==7)
         {
            count = count + 1;
         }
    }
 if (count>=1)
 {
    cout <<"BOOM"<< endl;
 }  
 else
 {
    cout << "NONE OF THE ITENMS CONTAIN 7 WITHIN THEM " << endl;
 }
}