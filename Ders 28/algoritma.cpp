//Faktoriyel Hesaplıyacağız...
#include <iostream>
using namespace std;

int main(){
    int number, i=1, factorial=1;
    cout<<"Bir sayi girin: ";
    cin>>number;
    
    if(number<0){
       cout<<"Lutfen sifirdan daha buyuk bir sayi girin!";
       }
       else{
        for(i=1;i<=number; i++){ //i girdiğimiz sayı olunca döngüyü kırıcak ve bize çıktıyı vericek
        factorial*=i; 
        }          //1 olup forun başına dönüyor ardından i'yi 1 arttırıyor i artık 2 1*2=2 factorial artık 2 böyle şekilde  tekrarlıyor
        cout<<number<<" != "<<factorial<<"\n ";}
    return 0;
}