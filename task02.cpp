#include<iostream>
using namespace std;
main()
{
    int arrsize=5;
    string movies[5]={"gladiator","starwars","terminator","takinglives","tombrider"};
    string name;
    cout << "enter the movie name   : " << endl;
    cin >> name;
    int price=500;
    int discount1=500/;
    int discount2=500/10;
    int total;
    for(int idx=0 ; idx < arrsize ;idx++)
    {
        if(idx%2==0)
        {
            if(movies[idx]==name)
            {
                total=price-discount2;
                cout << "the total price is : " << total;
            }
        }    
        else
        {
            if(movies[idx]==name)
            {
                total=price-discount1;
                cout << "the total price is : " << total;
            }
        }
        
 
    }
}