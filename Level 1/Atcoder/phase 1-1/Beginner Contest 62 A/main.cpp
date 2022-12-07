#include <iostream>

using namespace std;

int main()
{
    int X,Y;
    cin>>X>>Y;
    int counter=0;
    int arr1[7]={1,3,5,7,8,10,12};
    int arr2[4]={4,6,9,11};


    if (X==2 && Y==2){
        counter++;
    }

    for (int i=1;i<=7;i++){
        if (X==arr1[i] && Y==arr1[i]){
                counter++;

        }
    }
    for (int i=1;i<=4;i++){
        if (X==arr2[i] && Y==arr2[i]){
                counter++;

        }
    }
    if (counter>1){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;



    return 0;
}
