#include<iostream>
#include<string.h>


using namespace std;
int main()
{
    int i,flag=0,l;
    char str1[50],str2[50];
    cout<<"enter the string"<<endl;
    cin>>str1;
    l=strlen(str1);

    for(i=1;i<l/2;i++)
    {
        if(str1[i]!=str1[l-i-1])
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        cout<<"string is not pallindrome"<<endl;

    }
    else
    {
        cout<<"string is  pallindrome"<<endl;

    }
}
