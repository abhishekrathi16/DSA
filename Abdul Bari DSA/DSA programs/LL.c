//lec 175
//program to display a linked list

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first;

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

void rdisplay(struct Node *p){
    if(p!=NULL){
        printf("%d ",p->data);
        rdisplay(p->next);
    }
}

int count(struct Node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}

int rcount(struct Node* p){
    if(p!=NULL){
        return rcount(p->next)+1;
    }
    else{
        return 0;
    }
}

int sum(struct Node* p){
    int sum=0;
    while(p){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int Rsum(struct Node* p){
    if(p==NULL){
        return 0;
    }else{
        return Rsum(p->next)+p->data;
    }
}

int Max(struct Node *p){
    int max=-32768;  //can be replaced with INT32_MIN
    while(p){
        if(p->data > max){
            max=p->data;
        }
        p=p->next;
    }
    return max;
}

int rmax(struct Node* p){
    int x=0;
    if(p==0){
        return -32768;  //can be replaced with INT32_MIN
    }
    x=rmax(p->next);
    if(x > p->data){
        return x;
    }else{
        return p->data;
    }
}

struct Node* Lsearch(struct Node *p,int key){
    while(p){
        if(key==p->data){
            return p;
        }
        p=p->next;
    }
    return NULL;
}

struct Node* RLsearch(struct Node* p,int key){
    if(p==NULL){
        return NULL;
    }
    if(key==p->data){
        return p;
    }
    return RLsearch(p->next,key);
}

//improving linear search by Move to head method
struct Node* ImpLsearch(struct Node *p,int key){
    struct Node* q=NULL;
    while(p){
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}


int main(){
    int A[]={3,5,7,10,15,2,4};
    create(A,5);
    rdisplay(first);
    printf("\nLength is: %d\n",rcount(first));
    printf("Sum is: %d\n",Rsum(first));
    printf("Max is : %d\n",rmax(first));
    struct Node *temp;
    temp=RLsearch(first,10);
    if(temp){
        printf("Key is found \n");
    }else{
        printf("Key not found\n");
    }
    return 0;
}