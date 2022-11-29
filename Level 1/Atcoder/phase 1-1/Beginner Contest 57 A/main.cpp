#include <iostream>

using namespace std;

int main()
{
    int A,B;
    cin>>A>>B;

    if (A+B==24){
        cout<<0<<endl;
    }
    else if  (A+B<24){
        cout<<A+B<<endl;
    }
    else if (A+B>24){
        cout<<(A+B)-24<<endl;
    }
    return 0;
}
