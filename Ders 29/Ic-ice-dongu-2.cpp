#include <iostream>
using namespace std;

int main(){
 short int i, j, number=1;
do{
cout<< "Kac adet verim abime: ";//Ne kadar istediğini öğreniyoruz
cin>> number;
if(10 < number){ //10'Dan fazla terminalde satıra sığmıyor onun için :D
cout<<"Abem satira sigmiyore";
return 0;
}
for(i=1; i<=number; i++){//İç içe döngümüzü kuruyoruz
  for(j=1;j<=number;j++){
  cout<<"Merhaba c++";
  if(j!=number)
   cout<<" - ";
  }
  cout<<"\n ------------------------------------------------------\n"; // !!Bir Soru: Bunu nasıl elemanın verdiği değer kadar uzatıcaz 2 girince uzun kalıyor 10 girince kısa kalıyor
 }
}
while(number!=0);
return 0;
}