// write table of the digit entered
#include <iostream>
using namespace std;

int main()
{
    int a,sum=0;
    cin>>a;
    for(int i=0;i<=10;i++){
        cout<<a<<"X"<<i<<"="<<a*i<<endl;
    }

    return 0;
}
