#include <iostream>

using namespace std;

int main()
{
    int counter =0;
    int n;
    cin>>n;

    while(n>=100){
        counter++;
        n=n-100;
    }
    while(n>=20){
        counter++;
        n=n-20;
    }
    while(n>=10){
        counter++;
        n=n-10;
    }
    while(n>=5){
        counter++;
        n=n-5;
    }
    while(n>=1){
        counter++;
        n--;
    }




    cout<<counter<<endl;
    return 0;
}
