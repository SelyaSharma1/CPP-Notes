// code to find leap year
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%4==0&&a%100!=0){
        cout<<"Leap";
    }
    else if(a%400==0){
        cout<<"Leap";
    }
    else{
        cout<<"Not Leap";
    }
    

    return 0;
}
