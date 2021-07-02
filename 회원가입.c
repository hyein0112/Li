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
	char s[100];//성별
}User;//사용자의 정보를 임시로 저장하는 구조체

int overlap_check(const char *fname){
	FILE *file;
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

int main() {
  system("title register");
	FILE* fp;
	User user;
	char b[1000] = "C:\\Users\\user\\Desktop\\Li\\";
  qq:
	printf("아이디:");
	scanf("%s", user.id);
	//아이디를 입력받아 저장

  strcat(b,user.id);
  strcat(b,"_pw.txt");
  if(overlap_check(b)){
	printf("중복되는 아이디가 존재합니다\n다시입력해주세요\n");
	reset(b);//b를 기본경로로 리셋
	Sleep(2000);
	system("cls");
	goto qq;
  }//중복되는 아이디가 있는지 확인

  reset(b);//b를 기본경로로 리셋

	printf("패스워드:");
	scanf("%s", user.pw);
	//패스워드 입력받고 구조체에 저장

  printf("이름:");
  scanf("%s", user.name);
	//이름을 입력받고 구조체에 저장

	printf("나이:");
	scanf("%d", &user.old);
	//나이 입력받고 구조체에 저장

	printf("성별:");
	scanf("%s",user.s);
	//성별을 입력받고 구조체에 저장

  zz:
  printf("전화번호:");
  scanf("%s",user.call_num);
  //전화번호를 입력받고 구조체에 저장
  strcat(b, user.call_num);
  strcat(b,".txt");
  if(overlap_check(b)){
	printf("중복되는 전화번호가 존재합니다\n다시입력해주세요\n");
	reset(b);//b를 기본경로로 리셋
	Sleep(2000);
	system("cls");
	printf("아이디:%s\n패스워드:%s\n이름:%s\n나이:%d\n성별:%s\n",user.id,user.pw,user.name,user.old,user.s);
	goto zz;
  }

  reset(b);

  strcat(b, user.id);
	strcat(b, "_pw.txt");
	fp = fopen(b, "w");
	fputs(user.pw, fp);
	fclose(fp);
	reset(b);//b를 기본경로로 리셋
	//입력받은 패스워드를 파일형태로 저장

  strcat(b, user.id);
	strcat(b, "_name.txt");
	fp = fopen(b, "w");
	fputs(user.name, fp);
	fclose(fp);
	reset(b);//b를 기본경로로 리셋
	//입력받은 이름을 파일형태로 저장

  strcat(b, user.id);
	strcat(b, "_old.txt");
	fp = fopen(b, "w");
	fprintf(fp, "%d", user.old);
	fclose(fp);
	reset(b);//b를 기본경로로 리셋
	//입력받은 나이를 파일형태로 저장

  strcat(b, user.id);
	strcat(b, "_s.txt");
	fp = fopen(b, "w");
	fprintf(fp, "%s", user.s);
	fclose(fp);
	reset(b);//b를 기본경로로 리셋
	//입력받은 성별을 파일형태로 저장

  strcat(b, user.call_num);
	strcat(b, ".txt");
	fp = fopen(b, "w");
	fprintf(fp, "%s", user.id);
	fclose(fp);
	reset(b);//b를 기본경로로 리셋
	//입력받은 전화번호를 파일형태로 저장

	strcat(b, user.id);
	strcat(b, "_bestscore.txt");
	fp = fopen(b, "w");
	fprintf(fp, "%d", 0);
	fclose(fp);
	reset(b);//b를 기본경로로 리셋
}*/