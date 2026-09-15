#include <iostream>
using namespace std;
void read(int arr[],int &n){
cout<<"enter number of elements in array";
cin>>n;
cout<<"enter elements of array ";
for(int i=0;i<n;i++){
cin>>arr[i];
}
}
void display(int arr[],int n){
cout<<"sorted aray is ;";
for(int i=0;i<n;i++){
cout<<arr[i]<<" ,";
}
}
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
void sort(int arr[],int n ){
for(int i=0 ;i<n;i++){
for(int j=0 ;j<n-i-1;j++){
if(arr[j]>arr[j+1])
swap(&arr[j],&arr[j+1]);
}
}
}
int main() {
int n;
int arr[100];
read(arr, n);
sort(arr, n);
display(arr, n);

}
