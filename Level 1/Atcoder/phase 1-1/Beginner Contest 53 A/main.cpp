#include <iostream>

using namespace std;

int main()
{
    int X;
    cin>>X;
    if (X<1200 && X>0){
        cout<<"ABC"<<endl;
    }
    else if (X>1200) {
        cout<<"ARC"<<endl;
    }
    return 0;
}
