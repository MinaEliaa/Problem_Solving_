#include <iostream>

using namespace std;

int main()
{
   int  n, k, l, c, d, p, nl, np;
   int x,y,z;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;

   x=k*l;
   y=c*d;
   z=p/np;

   x=x/nl;

 cout<< min(min(x,y),z)/n<<endl;



    return 0;
}
