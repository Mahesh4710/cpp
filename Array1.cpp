#include<iostream>
using namespace std;

class Array

{
private:
    int arr[5];
    int i;

public:

    void getdata()
    {
    cout<<"Welcome"<<endl;
    cout<<"Enter the elements in array"<<endl;
        for( i=1;i<=5;i++){
            cin>>arr[i];
        }
    }
    void printdata()
    {
        cout<<"Entered the elements in array are :"<<endl;
        for( i=1;i<=5;i++){
            cout<<" "<<arr[i];
        }
        cout<<endl;
    }
    void bigelement()
    {
       
        for( i=1;i<=5;i++ )
        {
            int temp;
            if(arr[1]<arr[2])
            {
                temp=arr[1];
                arr[1]=arr[2];
                arr[2]=temp;
 
            }
            if(arr[1]<arr[3])
             {
                temp=arr[1];
                arr[1]=arr[3];
                arr[3]=temp;
             }
             if(arr[1]<arr[4])
             {
                temp=arr[1];
                arr[1]=arr[4];
                arr[4]=temp;
             }
             if(arr[1]<arr[5])
             {
                temp=arr[1];
                arr[1]=arr[5];
                arr[5]=temp;
             }
             
             cout<<endl;
            
        }
        cout<<"Big element in array is  : "<<arr[1]<<endl;

    }

};
int main(int argc, char const *argv[])
{
    Array a;
    a.getdata();
    a.printdata();
    a.bigelement();
    a.printdata();

    return 0;
}



