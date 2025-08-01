#include <stdio.h>
int front=-1;
int rear=-1;
int MAX;
void display(int queue[]){
    if(front == -1){
        printf("Queue is empty\n");
    }else{
        printf("Queue: ");
        for (int i = front; i <= rear; i++){ 
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
void enqueue(int queue[],int value){
    if(rear==MAX-1){
        printf("Queue is full\n");
    }else{
        if(front==-1){
            front = 0;
        }
        rear++;
        queue[rear]=value;
        printf("%d inserted\n",value);
   }
display(queue);
}
void dequeue(int queue[]){
    if(front == -1){
        printf("Queue is empty\n");
    }else{
        printf("Removed:%d\n",queue[front]);
        if(front==rear){
            front=-1;
            rear=-1;
        }else{
            front++;
        }
}
display(queue);
}
int main(){
    int choice,value;
    printf("Enter the size of queue:");
    scanf("%d", &MAX);
    int queue[MAX];
    while (1){
        printf("Enter operation:1.Enqueue 2.Dequeue 3.End :");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter value:");
                scanf("%d", &value);
                enqueue(queue, value);
                break;
            case 2:
                dequeue(queue);
                break;
            case 3:
                printf("Exited\n");
                return 0;
            default:
                printf("Invalid\n");
                }
            }
            return 0;
}

