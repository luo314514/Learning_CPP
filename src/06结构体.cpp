#include <algorithm>
#include<iostream>
#include<string>
using namespace std;

struct Student{
	string name;
	int age;
	int score;
}s3;

int main(){
	struct Student s1;
	s1.name = "张三";
	s1.age = 21;
	s1.score = 86;
	cout << "姓名： " << s1.name << "年龄： " << s1.age << "分数： " << s1.score << endl;
	struct Student s2 = {"李四",22,89};
	cout << "姓名： " << s2.name << "年龄： " << s2.age << "分数： " << s2.score << endl;
	s3.name = "王五";
	s3.age = 21;
	s3.score = 86;
	cout << "姓名： " << s3.name << "年龄： " << s3.age << "分数： " << s3.score << endl;
	struct Student arr3[2]={
		{"张三",21,85},
		{"李四",26,86}
	};
	for(int i = 0;i < sizeof(arr3) / sizeof(arr3[0]);i++){
		cout << "姓名： " << arr3[i].name << "年龄： " << arr3[i].age << "分数： " << arr3[i].score << endl;
	}
	struct Student *p = &s1;
	cout << "姓名： " << p->name << "年龄： " << p->age << "分数： " << p->score << endl;
	return 0;
}
