#include<iostream>
using namespace std;
int inc(int &a)
{
    return ++a;
}

    int main()
    {
        int x = 10;
        cout<<inc(x);
        return 0;

    }
