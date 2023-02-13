#include <iostream>
using namespace std;

int a=0,b=0,c=0;

int con1(int b,int a){  //int b= [b in the int main] / int a=[a in the int main =1]
    a+=1;  // a=2
    b+=1;  //b=2
    c+=1;  //c=1
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    return a;  //a=2  c=1  b=2
}
int con2(int b,int a){
    a+=2;  //a=4
    b+=2; // b=3
    c+=2;  //c=3
    // cout<<c<<endl;
    return b; //  ,b=3 , c=3
}
int con3(int b ,int c){
    a+=3;   //a=3
    b+=3;   //b=4
    c+=3;  //c=con1+3
    // cout<<c<<endl;
    // cout<<c<<endl; //=5
    return c;
}







int main(){

//    cout<<"hello";
   int a,c,b ;
   a=1,b=1,c=1;
//    cout<<b<<endl;
   c=con1(a,b);  //(0,1)
   a=con2(b,c);   //(1,0)
   b=con3(a,c);    //(con1,con2)
 //  b=con3(con1,con2);    //(con1,con2)

    // cout<<a;

   cout<<a<<b<<c;
}