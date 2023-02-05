#include<iostream>
using namespace std;
main()
{
    int number=4;
    string character[number];
    for(int idx=0 ; idx<number ; idx++)
    {
        cout << "enter the character  " << endl;
        cin >> character[idx];
     }
     if (character[0]==character[1] && character[1]==character[2] && character[2]==character[3])
     {
        cout <<"true"<< endl;

     }
    
     else
     {
        cout << "false" << endl;
     }
}