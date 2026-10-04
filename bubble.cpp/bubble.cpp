#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 3, 6, 2, 7, 1};
    int n = 6;
    //冒泡排序
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            //相邻元素比较，如果前面大于后面就交换
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //输出排序之后的数组
    cout << "从小到大排序结果：";
    for(int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}