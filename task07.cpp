#include<iostream>
using namespace std;
main()
{
    string  str1;
    cout <<"enter the string 1  :: " << endl;
    getline(cin,str1);
    int count1 = str1.length();
    string  str2;
    cout <<"enter the string 2  :: " << endl;
    getline(cin,str2);
    int count2=str2.length();
    int count=0;
    int count3=0;
    for(int i=0 ;i<count1;i++)
    {
     for(int idx=0 ; idx<count2 ; idx++)
       {
          if(str1[i]==str2[idx])
          {
            
             count = count + 1;
                break;
          }
       }
       
    }
    cout << count << endl;
}