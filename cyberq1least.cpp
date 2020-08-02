#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    cout<<"Enter number:";
    cin>>num;
    int least=num;
    while(n-1!=0)
    {
        cout<<"Enter number:";
        cin>>num;
        if(num<least)
        {
            least =num;
        }
        n--;
    }
    cout<<least;
}
