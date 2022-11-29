#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int x=max(a,max(b,c));
    int y=min(a,min(b,c));

    else if (a==b==c){
        cout<<"YES"<<endl;
    }
    else if ((x-y)==a  || (x-y)==b || (x-y)==c){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
