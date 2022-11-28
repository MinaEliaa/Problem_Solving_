#include <iostream>

using namespace std;

int main()
{
   int A,B,C;
   cin>>A>>B>>C;
   int counter7=0;
   int counter5=0;
   if (A == 5) counter5++;
   else if (A == 7) counter7++;

   if (B == 5) counter5++;
   else if (B == 7) counter7++;

   if (C == 5) counter5++;
   else if (C == 7) counter7++;


   if (counter7<=1 && counter5<=2){
    cout<<"YES"<<endl;
   }
   else {

    cout<<"NO"<<endl;
   }

    return 0;
}
