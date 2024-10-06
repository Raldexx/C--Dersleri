#include <iostream>
using namespace std;

int main(){
 int first=1, second=1, third=1, number, i;
 cout<<"Bir sayi gir:";
 cin>>number;
 cout<<"1 1 ";
 for(i=1;i<=number;i++){
   first=second;
   second=third;
   third=first+second;
   cout<<third<<" ";
 }



return 0;
}