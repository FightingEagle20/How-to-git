#include <iostream>

using namespace std;

int main()
{
    for(int x=1;x<101;x++)
    {
        if(x%4 == 0) cout << "Buzz, ";
        else cout << x << ", ";
    }
}
