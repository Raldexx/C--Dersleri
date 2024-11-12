#include <iostream>
using namespace std;

int sum (int, int);
double sum (double, double);

int main(){
    //overloading
    int x=sum(7,5);
    double y=sum(7.21,6.19);
    cout<<"İnt:"<<x<<"\n";
    cout<<"Double:"<<y<<"\n";
return 0;
}
int sum (int x, int y){
    return x+y;
}
double sum(double x, double y){
    return x+y;
}