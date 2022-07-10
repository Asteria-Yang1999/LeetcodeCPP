#include <iostream>
using namespace std;

void swap1(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
int main(){
    int a = 1;
    int b = 2;
    swap1(a, b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    system("pause");
    return 0;
}