#include <iostream>
using namespace std;

//int A[5] = { 30, 20, 50, 40, 25 };

int A[10] = {52, 49, 80, 36, 14, 58, 61, 23, 97, 75};

//打印数组内容
void Output()
{
	int i;
	for (i = 0; i < sizeof(A) / sizeof(A[0]); i++)
		cout << A[i] << " ";
	cout << endl;
}

//插入排序
void InsertSort(int Array[], int length)
{
	int i, j;
	int tmp;
	for (i = 1; i < length; i++)
	{
		tmp = Array[i];//取出无序表的第一个元素插入到有序表
		for (j = i - 1; j >= 0; j--)//有序表排序 断点①
		{
			if (tmp < Array[j])
				Array[j + 1] = Array[j];//位置j的元素向后移动
			else
				break;
		}
		Array[j + 1] = tmp;

		Output();

	}//断点②
}

//选择排序
void SelectSort(int Array[], int  length)
{
	int i, j, min;
	int tmp;
	for (i = 0; i < length - 1; i++)
	{
		min = i; //默认无序表的第一个元素Array[i]为最小值
		for (j = i + 1; j < length; j++) //查找最小值下标 断点③
			if (Array[j] < Array[min])
				min = j;
		if (min != i) //找到了比i位置更小的元素且min与i的值不同
		{
			tmp = Array[i];
			Array[i] = Array[min];
			Array[min] = tmp;
		}

		Output();

	}//断点④
}

int main()
{
	//InsertSort(A, 5);
	//SelectSort(A,5);

	InsertSort(A,10);
	cout << endl;
	SelectSort(A,10);

	return 0;
}
