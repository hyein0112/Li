/*#include<stdio.h>
#include<string.h>
#include<windows.h>
typedef struct User {
	char id[100];
	char pw[100];
}user;

char directory[1000] = "C:\\Users\\user\\Desktop\\Li\\";
char input[100];
char call_num[15];
char id[100];
char pw[100];

int overlap_check(const char* fname) {
	FILE* file;
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

void find_id() {
	system("title find ID");
	user user;
qq:
	printf("��ȭ��ȣ�� �Է����ּ���\n��ȭ��ȣ:");
	scanf("%s", call_num);//��ȭ��ȣ �Է¹ް�

	strcat(directory, call_num);
	strcat(directory, ".txt");//���ϰ�ζ� ��ħ

	if (!overlap_check(directory)) {
		printf("��ȭ��ȣ�� �������� �ʽ��ϴ� �ٽ��Է����ּ���\n");
		Sleep(1000);
		system("cls");
		reset(directory);
		goto qq;
	}//�ߺ�üũ�� ������ �����̸� ��ȭ��ȣ������ ���ٴ� �ǹ̰� �ȴ�

	system("cls");

	FILE* fp = fopen(directory, "r");
	fscanf(fp, "%s", user.id);
	fclose(fp);
	reset(directory);//��ȭ��ȣ���� ���̵� ������

	zz:
	printf("��й�ȣ�� �Է����ּ���\n��й�ȣ:");
	scanf("%s", pw);
	strcpy(user.pw, pw);

	strcat(directory, user.id);
	strcat(directory, "_pw.txt");
	fp=fopen(directory, "r");
	fscanf(fp, "%s", pw);
	fclose(fp);

	if (!strcmp(user.pw, pw)) {
		system("cls");
		printf("���̵�� %s �Դϴ�", user.id);
		Sleep(2000);
	}
	else {
		printf("�н����带 �߸��Է��ϼ̽��ϴ�\n");
		Sleep(1000);
		system("cls");
		reset(directory);
		goto zz;
	}
}

void find_pw() {
	system("title find PW");
	user user;
	FILE* fp;
	zz:
	printf("���̵� �Է����ּ���\n");
	Sleep(1000);
	printf("���̵�:");
	scanf("%s",id);
	strcat(directory, id);
	strcat(directory, "_pw.txt");
	system("cls");

	if (!overlap_check(directory)) {
		printf("���̵� �������� �ʽ��ϴ�\n�ٽ��Է����ּ���");
		Sleep(1000);
		system("cls");
		reset(directory);
		goto zz;
	}
	reset(directory);

	tt:
	printf("��ȭ��ȣ�� �Է����ּ���\n��ȭ��ȣ:");
	scanf("%s",call_num);
	strcat(directory, call_num);
	strcat(directory, ".txt");

	if (!overlap_check(directory)) {
		printf("��ȭ��ȣ�� �����ϴ�\n�ٽ� �Է����ּ���");
		Sleep(1000);
		system("cls");
		reset(directory);
		goto tt;
	}
	system("cls");
	strcpy(user.id, id);
	fp = fopen(directory,"r");
	fscanf(fp, "%s", id);
	fclose(fp);
	reset(directory);
	if (!strcmp(id, user.id)) {
		strcat(directory,user.id);
		strcat(directory, "_pw.txt");
		fp=fopen(directory,"r");
		fscanf(fp,"%s",pw);
		printf("����� ��й�ȣ�� %s �Դϴ�\n",pw);
		Sleep(2000);
	}
}

int main() {
	system("title ���̵� Ȥ�� �н����� ã��");
	aa:
	printf("���̵� ã���ǰŸ� ID ��й�ȣ�� ã���ǰŸ� PW��� �Է����ּ���\n");
	scanf("%s", input);
	system("cls");
	if (!strcmp(input, "ID")) {
		find_id();
	}
	else if (!strcmp(input, "PW")) {
		find_pw();
	}
	else {
		printf("�ٽ� �Է����ּ���\n");
		system("cls");
		goto aa;
	}
}*/