#include <iostream>

using namespace std;

int main()
{
    int X,Y;
    cin>>X>>Y;

    if (X+Y<10){
        cout<<X+Y<<endl;
    }
    else if (X+Y>=10){
        cout<<"error"<<endl;
    }
    return 0;
}
