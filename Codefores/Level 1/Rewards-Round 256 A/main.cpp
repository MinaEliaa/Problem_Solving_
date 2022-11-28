#include <iostream>

using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3;
    int sumA=0;
    int sumB=0;
    int counter=0;
    int n;

    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    cin>>n;

    sumA=a1+a2+a3;

    sumB=b1+b2+b3;

    while (sumA > 0){
        sumA=sumA-5;
        counter++;
    }

    while (sumB >0){
        sumB=sumB-10;
        counter++;
    }

    if (counter>n){

        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }

    return 0;
}
