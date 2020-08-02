#include <iostream>
#include<cstring>
using namespace std;
void encrypt(string str)
{
    char evenPos = '$', oddPos = '#';
    int repeat, ascii,c,i;
    c=str.length();
    for (i=0;i<=c;i++)
    {
        ascii = str[i];
        repeat = ascii >= 97 ? ascii - 96 : ascii - 64;

        for (int j = 0; j < repeat; j++)
        {
            if ( i % 2 == 0)
                cout << oddPos;
            else
                cout << evenPos;
        }
    }
}
int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin,str);
    encrypt(str);
    return 0;
}
