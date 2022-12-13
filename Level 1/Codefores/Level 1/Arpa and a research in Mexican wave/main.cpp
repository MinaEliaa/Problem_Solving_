#include <iostream>

using namespace std;

int main()
{
    int n,k,t;
    cin>>n>>k>>t;

        if (n==k && n==t){
            cout<<n<<endl;
        }
     else if (n==k && t<k){
        cout<<min(n,min(t,k));
    }
     else if (t>k && t>n){
        int x=t-n;
        cout<<k-x<<endl;
    }
    else if (t>k){
        cout<<k<<endl;
    }
    else if (t<k){
        cout<<t<<endl;
    }

    return 0;
}
