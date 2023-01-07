#include<bits/stdc++.h>

using namespace std;


int main()
{

    int x =7;

    if(x>5)
    {
        cout<<"The number is greater than 5\n";
    }
    else if(x==5)
    {
        cout<<"The number is 5\n";
    }
    else
    {
        cout<<"The number is less than 5\n";
    }

    // Switch Case

    switch (x)
    {
    case 5:
        cout<<"The number is 5\n";
        break;

    default:
        cout<<"The number is not 5\n";
        //break;
    }







    return 0;
}
