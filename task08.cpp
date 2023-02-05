#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter the number of the color :: " << endl;
    cin >> number;
    int count=0;
    string str[number];
    for(int idx=0 ; idx<number ;idx++)
    {
        cout << "enter the colour :: " << endl;
        cin >> str[idx];
    }
    int time1;
    time1 = number * 2;
    for(int idx=0 ; idx < number ;idx++)
    {
        if(str[idx]!=str[idx + 1])
        {
            count++;
        }
    } 
   int time2;
   time2=time1 + ( count -1 );
   cout << "time required  " << time2 ;
}