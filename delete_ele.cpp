#include<iostream>
using namespace std;
int main()
{
    int arr[10], tot=10, i, elem, j, found=0;
    
    cout<<"Enter 10 Array Elements: ";
    
    for(i=0; i<tot; i++)
        cin>>arr[i];
    
    //U didn't take element to deleted, as it will not delete element n not run the code properly
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
        
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
    if(found==0) //check the condition found==0
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;
    return 0;
}
