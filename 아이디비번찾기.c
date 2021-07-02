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
	if ((file = fopen(fname, "r")))//파일을 읽기 형태로 열었을때 파일이 열리면 파일이 존재한다는 의미가 된다
	{
		fclose(file);
		return 1;
	}
	return 0;
}//파일이 존재하는지 체크해주는 함수,1을 반환하면 파일이 존재한다는 의미

void reset(char b[]) {
	for (int i = 0; i < 1000; i++)b[i] = 0;
	strcat(b, "C:\\Users\\user\\Desktop\\Li\\");
}//b를 기본경로인 C:\Users\user\Desktop\Li\ 로 바꿔주는 함수

void find_id() {
	system("title find ID");
	user user;
qq:
	printf("전화번호를 입력해주세요\n전화번호:");
	scanf("%s", call_num);//전화번호 입력받고

	strcat(directory, call_num);
	strcat(directory, ".txt");//파일경로랑 합침

	if (!overlap_check(directory)) {
		printf("전화번호가 존재하지 않습니다 다시입력해주세요\n");
		Sleep(1000);
		system("cls");
		reset(directory);
		goto qq;
	}//중복체크를 했을때 거짓이면 전화번호파일이 없다는 의미가 된다

	system("cls");

	FILE* fp = fopen(directory, "r");
	fscanf(fp, "%s", user.id);
	fclose(fp);
	reset(directory);//전화번호에서 아이디를 가져옴

	zz:
	printf("비밀번호를 입력해주세요\n비밀번호:");
	scanf("%s", pw);
	strcpy(user.pw, pw);

	strcat(directory, user.id);
	strcat(directory, "_pw.txt");
	fp=fopen(directory, "r");
	fscanf(fp, "%s", pw);
	fclose(fp);

	if (!strcmp(user.pw, pw)) {
		system("cls");
		printf("아이디는 %s 입니다", user.id);
		Sleep(2000);
	}
	else {
		printf("패스워드를 잘못입력하셨습니다\n");
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
	printf("아이디를 입력해주세요\n");
	Sleep(1000);
	printf("아이디:");
	scanf("%s",id);
	strcat(directory, id);
	strcat(directory, "_pw.txt");
	system("cls");

	if (!overlap_check(directory)) {
		printf("아이디가 존재하지 않습니다\n다시입력해주세요");
		Sleep(1000);
		system("cls");
		reset(directory);
		goto zz;
	}
	reset(directory);

	tt:
	printf("전화번호를 입력해주세요\n전화번호:");
	scanf("%s",call_num);
	strcat(directory, call_num);
	strcat(directory, ".txt");

	if (!overlap_check(directory)) {
		printf("전화번호가 없습니다\n다시 입력해주세요");
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
		printf("당신의 비밀번호는 %s 입니다\n",pw);
		Sleep(2000);
	}
}

int main() {
	system("title 아이디 혹은 패스워드 찾기");
	aa:
	printf("아이디를 찾으실거면 ID 비밀번호를 찾으실거면 PW라고 입력해주세요\n");
	scanf("%s", input);
	system("cls");
	if (!strcmp(input, "ID")) {
		find_id();
	}
	else if (!strcmp(input, "PW")) {
		find_pw();
	}
	else {
		printf("다시 입력해주세요\n");
		system("cls");
		goto aa;
	}
}*/