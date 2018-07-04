//冒泡排序
//最坏：O(n2)     平均：O(n2)     最好：O(n)
void BubbleSort(int a[], int n)
{
    bool swap = false;
    for(int i = 0; i < n; i ++)
    {
        for(int j = 1; j < n-i; j++)
        {
            if(a[j] > a[j-1])
            {
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
                swap = true;
            }
        }
        //没有发生位置交换，整体有序退出
        if(false == swap)
        {
            return;
        }
    }
}


//选择排序
//最坏：O(n2)     平均：O(n2)     最好：O(n2)
void SelectionSort(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int index = i;
		for (int j = i + 1; j < n; j++)
		{
			//找到无序部分最小元素索引
			if (a[j] < a[index])
			{
				index = j;
			}
		}
		//将最小元素前移
		int temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}
}


//插入排序
//最坏：O(n2)     平均：O(n2)     最好：O(n)
void InsertionSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int j = i - 1;
		int temp = a[i];
		//移出插入位置
		while (j >= 0 && a[j] > temp)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}


