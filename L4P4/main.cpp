#include <iostream>
using namespace std;

int main()


{
    int a,b,c;
    cin>>a>>b;
    if (a>b) cout<<a<<" "<<b-a;
    else if (b>a) cout<<b<<"  "<<b-a;
    else cout<<"egalitate";
    return 0;
}
