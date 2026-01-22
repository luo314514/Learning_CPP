#include<iostream>
#include<string>
#include <limits>
#define Max 1000
using namespace std;
//联系人结构体
struct Person
{
	/* data */
	string m_Name;//姓名
	int m_Sex;//性别：1男2女
	int m_Age;//年龄
	string m_Phone;//电话
	string m_Addr;//地址
};
//通讯录结构体
struct Addressbooks
{
	/* data */
	struct Person personArray[Max];//通讯录中保存的联系人数组
	int m_Size;//通讯录中人员个数
};


//输出菜单
void showMenu(){
	cout << "**********************" << endl;
	cout << "*****1.添加联系人*****" << endl;
	cout << "*****2.显示联系人*****" << endl;
	cout << "*****3.删除联系人*****" << endl;
	cout << "*****4.查找联系人*****" << endl;
	cout << "*****5.修改联系人*****" << endl;
	cout << "*****6.清空联系人*****" << endl;
	cout << "*****0.退出     *****" << endl;
	cout << "**********************" << endl;
}
//添加联系人
void addPerson(Addressbooks * abs){
	if(abs->m_Size == Max){
		cout <<"通讯录已满！不能添加" << endl;
		return;
	}
	else{
		//添加具体联系人
		//姓名
		string name;
		cout << "请输入联系人姓名： "<< endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		cout << "请输入性别： " << endl;
		cout << "1 ---- 男" << endl;
		cout << "2 ---- 女" << endl;
		int sex = 0;
		while(true){
			cin >> sex;
			if(sex == 1 || sex == 2){
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入： " << endl;
		}
		//年龄
		cout << "请输入年龄： " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//电话
		cout << "请输入联系人电话" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		cout << "请输入联系人家庭住址： " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "联系人添加成功!!" << endl;
	}
}
//显示所有联系人
void showPerson(Addressbooks * abs){
	if(abs->m_Size == 0){
		cout << "当前记录为空！！！" << endl;
	}
	else{
		for(int i = 0; i < abs->m_Size; i++){
			cout << "姓名： " << abs->personArray[i].m_Name << "\t";
			cout << "性别： " << (abs->personArray[i].m_Sex == 1?"男":"女") << "\t";
			cout << "年龄： " << abs->personArray[i].m_Age << "\t";
			cout << "电话： " << abs->personArray[i].m_Phone << "\t";
			cout << "住址： " << abs->personArray[i].m_Addr << endl;
		}
	}
	cout << "输出结束！" << endl;
	std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 清掉可能残留的换行
    std::cin.get(); // 等待回车
}
//检测联系人是否存在，如果存在返回联系人在数组中的具体下标，如果不存在则返回-1
int isExist(Addressbooks * abs,string name){
	//找到用户输入的姓名
	for(int i = 0; i < abs->m_Size;i++){
		if(abs->personArray[i].m_Name == name){
			return i;
		}
	}
	return -1;
}
//删除指定联系人
void deletePerson(Addressbooks * abs,int flag){
	for(int i = flag; i < abs->m_Size; i++){
		abs->personArray[i] = abs->personArray[i + 1];
	}
	abs->m_Size--;
	cout << "删除成功" << endl;
	std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 清掉可能残留的换行
    std::cin.get(); // 等待回车
}
//查找指定联系人
void findPreterson(Addressbooks * abs){
	cout << "输入你要查找的联系人姓名: " << endl;
	string name;
	cin >> name;
	//cout << name << endl;
	int ret = isExist(abs,name);
	//cout << ret << endl;
	if(ret != -1){
		cout << "姓名： " << abs->personArray[ret].m_Name << "\t";
		cout << "性别： " << (abs->personArray[ret].m_Sex == 1?"男":"女") << "\t";
		cout << "年龄： " << abs->personArray[ret].m_Age << "\t";
		cout << "电话： " << abs->personArray[ret].m_Phone << "\t";
		cout << "住址： " << abs->personArray[ret].m_Addr << endl;
		std::cout << "Press Enter to continue...";
    	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 清掉可能残留的换行
    	std::cin.get(); // 等待回车
	}
	else{
		cout << "查无此人！！！" << endl;
		std::cout << "Press Enter to continue...";
    	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 清掉可能残留的换行
    	std::cin.get(); // 等待回车
		return;
	}
}
//修改联系人信息
void modifyPerson(Addressbooks * abs){
	cout << "请输入要修改的联系人姓名： " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs,name);
	if(ret != -1){
		cout << "请输入你要修改的字段: " << "1：姓名  2：性别  3：年龄  4：联系电话  5：住址" << endl;
		int flag;
		cin >> flag;
		switch (flag)
		{
		case 1:
		{
			/* code */
			cout << "修改后的姓名： " << endl;
			string name;
			cin >> name;
			abs->personArray[ret].m_Name = name;
			break;
		}
			
		case 2:
			{
			/* code */
			cout << "修改后的性别（1男2女）： " << endl;
			int sex;
			cin >> sex;
			abs->personArray[ret].m_Sex = sex;
			break;
		}
			
		case 3:
			{
			/* code */
			cout << "修改后的年龄" << endl;
			int age;
			cin >> age;
			abs->personArray[ret].m_Age = age;
			break;
		}
			
		case 4:
			{
			/* code */
			cout << "修改后的联系电话: " << endl; 
			string phone;
			cin >> phone;
			abs->personArray[ret].m_Phone = phone;
			break;
		}
			
		case 5:
			{
			/* code */
			cout << "修改后的住址： " << endl;
			string address;
			cin >> address;
			abs->personArray[ret].m_Addr = address;
			break;
		}
			
		default:
			std::cout << "Press Enter to continue...";
    		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 清掉可能残留的换行
    		std::cin.get(); // 等待回车
			return;
		}
	}
	else{
		cout << "此人不存在！！！" << endl;
		std::cout << "Press Enter to continue...";
    	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 清掉可能残留的换行
    	std::cin.get(); // 等待回车
		return;
	}
}
//修改指定联系人
void cleanPerson(Addressbooks * abs){
	abs->m_Size = 0;
	cout << "通讯录已经清空！！！" << endl;
	std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 清掉可能残留的换行
    std::cin.get(); // 等待回车
	return;
}

int main(){
	//用户输入
	int select = 0;
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	while (true)
	{
		//显示菜单
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1.添加联系人
			addPerson(&abs);//利用地址传递可以修饰实参
			break;
		case 2://2.显示联系人
			showPerson(&abs);
			break;
		case 3://3.删除联系人
		{
			cout << "请输入要删除联系人姓名： " << endl;
			string name;
			cin >> name;
			int flag = isExist(&abs,name);
			if(flag == -1){
				cout << "查无此人！！！" << endl;
				break;
			}
			else{
				deletePerson(&abs,flag);
			}
			break;
		}
		case 4://4.查找联系人
			findPreterson(&abs);
			break;
		case 5://5.修改联系人
			modifyPerson(&abs);
			break;
		case 6://6.清空联系人
			cleanPerson(&abs);
			break;
		
		case 0://0.退出
			cout << "欢迎下次使用！！！" << endl;
			return 0;

		default:
			break;
		}
	}
	
	
	return 0;
}
