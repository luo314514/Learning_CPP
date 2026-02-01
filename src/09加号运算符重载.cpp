#include<iostream>
using namespace std;
//1、成员函数加号运算符重载
class Person{
public:
    int m_A;
    int m_B;
    Person(){
        this->m_A = 10;
        this->m_B = 20;
    }
    Person operator+(Person &p){//成员函数加号运算符重载
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }
    virtual void func(){
        cout << "虚函数" << endl;
    }
};
//2、全局函数加号重载
/* Person operator+(Person &p1,Person &p2){
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
} */
//3、函数重载
Person operator+(Person &p1,int num){
    Person temp;
    temp.m_A = p1.m_A + num;
    temp.m_B = p1.m_B + num;
    return temp;
}
int main(){
    Person p1;
    Person p2;
	Person p3 = p1+p2;//成员函数重载本质等价于Person p3 = p1.operator+(p2)
    Person p4 = p1+p2;//全局函数重载本质等价于Person p4 = operator+(p1,p2)
    Person p5 = p1+10;//全局函数重载本质等价于Person p5 = operator+(p1,10)
    cout << p3.m_A << endl;
    Person p6;
    cout << "p6的大小为: " << sizeof(p6) << endl;
	return 0;
}
