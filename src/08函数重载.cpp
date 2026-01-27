#include<iostream>
using namespace std;
//函数参数的类型不同或者个数不同或者顺序不同
void func(){
    cout << "1" << endl;
}
void func(int a){
    cout << "2" << endl;
}
void func(int a,float b){
    cout << "3" << endl;
}
void func(float b,int a){
    cout << "4" << endl;
}
/* int func(){
    函数重载不能让返回值的类型不同
} */
int main(){
    func();
    func(12);
    func(1.14,12);
    func(2,1.13);
	return 0;
}
