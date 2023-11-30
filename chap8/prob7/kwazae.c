#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
int main(int argc, char *argv[])
{
   char **ptr;
   extern char **environ;

    for (ptr = environ; *ptr != 0; ptr++)
        printf("%s \n", *ptr);
   
    exit(0);

    printf("나의 실제 사용자 ID : %d(%s) \n", getuid(), getpwuid(getuid())->pw_name);
    printf("나의 유효 사용자 ID : %d(%s) \n", geteuid(), getpwuid(geteuid())->pw_name);
    printf("나의 실제 그룹 ID : %d(%s) \n", getgid(), getgrgid(getgid())->gr_name);
    printf("나의 유효 그룹 ID : %d(%s) \n", getegid(), getgrgid(getegid())->gr_name);

    printf("나의 프로세스 번호 : [%d] \n", getpid());
    printf("내 부모 프로세스 번호 : [%d] \n", getppid());
}


