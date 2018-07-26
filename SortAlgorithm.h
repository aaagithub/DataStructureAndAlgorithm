//排序算法均针对n个数的整形数组
//冒泡排序
//最坏：O(n2)     平均：O(n2)     最好：O(n)
void BubbleSort(int a[], int n);

//选择排序
//最坏：O(n2)     平均：O(n2)     最好：O(n2)
void SelectionSort(int a[], int n);

//插入排序
//最坏：O(n2)     平均：O(n2)     最好：O(n)
void InsertionSort(int a[], int n);


//快速排序
//l=0  r=n-1
void QuickSort(int a[],int l, int r);

//归并排序
void MergeSort(int a[], int n);
