#include<stdio.h>
#include<windows.h>
#include<string.h>
typedef struct User {
    char id[100];
    char pw[100];
}User;//���������� �ӽ÷� ������ ����ü

int overlap_check(const char* fname) {
    FILE* file;
    if ((file = fopen(fname, "r")))//������ �б� ���·� �������� ������ ������ ������ �����Ѵٴ� �ǹ̰� �ȴ�
    {
        fclose(file);
        return 1;
    }
    return 0;
}//������ �����ϴ��� üũ���ִ� �Լ�,1�� ��ȯ�ϸ� ������ �����Ѵٴ� �ǹ�

int main() {
    system("title login");

    system("cd C:\\Users\\user\\Downloads\\");
    system("move C:\\Users\\user\\Downloads\\input.txt C:\\Users\\user\\Desktop\\Li");
    system("cls");//������ ������� ���� ������ �� ��η� �����´�

    User user;
    FILE* fp;
    char b[1000] = "C:\\Users\\user\\Desktop\\Li\\", c[1000] = { 0 };

    fp = fopen("C:\\Users\\user\\Desktop\\Li\\input.txt", "r");
    fgets(user.id,sizeof(user.id),fp);
    fgets(user.pw, sizeof(user.pw), fp);
    //������ �Է¹��� ���Ͽ��� ���̵�� �н���������

    user.id[strlen(user.id)-1]=0;

    strcat(b, user.id);
    strcat(b, "_pw.txt");
    if (!overlap_check(b)) {
        printf("���� ���̵� �Դϴ�\n�ٽ��Է����ּ���\n");
        fp = fopen("C:\\Users\\user\\Desktop\\Li\\cer.txt", "w");
        fprintf(fp, "%d", 0);
        fclose(fp);
        Sleep(2000);
        return 0;
    }//�Է��� ���̵� �����ϴ��� �Ǻ�
    fclose(fp);

    for (int i = 0; i < 1000; i++)b[i] = 0;//b�ʱ�ȭ
    strcat(b, "C:\\Users\\user\\Desktop\\\Li\\");//b�� ������ ����� ��η� �ٲ�

    strcat(b, user.id);
    strcat(b, "_pw.txt");
    fp = fopen(b, "r");
    fscanf(fp, "%s", c);
    fclose(fp);//���̵��� �н����带 ������

    if (!strcmp(c, user.pw)) {
        printf("�α��� ����~!\n");
        fp = fopen("C:\\Users\\user\\Desktop\\Li\\cer.txt","w");
        fprintf(fp,"%d",1);
        fclose(fp);

        fp = fopen("C:\\Users\\user\\Desktop\\Li\\infor.txt", "w");
        fprintf(fp,"%s",user.id);
        fclose(fp);
        Sleep(4000);
    }//������ �н������ �Է¹��� �н����带 ���ؼ� ������ �α��� ������ ���

    else {
        printf("�߸��� �н����� �Դϴ�\n�ٽ� �Է����ּ���\n");
        fp = fopen("C:\\Users\\user\\Desktop\\Li\\cer.txt", "w");
        fprintf(fp, "%d", 0);
        fclose(fp);
        Sleep(2000);
    }//�ٸ��� �߸��� �н��������� �˷��ְ� �ٽ� �Է��϶�� �ϰ� �н����� �Է¹޴� �κ����� ���ư�
}