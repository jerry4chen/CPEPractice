#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;  // ptr to next node
} NODE; 

NODE *getnode(void){
	//create new NODE	
	NODE *p;
	p = (NODE*)malloc(sizeof(NODE));
	if(p==NULL){
		printf("out of memory");
		exit(1);
		}
	return p;

}

NODE *freenode(NODE *p){
	free(p);
}

NODE *searchnode(NODE *p, int num){
	//search num from *p till the end
	NODE *q;
	q = p->next;
	while(q!=NULL&&q->data!=num){
		q = q->next;

	}
	return(q);
	
}

NODE *find_node(NODE *p, int num){
	NODE *ptr;
	ptr =p;
	while(ptr!=NULL){
		if(ptr->data == num)
			return(ptr);
		else
			ptr = ptr->next;
	}
	return(ptr);
		
}

int length(NODE* p){
	int num=0;
	NODE *q = p->next;
	while(q!=NULL){
		num++;
		q=q->next;
	}	
	return(num);
}



int main(void){
	//NODE *head = ma;
	NODE *arrnode[6];// = (NODE*)malloc(sizeof(NODE)*6);
	int i =0;
	arrnode[0]->data =0;
	/*for(i=0;i<5;i++)
	{arrnode[i]->next = arrnode[i+1];
	 arrnode[i]->data = i;}
	*/

	int num = length(arrnode[0]);
	
	
	printf(" %d arrnode initialized\n",num);

return 0;
}
