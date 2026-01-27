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
};
//2、全局函数加号重载
int main(){
    Person p1;
    Person p2;
	Person p3 = p1+p2;//等价于Person p3 = p1.operator+(p2)
    cout << p3.m_A << endl;
	return 0;
}
