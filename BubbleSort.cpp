//冒泡排序
void BubbleSort(int a[], int n)
{
    bool swap = false;
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n-i; j++)
        {
            if(a[j] > a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = a[j];
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
