#include<stdio.h>
#include<windows.h>
#include<string.h>
typedef struct User {
    char id[100];
    char pw[100];
}User;//유저정보를 임시로 저장할 구조체

int overlap_check(const char* fname) {
    FILE* file;
    if ((file = fopen(fname, "r")))//파일을 읽기 형태로 열었을때 파일이 열리면 파일이 존재한다는 의미가 된다
    {
        fclose(file);
        return 1;
    }
    return 0;
}//파일이 존재하는지 체크해주는 함수,1을 반환하면 파일이 존재한다는 의미

int main() {
    system("title login");

    system("cd C:\\Users\\user\\Downloads\\");
    system("move C:\\Users\\user\\Downloads\\input.txt C:\\Users\\user\\Desktop\\Li");
    system("cls");//웹에서 만들어준 유저 정보를 웹 경로로 가져온다

    User user;
    FILE* fp;
    char b[1000] = "C:\\Users\\user\\Desktop\\Li\\", c[1000] = { 0 };

    fp = fopen("C:\\Users\\user\\Desktop\\Li\\input.txt", "r");
    fgets(user.id,sizeof(user.id),fp);
    fgets(user.pw, sizeof(user.pw), fp);
    //웹에서 입력받은 파일에서 아이디와 패스워드추출

    user.id[strlen(user.id)-1]=0;

    strcat(b, user.id);
    strcat(b, "_pw.txt");
    if (!overlap_check(b)) {
        printf("없는 아이디 입니다\n다시입력해주세요\n");
        fp = fopen("C:\\Users\\user\\Desktop\\Li\\cer.txt", "w");
        fprintf(fp, "%d", 0);
        fclose(fp);
        Sleep(2000);
        return 0;
    }//입력한 아이디가 존재하는지 판별
    fclose(fp);

    for (int i = 0; i < 1000; i++)b[i] = 0;//b초기화
    strcat(b, "C:\\Users\\user\\Desktop\\\Li\\");//b를 정보가 저장된 경로로 바꿈

    strcat(b, user.id);
    strcat(b, "_pw.txt");
    fp = fopen(b, "r");
    fscanf(fp, "%s", c);
    fclose(fp);//아이디의 패스워드를 가져옴

    if (!strcmp(c, user.pw)) {
        printf("로그인 성공~!\n");
        fp = fopen("C:\\Users\\user\\Desktop\\Li\\cer.txt","w");
        fprintf(fp,"%d",1);
        fclose(fp);

        fp = fopen("C:\\Users\\user\\Desktop\\Li\\infor.txt", "w");
        fprintf(fp,"%s",user.id);
        fclose(fp);
        Sleep(4000);
    }//가져온 패스워드와 입력받은 패스워드를 비교해서 같으면 로그인 성공을 출력

    else {
        printf("잘못된 패스워드 입니다\n다시 입력해주세요\n");
        fp = fopen("C:\\Users\\user\\Desktop\\Li\\cer.txt", "w");
        fprintf(fp, "%d", 0);
        fclose(fp);
        Sleep(2000);
    }//다를땐 잘못된 패스워드임을 알려주고 다시 입력하라고 하고 패스워드 입력받는 부분으로 돌아감
}