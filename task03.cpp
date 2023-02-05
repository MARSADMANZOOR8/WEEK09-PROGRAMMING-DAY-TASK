#include<iostream>
using namespace std;
main()
{
    string name;
    cout << " enter the text whoose length you want to find out :: " << endl;
    cin >> name;
    int count = name.length();
    bool istrue;
    if(count%2==0)
    {
        istrue=true;
        cout << "true" << istrue;
    }
    if(count%2!=0)
    {
        istrue=false;
        cout << "false" << istrue;
    }
    
}