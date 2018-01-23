#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    const int length(9);
    int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    for(int i = 0; i < length; i++)
    {
        cout<<array[i]<<endl;
    }
    cout<<"\n";
    for(int j = 0; j < length; j++)
    {
        bool swapped(false);
        for(int i = 0; i < (sizeof(array)/sizeof(array[0])) -j - 1 ; i++)
        {
            if( array[i] > array[i+1] )
            {
                swap(array[i],array[i+1]);
                swapped = true;
            }
        } 
        /*if(array[0]<array[1]<array[2]<array[3]<array[4]<array[5]<array[6]<array[7]<array[8]<array[9])
        {
            cout<<"Early termination of iteration "<<j<<endl;
            break;
        }*/
        if(!swapped)
            {
                cout<<"Early termination of iteration "<<j+1<<endl;
                break;
            }
    }
    for(int i = 0; i < length; i++)
    {
        cout<<array[i]<<endl;
    }
    
}
