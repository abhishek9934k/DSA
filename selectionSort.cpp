#include <bits/stdc++.h>
using namespace std;
void inputArry(int *a, int b){
    for(int i=0;i<b;i++){
        cin>>a[i];

    }


}
void SlectionSort(int *a,int n){
    
    for (int i=0;i<n-1;i++){
        int min=a[i];
        for (int j = i+1; j<n; j++)
        {
            if(a[j]<min){
                min=a[j];
                a[j]=a[i];
                a[i]=min;

            }
        }
        




    }

}
void PrintArray(int *a,int n){

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

}

int main(){
    //size of array
    cout<<"enter the size of your array:- ";
    int n;
    scanf("%d",&n);

    int a[n];
    //input of array
    cout<<"enter the "<<n<<"number of element:- ";
    inputArry( a,n);

    SlectionSort(a,n);

    cout<<"This is the sorted Array:- ";
    PrintArray(a,n);




    return 0;
}