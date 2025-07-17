#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    double m;
    char c;
    float f;
    bool b;
    cout<<sizeof(n)<<" ";
    cout<<sizeof(m)<<" ";
    cout<<sizeof(c)<<" ";
    cout<<sizeof(f)<<" ";
    cout<<sizeof(b)<<" "<<endl;
    cout<<"Signed int range "<<INT_MIN<<"to "<<INT_MAX<<endl;
    cout<<"Unsigned int range "<<0<<"to "<<UINT_MAX<<endl;

    int r=11;
    float p=r;
    cout<<p<<endl;

    int e=10;
    float t=e;
    cout<<t<<endl;

    char h='a';
    cout<<int(h);

}
