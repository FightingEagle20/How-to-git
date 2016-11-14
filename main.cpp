#include <iostream>

using namespace std;

void buzz()
{
    for(int x=1;x<101;x++)
    {
        if(x%4 == 0) cout << "Buzz, ";
        else cout << x << ", ";
    }
}

int main()
{
    for(int x=1;x<101;x++)
    {
        if(x%3 == 0) cout << "Fizz, ";
        else cout << x << ", ";
    }
}
