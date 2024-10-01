#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int number, result;
    cout<<"Pozitif bir sayi giriniz: ";
    cin>>number;
    if (number<0)
    {
        cout<<"Lutfen pozitif bir sayi girin\n";
    }else{
        result=sqrt(number); //square root
        result*=result;
        if(result==number)
        cout<<"square root of "<<number<<" is an integer";//Türkçeye çeviremedim :D
        else
        cout<<"The number entered is not an integer";
        
    }
return 0;
}