/*#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<string.h>

typedef struct User {
	char name[300];
	int old;
	char call_num[15];
	char id[100];
	char pw[100];
	char s[100];//����
}User;//������� ������ �ӽ÷� �����ϴ� ����ü

int overlap_check(const char *fname){
	FILE *file;
	if ((file = fopen(fname, "r")))//������ �б� ���·� �������� ������ ������ ������ �����Ѵٴ� �ǹ̰� �ȴ�
	{
		fclose(file);
		return 1;
	}
	return 0;
}//������ �����ϴ��� üũ���ִ� �Լ�,1�� ��ȯ�ϸ� ������ �����Ѵٴ� �ǹ�

void reset(char b[]) {
	for (int i = 0; i < 1000; i++)b[i] = 0;
	strcat(b, "C:\\Users\\user\\Desktop\\Li\\");
}//b�� �⺻����� C:\Users\user\Desktop\Li\ �� �ٲ��ִ� �Լ�

int main() {
  system("title register");
	FILE* fp;
	User user;
	char b[1000] = "C:\\Users\\user\\Desktop\\Li\\";
  qq:
	printf("���̵�:");
	scanf("%s", user.id);
	//���̵� �Է¹޾� ����

  strcat(b,user.id);
  strcat(b,"_pw.txt");
  if(overlap_check(b)){
	printf("�ߺ��Ǵ� ���̵� �����մϴ�\n�ٽ��Է����ּ���\n");
	reset(b);//b�� �⺻��η� ����
	Sleep(2000);
	system("cls");
	goto qq;
  }//�ߺ��Ǵ� ���̵� �ִ��� Ȯ��

  reset(b);//b�� �⺻��η� ����

	printf("�н�����:");
	scanf("%s", user.pw);
	//�н����� �Է¹ް� ����ü�� ����

  printf("�̸�:");
  scanf("%s", user.name);
	//�̸��� �Է¹ް� ����ü�� ����

	printf("����:");
	scanf("%d", &user.old);
	//���� �Է¹ް� ����ü�� ����

	printf("����:");
	scanf("%s",user.s);
	//������ �Է¹ް� ����ü�� ����

  zz:
  printf("��ȭ��ȣ:");
  scanf("%s",user.call_num);
  //��ȭ��ȣ�� �Է¹ް� ����ü�� ����
  strcat(b, user.call_num);
  strcat(b,".txt");
  if(overlap_check(b)){
	printf("�ߺ��Ǵ� ��ȭ��ȣ�� �����մϴ�\n�ٽ��Է����ּ���\n");
	reset(b);//b�� �⺻��η� ����
	Sleep(2000);
	system("cls");
	printf("���̵�:%s\n�н�����:%s\n�̸�:%s\n����:%d\n����:%s\n",user.id,user.pw,user.name,user.old,user.s);
	goto zz;
  }

  reset(b);

  strcat(b, user.id);
	strcat(b, "_pw.txt");
	fp = fopen(b, "w");
	fputs(user.pw, fp);
	fclose(fp);
	reset(b);//b�� �⺻��η� ����
	//�Է¹��� �н����带 �������·� ����

  strcat(b, user.id);
	strcat(b, "_name.txt");
	fp = fopen(b, "w");
	fputs(user.name, fp);
	fclose(fp);
	reset(b);//b�� �⺻��η� ����
	//�Է¹��� �̸��� �������·� ����

  strcat(b, user.id);
	strcat(b, "_old.txt");
	fp = fopen(b, "w");
	fprintf(fp, "%d", user.old);
	fclose(fp);
	reset(b);//b�� �⺻��η� ����
	//�Է¹��� ���̸� �������·� ����

  strcat(b, user.id);
	strcat(b, "_s.txt");
	fp = fopen(b, "w");
	fprintf(fp, "%s", user.s);
	fclose(fp);
	reset(b);//b�� �⺻��η� ����
	//�Է¹��� ������ �������·� ����

  strcat(b, user.call_num);
	strcat(b, ".txt");
	fp = fopen(b, "w");
	fprintf(fp, "%s", user.id);
	fclose(fp);
	reset(b);//b�� �⺻��η� ����
	//�Է¹��� ��ȭ��ȣ�� �������·� ����

	strcat(b, user.id);
	strcat(b, "_bestscore.txt");
	fp = fopen(b, "w");
	fprintf(fp, "%d", 0);
	fclose(fp);
	reset(b);//b�� �⺻��η� ����
}*/