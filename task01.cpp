#include<iostream>
using namespace std;
main()
{
    int arrsize=4;
    string names[arrsize]={"peach","apple","guava","watermelon"};
    int price[arrsize]={60,70,80,90};
    cout << " enter the name of the fruit : " << endl;
    string name;
    cin >> name;
    cout << "enter the quantity of the fruit in kgs :" << endl;
    int quantitiy;
    cin >> quantitiy;
    float totalbill;
    for(int idx=0 ; idx<arrsize;idx++)
    {
        if(names[idx]==name)
        {
             totalbill=price[idx] * quantitiy;
             cout << "the total  bill is : " << totalbill <<endl;
        }
     }
   
}