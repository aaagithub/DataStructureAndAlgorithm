//冒泡排序
//最坏：O(n2)     平均：O(n2)     最好：O(n)   空间：O(1)  稳定
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
//最坏：O(n2)     平均：O(n2)     最好：O(n2)  空间：O(1)   不稳定
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
//最坏：O(n2)     平均：O(n2)     最好：O(n)    空间：O(1)    稳定
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

//快速排序
void QuickSort(int a[],int l, int r)
{
	if (l < r)
	{
		int X = a[l];
		int i = l;
		int j = r;
		while (i < j)
		{
			//首先从右侧找比X小的数填充到a[l]
			while (i < j&&a[j] > X)
			{
				j--;
			}
			if (i < j)
			{
				a[i] = a[j];
				i++;
			}
			//再从左侧找比X大的数填充到a[j]
			while (i < j&&a[i] < X)
			{
				i++;
			}
			if (i < j)
			{
				a[j] = a[i];
				j--;
			}
		}
		a[i] = X;
		QuickSort(a, l, i - 1);
		QuickSort(a, i + 1, r);
	}
}

//归并排序
//将有二个有序数列a[first...mid]和a[mid...last]合并。
void mergearray(int a[], int first, int mid, int last, int temp[])
{
	int i = first, j = mid + 1;
	int m = mid, n = last;
	int k = 0;

	while (i <= m && j <= n)
	{
		if (a[i] <= a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}

	while (i <= m)
		temp[k++] = a[i++];

	while (j <= n)
		temp[k++] = a[j++];

	for (i = 0; i < k; i++)
		a[first + i] = temp[i];
}
void mergesort(int a[], int first, int last, int temp[])
{
	if (first < last)
	{
		int mid = (first + last) / 2;
		mergesort(a, first, mid, temp);    //左边有序
		mergesort(a, mid + 1, last, temp); //右边有序
		mergearray(a, first, mid, last, temp); //再将二个有序数列合并
	}
}

void MergeSort(int a[], int n)
{
	int *p = new int[n];
	if (p == NULL)
		return;
	mergesort(a, 0, n - 1, p);
	delete[] p;
	return;
}
