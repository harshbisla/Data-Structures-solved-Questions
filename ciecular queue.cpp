
#include<iostream>
#include<stdlib.h>
using namespace std;
struct circularQueue
{
    int size;
    int f;
    int r;
    int* arr;
};


int isEmpty(struct circularQueue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q){
    if((q->r+1)%(q->size)==q->f){
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q, int val){
    if(isFull(q)){
        cout<<"This circularQueue is full\n";
    }
    else{
        q->r=(q->r+1)%(q->size);
        q->arr[q->r] = val;
        cout<<"Enqued element: "<< val<<endl;;
    }
}

int dequeue(struct circularQueue *q){
    int a = -1;
    if(isEmpty(q)){
        cout<<"This circularQueue is empty\n";
    }
    else{
        q->f=(q->f+1)%(q->size);
        a = q->arr[q->f]; 
    }
    return a;
}

int main(){
    struct circularQueue q;
    q.size = 4 ;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    // EncircularQueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    cout<<"Dequeuing element "<< dequeue(&q)<<endl;
    cout<<"Dequeuing element "<< dequeue(&q)<<endl;
    cout<<"Dequeuing element"<< dequeue(&q)<<endl; 
    enqueue(&q, 45);
    enqueue(&q, 4);
    enqueue(&q, 5);

    if(isEmpty(&q)){
        cout<<"circular Queue is empty\n";
    }
    if(isFull(&q)){
        cout<<"circular Queue is full\n";
    }

    return 0;
}
