#include <iostream>
#include <cmath>
using namespace std;
double area(double);
double volume(double,double);




double area(double r){
    double area=3.14*pow(r,2);
    
    return area;
}

double volume(double h,double r){
    double v=3.14*pow(r,2)*h;
    return v;
}

int main(){
    double x,y; //x =>radius , y => height
    cin>>x>>y;
    cout<<"volume = "<<volume(y,x)<<endl;
    cout<<"area = "<<area(x);

}