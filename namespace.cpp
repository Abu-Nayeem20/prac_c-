#include<bits/stdc++.h>

using namespace std;

int x = 5;

namespace info{
    int x = 7;
}
//int x;

int main()
{
    cout<<x<<"\n";
    cout<<info::x;

    return 0;
}
