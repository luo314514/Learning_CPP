#include<iostream>
using namespace std;

//值传递,值传递不改变实参
void mySwap01(int a,int b){
    int tmp = a;
    a = b;
    b = tmp;
}
//地址传递改变实参
void mySwap02(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
//引用传递改变实参，与地址传递一样
void mySwap03(int &a,int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
//引用：给变量取别名int &b = a;给变量a起别名b
int main(){
    int a = 10;
    int b = 20;
    mySwap01(a,b);
    cout << "值传递不改变实参，a = " << a << ", b = "  << b << endl;
	mySwap02(&a,&b);
    cout << "地址传递改变实参，a = " << a << ", b = "  << b << endl;
    mySwap03(a,b);
    cout << "地址传递改变实参，a = " << a << ", b = "  << b << endl;
	return 0;
}
