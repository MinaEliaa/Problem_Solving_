#include <iostream>

using namespace std;

int main()
{
    int k,n,w;
    int sum=0;
    cin>>k>>n>>w;

    for (int i =1 ; i<=w ; i++){

        sum=sum+i*k;
    }

    if(sum<=n){

        cout<<0<<endl;
    }

    else if (sum>n){

        cout<<sum-n<<endl;
    }
    return 0;
}
