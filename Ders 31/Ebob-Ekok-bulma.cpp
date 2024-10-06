#include <iostream>
using namespace std;

int main(){
    short int x, y, EBOB=1, EKOK, smallNumbers, i;
    cout<<"Iki sayi giriniz: ";
    cin>>x>>y;
    if(x<y) // Hangisinin küçük olduğunu bulduk
       smallNumbers=x;
       else
       smallNumbers=y;
       for(i=smallNumbers;i>1;i--){ // EBOB BULAN YER!!!
        if((x%i==0) && (y%i==0)){
            EBOB=i;
            break;
        }
       }
if(EBOB!=1){
    EKOK=x*y/EBOB;
    cout<<"ebob'un:"<<EBOB<<"\n"; //GCD EBOB'UN İNGİLİZCESİ
}
else{
    EKOK=x*y;
cout<<"ebob'un: 1\n";
}
cout<<"Ekok'un:"<<EKOK<<"\n";//LCM EKOK'UN İNGİLİZCESİ

return 0;
}