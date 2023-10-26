#include <iostream>

using namespace std;

int main()
{
    string f= "123456727391746279194520481";
    cout<<"{";
    for(int i=0,j=1;i<25;i++,j++)
    {
        cout<<f[i];
        if(j==5)
        {
            j=0;
            cout<<"},{";
        }
        else{cout<<',';}
    }
    cout<<"}";

    return 0;
}

