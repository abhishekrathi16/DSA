//program for arrays

//all lectures of arrays

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
    int i;
    cout<<"Elements of the array are:\n";
    for(i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
    cout<<endl;
}

void append(struct Array *arr,int x){
    if(arr->length < arr->size){
        arr->A[arr->length++]=x; //append the value and increase the length together
    }
}

void insert(struct Array *arr,int index, int x){
    if(index>=0 && index<=arr->length) //checking if the index is valid
    {
        for(int i=arr->length; i>index; i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index){
    int x=0;
    if(index>=0 && index<=arr->length)//checking if index is valid
    {
        x=arr->A[index];
        for(int i=index; i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

//linear search
int linearSearch(struct Array arr, int key){
    int i;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]==key){
            return i;
        }
    }
    return -1;
}

//linear search with improvement by transposition
int TlinearSearch(struct Array *arr, int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(arr->A[i]==key){
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

//linear search with improvement by move to head
int HlinearSearch(struct Array *arr, int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(arr->A[i]==key){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}

//iterative version of binary search
int BinarySearch(struct Array arr, int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;

    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }else if(key<arr.A[mid]){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    return -1;
}

//recursive method of binary search
int RBinSearch(int a[],int l,int h,int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid]){
            return mid;
        }else if(key<a[mid]){
            return RBinSearch(a,l,mid-1,key);
        }else{
            return RBinSearch(a,mid+1,h,key);
        }
    }
    return -1;
}

//gets an element
int Get(struct Array arr,int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    return -1;
}

//sets an element to a given index
void Set(struct Array *arr,int index,int x){
    if(index>=0 && index<arr->length){
        arr->A[index]=x;
    }
}

//maximum of the array
int Max(struct Array arr){
    int max=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]>max){
            max=arr.A[i];
        }
    }
    return max;
}

//minimum of the array
int Min(struct Array arr){
    int min=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
    }
    return min;
}

//sum of all elements of the array
int Sum(struct Array arr){
    int s=0;
    for(int i=0;i<arr.length;i++){
        s+=arr.A[i];
    }
    return s;
}

//average of the array 
float Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}

//reverse an array
void Reverse(struct Array *arr){
    int *B;
    int i,j;
    B=(int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
}

void Reverse2(struct Array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}

//inserting elements in the sorted position
void insertSorted(struct Array *arr,int x){
    //check if there is free space in the array or not
    if(arr->length==arr->size){
        return;
    }
    int i=arr->length-1;
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}
//check if the array is sorted
int isSorted(struct Array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return -1;
        }
    }
    return 1;
}

//rearrange an array
void Rearrange(struct Array *arr){
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0) i++;
        while(arr->A[j]>=0) j--;
        if(i<j) swap(&arr->A[i],&arr->A[j]);
    }
}

//to merge 2 arrays
struct Array* Merge(struct Array *arr1, struct Array *arr2 ){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }else{
            arr3->A[k++]=arr2->A[j++];
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i];
    }
    for(;j<arr2->length;j++){
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
    return arr3;
}

//SET OPERATIONS
//UNION
struct Array* Union(struct Array *arr1, struct Array *arr2 ){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }else if(arr2->A[j]<arr1->A[i]){
            arr3->A[k++]=arr2->A[j++];
        }else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i];
    }
    for(;j<arr2->length;j++){
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

//INTERSECTION
struct Array* Intersection(struct Array *arr1, struct Array *arr2 ){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            i++;
        }else if(arr2->A[j]<arr1->A[i]){
            j++;
        }else if(arr1->A[i]==arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

//SET DIFFERENCE 
struct Array* Difference(struct Array *arr1, struct Array *arr2 ){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }else if(arr2->A[j]<arr1->A[i]){
            j++;
        }else if(arr1->A[i]==arr2->A[j]){
            i++;
            j++;
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i];
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

int main(){
    struct Array arr={{2,-3,25,10,-15,-7},10,5}; //first is the array , second is size, third is length
    //the array will be: 2,3,4,5,6,0,0,0,0,....0
    //only first 5 elements are numbers are declared and others are zero
    // append(&arr,10);
    // insert(&arr,3,10);
    // printf("%d\n",Delete(&arr,4));
    // cout<<"Element found at: "<<HlinearSearch(&arr,4)<<endl;
    // display(arr);
    // cout<<"Element found at: "<<BinarySearch(arr,15)<<endl;
    // cout<<"Element found at: "<<RBinSearch(arr.A,0,arr.length,3)<<endl;
    // cout<<Get(arr,3)<<endl;
    // Set(&arr,3,10);
    // display(arr);

    //check others like max, min, sum, avg
    // Reverse(&arr);
    // Reverse2(&arr);
    // insertSorted(&arr,10);
    // cout<<isSorted(arr)<<endl;
    // Rearrange(&arr);
    // display(arr);
    struct Array arr1={{2,6,10,15,25},10,5};
    struct Array arr2={{3,6,7,15,20},10,5};
    struct Array *arr3;
    // arr3=Merge(&arr1,&arr2);

    //set operations
    arr3=Union(&arr1,&arr2);
    arr3=Intersection(&arr1,&arr2);
    arr3=Difference(&arr1,&arr2);
    //set membership is same as the search operation
    display(*arr3);

    return 0;
}
