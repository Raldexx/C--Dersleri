#include <iostream>
#include <string>
using namespace std;

int main(){
    string txt1, txt2, txt3, largest;
    txt1="Book";
    txt2="bookrack";
    txt3="bookkeeper";
    if((txt1>txt2) && (txt2>txt3))
       largest=txt1;
       else if((txt2>txt1) && (txt2>txt3))
       largest=txt2;
    else
       largest=txt3;
    cout<<"En uzunu: "<<largest<<"\n";

    return 0;
}