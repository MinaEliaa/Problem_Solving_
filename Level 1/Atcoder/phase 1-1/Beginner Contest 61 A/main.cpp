#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;

    if (C>A && C<B ){
        cout<<"Yes"<<endl;
    }
    else if (A==B && A==C){
        cout<<"Yes"<<endl;
    }
    else if (C>A && C==B ){
        cout<<"Yes"<<endl;
    }
    else if (C==A && C<B){
        cout<<"Yes"<<endl;
    }

        else cout<<"No"<<endl;

    return 0;
}
