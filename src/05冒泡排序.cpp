#include<iostream>
using namespace std;
//冒泡排序算法
void bubbleSort(int * p,int len){
    for(int i = 0;i < len - 1;i++){
        for(int j = 0; j < len - 1 - i;j++){
            if(p[j] > p[j+1]){
                int tmp = p[j];
                p[j] = p[j + 1];
                p[j+1] = tmp;
            }
        }
    }
}
void printArray(int * p,int len){
    for(int i = 0;i < len;i++){
        cout << "排序后第" << i << "个元素是: " << p[i] << endl;
    }
}
int main(){
	int arr[10] = {2,6,1,3,4,8,9,7,0,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,len);
    printArray(arr,len);
	return 0;
}
