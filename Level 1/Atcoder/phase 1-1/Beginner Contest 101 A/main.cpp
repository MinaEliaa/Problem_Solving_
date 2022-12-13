#include <iostream>

using namespace std;

int main()
{
    char Operator ;
    int sum=0;
    for (int i=1;i<=4;i++){
            cin>>Operator;
        if (Operator == '+'){
            sum+=1;
        }
        else if (Operator =='-'){
            sum-=1;
        }
    }

    cout<<sum<<endl;
    return 0;
}
