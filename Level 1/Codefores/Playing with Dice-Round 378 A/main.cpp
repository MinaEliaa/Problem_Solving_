#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int countX=0;
    int countY=0;
    int countdraw=0;
    cin>>x>>y;

    for (int i=1;i<=6;i++){

        int a=abs(x-i);
        int b=abs(y-i);

        if (a<b){
            countX++;
        }
        else if (b<a){

            countY++;
        }
        else if (a==b){

            countdraw++;
        }
    }
    cout<<countX<<" "<<countdraw<<" "<<countY<<endl;
    return 0;
}
