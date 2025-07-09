// find sum of digits of a number
#include <iostream>
using namespace std;

int main()
{
    int a,sum=0;
    cin>>a;
    while(a>0){
        int e=a%10;
        sum+=e;
        a/=10;
    }
    cout<<sum;

    return 0;
}
