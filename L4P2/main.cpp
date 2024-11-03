#include <iostream>

using namespace std;

int main()
{
    cout << "Introduceti numarul:";
    int nr,z,u,invers;
    cin >>nr;
    z=nr/10;
    u=nr%10;
    invers=u*10+z;
    cout <<invers;

    return 0;
}
