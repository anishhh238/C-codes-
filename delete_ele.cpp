#include<iostream>
using namespace std;
int main()
{
    int arr[10], tot=10, i, elem, j, found=0;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
 
    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            tot--;
        }
    }
    if(found==1)
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;
    return 0;
}
