#include<iostream>
using namespace std;

//函数的声明，比较函数，提前告诉程序函数的存在，但是函数的定义在man函数后面
int max(int a , int b);

int main(){
    int a = 10;
    int b = 20;
    cout << max(a,b) << endl;
    return 0;
}
//函数的定义
int max(int a,int b){
    return a > b ? a : b;
}