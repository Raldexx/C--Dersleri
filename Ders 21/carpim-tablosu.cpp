#include <iostream>
using namespace std;

int main(){

    short int number=1, i=1;
    while (number!=0){
        i=1;    
        cout<<"1den 10 a kadar olan bir sayi giriniz (Cikis = 0): ";
        cin>>number;
     
        if (number<0 || number>10){
           cout<<"1 den buyuk 10 dan kucuk bir sayi girin!";
      } else{
           while(i<=10 && number!=0) {
             cout<<number<<" X "<<i<<"= "<<number*i<<"\n";
        i++;
       }
     }
    }


return 0;
}