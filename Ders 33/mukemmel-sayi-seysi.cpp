#include <iostream>
using namespace std;

int main(){
    int number, i, sum=0;
    cout<<"Bir sayi girin: ";
    cin>>number;
    for(i=1;i<=number/2;i++){
        if(number%i==0)
        sum+=i;
    }
  if(sum==number)
  cout<<number<<" muq evlat\n";
  else
  cout<<number<<" muq degil dostum\n";


return 0;
}