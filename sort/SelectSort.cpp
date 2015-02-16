#include <iostream>
using namespace std;

void selectSort(int data[], int len)
{
	for(int i=0; i<len; i++)
	{
		//找出第i趟排序中最小的数据下标
		int pos=i;
		for(int j=i; j<len; j++)
		{
			if(data[pos]>data[j])
			{
				pos = j;
			}
		}
		//交换data[pos]和data[i]
		if(pos!=i)
		{
			data[pos] = data[pos]^data[i];
			data[i] = data[pos]^data[i];
			data[pos] = data[pos]^data[i];
		}
	}
}

int main(int argc, char *agrv[])
{
	int a[]={1,3,6,11,434,56,0,-81};
	selectSort(a,sizeof(a)/sizeof(int));
	for(int i=0; i<sizeof(a)/sizeof(int); i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}

