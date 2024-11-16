#include <iostream>
#include <string>
using namespace std;

int main(){
   string txt;
   cout<<"Bir string girin: ";
   getline(cin,txt);
   if(txt.empty())
      cout<<"Hicbirsey girmemissin";
      else
      cout<<"Senin yazin: "<<txt<<"\n";

    return 0;
}