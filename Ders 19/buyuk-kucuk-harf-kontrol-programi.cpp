#include <iostream>
using namespace std;

int main(){
 char myCharacter;
 cout<<"Bir harf girin: ";
 cin>>myCharacter;
 if ((myCharacter>='A') && (myCharacter<='Z')){
 cout<<myCharacter<<" : bu buyuk bir harf\n";
 }else if((myCharacter>='a') && (myCharacter<='z')){
 cout<<myCharacter<<" : bu kucuk bir harf\n";
 }else{
    cout<<myCharacter<<" : Lutfen harf girin!";
 }
 
return 0;
}