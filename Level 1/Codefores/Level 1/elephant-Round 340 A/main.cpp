#include <iostream>

using namespace std;

int main()
{
    int step;
    int counter =0;


    cin>>step;

    while(step>0){

        step=step-5;
        counter++;
    }

    cout<<counter<<endl;

    return 0;
}
