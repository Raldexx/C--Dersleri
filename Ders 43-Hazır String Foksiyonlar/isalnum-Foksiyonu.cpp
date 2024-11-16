#include <iostream>
#include <string>
#include <cctype>
using namespace std; 

int main(){
 /*  String ile
 string txt;
 cout<<"Bir sey gir: "
 getline(cin<<txt)
 for(int i=0;i<txt.size();i++)
  if(isalnum(txt[i]))
  cout<<txt[1]<<" ";      */

  char ch;   //char ile
  cout<<"Bir karakter gir: ";
  cin>>ch;
  if(isalnum(ch))
    cout<<"Bir sayi veya bir harf girdin";
    else
    cout<<"sayi veya harf girmedin";
return 0;
}