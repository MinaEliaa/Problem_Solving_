#include <iostream>

using namespace std;

int main()
{
    char a,b;
    cin>>a>>b;

    if(a=='H'||a=='D' && b=='H'||b=='D'){
    if (a=='H' && b=='H'){
        cout<<"H"<<endl;
    }
    else if (a=='D' && b=='D'){
        cout<<"H"<<endl;

    }
    else if (a=='D' || b=='D'){
        cout<<"D"<<endl;
    }
    }
    return 0;
}
