#include <iostream>

using namespace std;

int main()
{
    cout <<"Introdu nr:";
    int nr,u,z,s,result;
    cin >>nr;
    s=nr/100;
    z=nr%100/10;
    u=nr%10;
    cout <<s<<endl<<z<<endl<<u<<endl;
    result=s*10+u;
    cout <<result;
    return 0;
}
