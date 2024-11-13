#include <iostream>
#include <cstring>// c deki string şeysilerini kullanmaya yarayan kütüphane

using namespace std; 

int main(){
    char str1[10]="Isim";
    char str2[10]="Soyisim";
    char str3[10];
    int len;//istediğin ismi verebiliyon
    strcpy(str3, str1); 
    cout<<"strcpy(str3, str1)"<<str3<<"\n";
return 0;
}