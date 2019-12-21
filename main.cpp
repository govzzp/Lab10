#include <iostream>
using namespace std;

//int A[5] = { 30, 20, 50, 40, 25 };

int A[10] = {52, 49, 80, 36, 14, 58, 61, 23, 97, 75};

//��ӡ��������
void Output()
{
	int i;
	for (i = 0; i < sizeof(A) / sizeof(A[0]); i++)
		cout << A[i] << " ";
	cout << endl;
}

//��������
void InsertSort(int Array[], int length)
{
	int i, j;
	int tmp;
	for (i = 1; i < length; i++)
	{
		tmp = Array[i];//ȡ��������ĵ�һ��Ԫ�ز��뵽�����
		for (j = i - 1; j >= 0; j--)//��������� �ϵ��
		{
			if (tmp < Array[j])
				Array[j + 1] = Array[j];//λ��j��Ԫ������ƶ�
			else
				break;
		}
		Array[j + 1] = tmp;

		Output();

	}//�ϵ��
}

//ѡ������
void SelectSort(int Array[], int  length)
{
	int i, j, min;
	int tmp;
	for (i = 0; i < length - 1; i++)
	{
		min = i; //Ĭ��������ĵ�һ��Ԫ��Array[i]Ϊ��Сֵ
		for (j = i + 1; j < length; j++) //������Сֵ�±� �ϵ��
			if (Array[j] < Array[min])
				min = j;
		if (min != i) //�ҵ��˱�iλ�ø�С��Ԫ����min��i��ֵ��ͬ
		{
			tmp = Array[i];
			Array[i] = Array[min];
			Array[min] = tmp;
		}

		Output();

	}//�ϵ��
}

int main()
{
	//InsertSort(A, 5);
	//SelectSort(A,5);

	InsertSort(A,10);
	cout << endl;
	SelectSort(A,10);
	cout<< "Hello World"<<endl;
	return 0;
}
