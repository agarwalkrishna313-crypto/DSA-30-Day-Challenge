#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a letter: ";
    cin>>ch;
//hint is ascii values! for A-Z is 65-90 and a-z is 97 - 122
    if(ch>64 && ch<91){
        cout<<"your letter is UpperCase sensetive!";
    }
    if(ch>96 && ch<123){
        cout<<"your letter is LowerCase sensetive!";
    }
    return 0;
}