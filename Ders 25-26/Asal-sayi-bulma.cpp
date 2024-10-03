#include <iostream>
#include <cmath>
using namespace std;

int main(){
int number, i, control=1, result;
do{
cout<<"Pozitif bir sayi giriniz: ";
cin>>number;
if(number<2){
cout<<"Lutfen birden daha buyuk bir sayi girin";
continue;
}if(number==1)break;
result=sqrt(number);
for(i=2;i<=result;i++){
if(number%i==0){
    control=2;
    break;
   }else{
    control=1;
   }
}
if(control==2)
cout<<number<<" bu asal sayi degil\n";
else
cout<<number<<" bu asal sayi\n";
}
while(number!=1);
return 0;
}