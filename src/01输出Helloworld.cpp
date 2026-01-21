#include<iostream>
using namespace std;
//我们的但行注释
/*多行注释*/
/*
常量
1、宏常量#define
2、const修饰的变量
常量表示代码运行过程中这两个量是不可以被修改的
*/
#define day 7

int main (){
    
    // const int mouth = 30;
    // cout << "一周有" << day << "天，一个月有" << mouth << endl;
    // cout << "Hello C++!" << endl;

    // /*
    // sizeof(数据类型/变量)
    // sizeof(int) = 4(表示int占4位)
    // sizeof(mouth) = 4(表示mouth是个int类型，占4字节) 
    // */
    // cout << "int类型占几个字节：" << sizeof(mouth) << endl;
    
    // /*要会用short int long longlong float double char 转义字符 string字符串 bool*/
    // //数据的输入
    // // int i;
    // // cin >> i;
    // // cout << i << endl;

    // cout << "我将写一个称法口诀表\n" << endl;
    // for(int i = 1;i <= 9 ;i++){
    //     for (int j = 1; j <= i; j++){
            
    //         cout << i << "*" << j << "=" << i*j << "  ";
    //     }
    //     cout << endl;
    // }
    // 取址符号&，&arr[1]
    // int arr[10] = {1,2,2,};
    // cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << &arr[0] << endl;
    // 冒泡排序
    /* int arr1[9] = {4,2,8,0,5,7,1,3,9};
    for(int i = 0; i < 9 - 1; i++){
        for(int j = 0; j < 9 - 1 - i; j++){
            if(arr1[j] > arr1[j+1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < 9; i++){
        cout << arr1[i] << endl;
    } */
    /* 数组arr[2][3]是一个两行三列的数组,arr[0]表示第一行，
    第一行是一个数组，所以arr[0]表示第一个行的数组名*/
    int arr2[2][3] = {
        {1,2,3},
        {4,5,6}
    };//表示一个两行三列的二维数组
    cout << arr2 << endl;//输出二维数组的首地址
    cout << arr2[0] << endl;//输出第一行数组的首地址
    cout << &arr2[0][0] << endl;//输出第一个元素的首地址
    return 0;
}