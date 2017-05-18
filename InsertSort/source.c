#include <stdio.h>
#define N 10

/**
* [insertSort 插入排序]
* @param m [输入序列]
* @param n [序列长度]
*/
void insertSort(int* m, int n)
{
	int temp = 0, j = 1;
	/*遍历整个数组*/
	for (int i = 1; i < n; i++)
	{
		temp = m[i];
		j = i;
		/*从第i的元素往前寻找待插入的位置,
		 *并不断的将待插入位置后面的元素往后移动*/
		while(j!=0&&temp<m[j-1])
		{
			m[j] = m[j-1];
			j--;
		}
		/*找到了待插入的位置,并赋值*/
		m[j] = temp;
	}
}

int main()
{
	int m[N] = {0,2,1,4,5,3,6,9,8,7};
	insertSort(m, N);
	for (int i = 0; i < N; i++)
		printf("%d ", m[i]);
	printf("\n");
	return 0;
}
