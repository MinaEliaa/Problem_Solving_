#include <iostream>

using namespace std;

int main()
{
    char c;
    int counter=0;

    for (int i=0 ; i<3 ;i++){
        cin>>c;
        if (c=='o'){
            counter++;
        }
    }
    cout<<700+counter*100<<endl;


    return 0;
}
