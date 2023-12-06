#include<stdio.h>
#include<stdlib.h>
#include<curses.h>

typedef struct list {
	int data;
	struct list *link;
}Node, *pNode;

//구조체 동적할당
Node *talloc(void);
//PUSH
Node* push(Node *head);
//POP
Node* pop(Node *head);
//프린트
void link_print(Node *head);
//리스트 갯수
int link_number(Node *head);


int main(void) {
	Node *head;
	head = NULL;
	while(true) {
		switch(getch()) {
		case '1'://PUSH
			if (link_number(head) < 10) {
				printf("\n입력 : ");
				head = push(head);
			}
			else {
				printf("\n  WARNING : 오버플로우\n");
			}
			break;
		case '2'://POP
			if (head != NULL) {
				printf("\n출력\n");
				head = pop(head);
			}
			else {
				printf("\n  WARNING : 로우플로우\n");
			}
			break;
		case '3'://All Print
			printf("\n프린트\n");
			link_print(head);
			break;
		case '4'://End
			return;
			break;
		}
	}
}


//구조체 동적할당
Node *talloc(void)  {
	return (Node *)malloc(sizeof(Node));
}

//PUSH
Node* push(Node *head) {
	Node *p=talloc();
	scanf("%d", &p->data);
	p->link=head;
	return p;
}

//POP
Node* pop(Node *head) {
	printf("%d\n", head->data);
	return head->link;
}

//프린트
void link_print(Node *head) {
	Node* p = head;
	while(p!=NULL) {
		printf("%d\n", p->data);
		p=p->link;
	}
	free(p);
}

//리스트 갯수
int link_number(Node *head) {
	int cnt = 0;
	Node* p = head;
	while(p!=NULL) {
		p=p->link;
		cnt++;
	}
	free(p);
	return cnt;
}
