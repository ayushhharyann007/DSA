#include <iostream>
using namespace std;

struct Student
{
 int rollno;
 string name;
 int dob;
};

int main()
{
    int n;
    cout<<"Enter the number of times:";
    cin>>n;
    Student a[n];
    for(int i=0;i<=n;i++)
    {
        cout<<"Enter the roll no:";
        cin>>a[i].rollno;

        cout<<"Enter the name:";
        cin>>a[i].name;

        cout<<"Enter the dob:";
        cin>>a[i].dob;
    }

    for(int i = 0;i<=n;i++)
    {
        cout<<a[i].name<<endl;
        cout<<a[i].rollno<<endl;
        cout<<a[i].dob<<endl;
    }

    return 0;
}




#include <iostream>
using namespace std;

struct Student
{
 int rollno;
 string name;
 int dob;
};

int main()
{
    int n;
    cout<<"Enter the number of times:";
    cin>>n;
    Student a[n];
    for(int i=0;i<=n;i++)
    {
        cout<<"Enter the roll no:";
        cin>>a[i].rollno;

        cout<<"Enter the name:";
        cin>>a[i].name;

        cout<<"Enter the dob:";
        cin>>a[i].dob;
    }

    for(int i = 0;i<=n;i++)
    {
        cout<<a[i].name<<endl;
        cout<<a[i].rollno<<endl;
        cout<<a[i].dob<<endl;
    }

    return 0;
}