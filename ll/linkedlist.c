#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node * link;
};
typedef struct node nd;

nd * insert_front(nd * );
nd * insert_rear(nd *);
void display(nd *);
nd * delete_front(nd *);

int main(){
   nd * first=0;

   first=insert_front(first);
   first=insert_front(first);
   display(first);
   display(first);
   return;
}

nd * insert_front(nd * f){
    nd *temp;
 
    temp=(nd*)malloc(sizeof(nd));
    scanf("%d",&(temp->data));
    temp->link=f;
    return temp;
}

nd * insert_rear(nd *f){
    nd * temp,*last;

    temp=(nd*)malloc(sizeof(nd));
    scanf("%d",&(temp->data));
    temp->link=0;

    if(f==0)
        return temp;
    for(last=f;last->link!=0 ; last= last->link);
    last->link=temp;
    return f;   
}

void display(nd *f){
    if(f==0){
        printf("NO linked list");
        return;
    }
    for(;f!=0;f=f->link)
        printf("%d\n",f->data);
}

nd * delete_front(nd *f){
    nd *temp;
    if(f==0){
        printf("NO linkedlist to delete");
        
    }
    else if(f->link==0){
        printf("The data deleted is %d",f->data);
        free(f);
        return 0;
    }
    temp=f->link;
    printf("The data deleted is %d",f->data);
    free(f);
    return temp;
}

nd * delete_rear(nd *f){

    if(f==0){
        printf("No linked list to delete.");
        return;
    }
    else if(f->link==0){
        printf("The data deleted is %d",f->data);
        free(f);
        return 0;
    }
    printf("The data deleted is %d",f->data);
//incomplete code




}




