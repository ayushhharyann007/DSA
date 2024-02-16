#include <iostream>
using namespace std;
int main(){
int a=5;
int *ptr;
ptr=&a;
a=7;

cout<<a<<endl;
cout<<*ptr<<endl;
cout<<ptr;
cout<<sizeof(ptr)<<endl;
cout<<sizeof(a)<<endl;
return 0;
} 
