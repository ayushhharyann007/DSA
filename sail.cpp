#include <iostream>
using namespace std;

void insertbeginning(){
    int n;
    cout<<"Enter number of elements you ant to add: ";
    cin>>n;
    int arr[n];
    for(int i =1;i<=n;i++)
    {
        cout<<"Enter "<<i<<" value: ";
        cin>>arr[i];
    }
    for(int i =1;i<=n;i++)
    {
        cout<<arr[i];
    }

    for(int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    int a;
    cout<<"Enter value to insert: ";
    cin>>a;
    arr[0]=a;
    cout<<"\nThe array after adding at beginning is : \n";
    for(int i=0;i<=n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    insertbeginning();
}