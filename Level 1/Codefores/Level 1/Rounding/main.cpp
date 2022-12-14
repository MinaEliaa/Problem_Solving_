#include <iostream>

using namespace std;

int main()
{
    int n;
    int x=0;
    cin>>n;

    x=n%10;

    if (x<=5){

        n=n-x;
    }


    else if (x>5){

        n=(n-x)+10;
    }

    cout<<n;


    return 0;
}
