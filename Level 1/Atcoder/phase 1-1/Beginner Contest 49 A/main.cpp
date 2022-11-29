#include <iostream>

using namespace std;

int main()
{
    char c;
    cin>>c;
    //a, e, i, o and u
    if (c =='a' ||c =='e' ||c =='i'||c =='o'||c =='u'){
        cout<<"vowel"<<endl;
    }
    else {
        cout<<"constant"<<endl;
    }
    return 0;
}
