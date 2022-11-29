#include <iostream>

using namespace std;

int main()
{
    int A,B;
    cin>>A>>B;

    if (A==1 && A!=B)cout<<"Alice"<<endl;
    else if (B==1 && B!=A)cout<<"Bob"<<endl;

    else if (A>B && B!=1){

        cout<<"Alice"<<endl;
    }
    else if (B>A && A!=0){
        cout<<"Bob"<<endl;
    }
    else if (A==B){
        cout<<"Draw"<<endl;
    }

    return 0;
}
