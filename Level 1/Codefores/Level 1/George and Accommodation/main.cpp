#include <iostream>

using namespace std;

int main()
{
    int n;
    int x,y;
    int counter=0;
    cin>>n;


    for (int i =1 ;i<=n;i++){
        cin>>x;
        cin>>y;
        if ((y-x)>1){
            counter++;
        }
    }

    cout<<counter<<endl;

    return 0;
}
