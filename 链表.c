//#include<stdio.h>
//#include<stdlib.h>
//typedef struct stu {
//	char num[10];
//	char name[10];
//	char sex;
//	int age;
//	float score;
//	struct stu* next;
//}stu;
//stu* Create(int n) {
//	stu* head = NULL;
//	stu *pf =NULL, * pb;
//	int i;
//	for (i = 0; i < n; i++) {
//		pb = (stu*)malloc(sizeof(stu));
//		fflush(stdin);
//		printf("������ѧ�ţ�");
//		gets(pb->num);
//		printf("������������");
//		gets(pb->name);
//		printf("�������Ա�");
//		scanf_s("%c", &pb->sex); //
//		printf("���������䣺");
//		scanf_s("%d", &pb->age);
//		printf("������ɼ���");
//		scanf_s("%f", &pb->score);
//
//		pb->next = NULL;
//		if (i == 0) 
//			head = pb;
//		
//		else
//		{
//			pf->next = pb;
//		}
//
//			pf = pb;
//		
//		
//	}
//return(head);
//}
//void ShowALL(stu *p1) {
//	stu* p;
//	p = p1;
//	if (p1) {
//		printf("num\tname\tsex\tage\tscore\n");
//	}
//	else {
//		printf("����Ϊ��");
//		return;
//	}
//	while (p) {
//		printf("%s\t%s\t%c\t%d\t%3.1f\n", p->num, p->name, p->sex, p->age, p->score);
//		p = p->next;
//	}
//}
//int main(void) {
//	int n;
//
//	stu* head;
//	printf("�����ѧ����������");
//	scanf_s("%d", &n);
//	
//	head = Create(n);
//	ShowALL(head);
//	return 0;
//}