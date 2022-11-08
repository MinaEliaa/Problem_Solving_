#include <iostream>

using namespace std;

int main()
{
    int k, n, s, p;
    int m;
    int counter=0;

    cin>>k>>n>>s>>p;


    if (n==1){
        m=1;
    }
    else if (n%s==0){
        m=(n/s);
    }
    else if (n%s!=0){
        m=(n%s)+1;
    }

        m=m*k;
    for (int i =1 ;i<=m;i+=p){

        counter++;
    }

    cout<<counter<<endl;

    return 0;
}
