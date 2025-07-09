// determine the whether the entered character is a vowel or consonant
#include <iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
    

    return 0;
}
