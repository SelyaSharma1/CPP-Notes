// tell whether the entered character is a digit,alphabet or a special character
#include <iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if((a>='A'&&a<='Z')||(a>='a'&&a<='z')){
        cout<<"Alphabet";
    }
    else if(a>='0'&&a<='9'){
        cout<<"Digit";
    }
    else {
        cout<<"Special Character";
    }
    

    return 0;
}
