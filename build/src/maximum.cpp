#include<iostream>
#include<climits>
using namespace std;
bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
    }
    return false;
}
int sumarray(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
void update(int arr[],int size)
{
    arr[0]=200;
    cout<<"inside the function"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;

}
int getmax(int arr[], int size)
{
    int maxx = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxx)
            maxx = arr[i];
    }
    return maxx;
}

int getmin(int arr[], int size)
{
    int minn = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minn)
            minn = arr[i];
    }
    return minn;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    update(arr,n);
   cout<<"Array elements are:"<<endl;
  for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout << "Maximum value: " << getmax(arr, n) << endl;
    cout << "Minimum value: " << getmin(arr, n) << endl;
    cout<<"Sum of array:";
    int a=sumarray(arr,n);
    cout<<a<<endl;
    return 0;
}
