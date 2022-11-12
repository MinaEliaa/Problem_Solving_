#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int count =n/2;

    if (n%2==0){

        for (int i =0 ;i<count;i++){
            cout<<2<<" ";
        }

        else{

            for (int i=0;i<count-1 ;i++){

                count<<2<<" ";
            }
            cout<<3<<" ";
        }
    }

    return 0;
}
