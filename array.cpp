// #include <iostream>
// using namespace std;

// void insertatbeg(){
//     int n,num;
//     cout<<"\nEnter the number of elements:";
//     cin>>n;
//     int array[n];
//     for (int i=0; i<n;i++){
//         cout<<"Enter the "<<i<<" element:";
//         cin>>array[i];
//     }
//     cout<<"\nElements:";
//     for (int i=0; i<n;i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<"\nEnter the elements to insert at [0] index:";
//     cin>>num;
//     for(int i=n-1;i>=0;i--){
//         array[i+1]=array[i];
//     }
//     array[0]=num;
//     cout<<"\nElements after Insertion:"<<endl;
//     for (int i=0; i<n;i++){
//         cout<<array[i]<<" "<<endl;
//     }
// }


// int main()
// {
//     insertatbeg();
//     return 0;
// }




// #include <iostream>
// using namespace std;

// void insertatbeg(){
//     int n,num;
//     cout<<"\nEnter the number of elements:";
//     cin>>n;
//     int array[n];
//     for (int i=0; i<n;i++){
//         cout<<"Enter the "<<i<<" element:";
//         cin>>array[i];
//     }
//     cout<<"\nElements:"; 
//     for (int i=0; i<n;i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<"\nEnter the elements to insert at [0] index:";
//     cin>>num;
//     for(int i=n-1;i>=0;i--){
//         array[i+1]=array[i];
//     }
//     array[0]=num;
//     cout<<"\nElements after Insertion:"<<endl;
//     for (int i=0; i<n;i++){
//         cout<<array[i]<<" "<<endl;
//     }
// }


// int main(){
//     insertatbeg();
//     return 0;
// }






// #include<iostream>
// using namespace std;

// void fun(int pos,int size,int arr[],int value)
// {
//     for(int i = size+1;i>=pos;i--)
//     {
//         arr[i+1] = arr[i];   
//     }
//     size=size+1;
//     arr[pos] = value;
//     for(int i = 0;i<size;i++)
//     {
//         cout<<arr[i];
//     }
// }
// int main (){
//     int arr[30];
//     int n, position,value;
//     cout<<"Enter the no. of elements";
//     cin>>n;
//     for(int i = 0;i<n;i++)
//     {
//         cout<<"Enter the elements"<<i+1<<":";
//         cin>>arr[i];
//     }
//         cout<<"Enter the index";
//     cin>>position;
//     cout<<"Enter the value you want to insert";
//     cin>>value;
//     fun(position,n,arr,value);
//     return 0;
// }






#include <iostream>
using namespace std;

void swapper(int* arr, int n){
    int greatest = arr[0];
    int smallest = arr[0];
    int smallIndex,largeIndex, temp;

    for(int i = 1; i < n; i++){
        if(greatest < arr[i]){
            greatest = arr[i];
        }
        else if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

// cout << greatest << smallest<<endl;
    for(int i = 0; i < n; i++){
        if(arr[i] == smallest){
            smallIndex = i;
        }
        else if(arr[i] == greatest){
            largeIndex = i;
        }
    }

    temp = arr[smallIndex];
    arr[smallIndex] = arr[largeIndex];
    arr[largeIndex] = temp;

    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    } 
   cout << endl;

}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }

    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    cout << "New array     : ";
    swapper(arr,n);
    return 0;
    }