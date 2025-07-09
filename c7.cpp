// reverse a number
#include <iostream>
using namespace std;

int main()
{
    int a,sum=0;
    cin>>a;
    while(a>0){
        int e=a%10;
        sum=sum*10+e;
        a/=10;
    }
    cout<<sum;

    return 0;
}
