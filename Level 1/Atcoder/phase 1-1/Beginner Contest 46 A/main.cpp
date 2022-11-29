#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;

    if (A==B && A==C){
        cout<<1<<endl;
    }
    else if (A!=B && B!=C && C!=A){
        cout<<3<<endl;
    }
    else if (A==B || B==C ||A==C){
        cout<<2<<endl;
    }
    return 0;
}
