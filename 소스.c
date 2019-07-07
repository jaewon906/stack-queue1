#include <stdio.h> 
struct Stack 
 { 
 	int data[10]; 
	int index; 
}; 
 
 
 void Push(struct Stack *pStack); 
 void Pop(struct Stack *pStack); 
 void Show(struct Stack *pStack); 
 
 
 void main(void) { 
 
 
 	printf("========== �޴� =========\n"); 
 	printf("PUSH : 1\n"); 
 	printf("POP : 2\n"); 
 	printf("SHOW : 3\n"); 
 	printf("(���� �Ϸ��� 1,2,3 �̿��� �� �Է�)\n\n"); 
 
 
 	struct Stack Stack1 = { 0,0 }; 
 	int sel = 1;	//�迭 �� ���� ���� (���۽� ��� �ε��� �ش簪 0���� �ʱ�ȭ 
 
 
 	while (sel == 1 || sel == 2 || sel == 3) {		//1,2,3 �̿��� �Է½� ���α׷� ���� 
 
 
 		printf("�޴��� �����ϼ��� : "); 
 		scanf("%d", &sel); 
 
 
 		switch (sel) 
 		{ 
 		case 1: 
 			if (Stack1.index < 10) { 
 				Push(&Stack1); 
 			} 
 			else { 
 				printf("������ �� �ʰ��Դϴ�."); 
 			} 
 			break; 
 		case 2: 
 			Pop(&Stack1); 
 			break; 
 		case 3: 
 			Show(&Stack1); 
 			break; 
 			printf("========= ���� ���α׷��� �����մϴ� ==========\n"); 
 		} 
 	} 
 } 
 
 
 void Push(struct Stack *pStack) { 
 	int iValue; 
 	printf("�� �Է� : "); 
 	scanf("%d", &iValue); 
 	pStack->data[pStack->index] = iValue;		 
 	pStack->index++; 
 } 
 
 
 void Pop(struct Stack *pStack) { 
 	pStack->index--; 
 	pStack->data[pStack->index] = 0;			 
 } 
 
 
 void Show(struct Stack *pStack) { 
 	for (int i = 0; i <= 9; i++) {	 
 		if (pStack->data[i] != 0) 
 			printf("%d ", pStack->data[i]); 
 	} 
 	printf("\n"); 
 } 
