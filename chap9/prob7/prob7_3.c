#include <stdlib.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>

int system(const char *cmdstring);
pid_t wait(int *status);
pid_t waitpid(pid_t pid, int *statloc, int options);
int main()
{
    int status;
    if ((status = system("date")) < 0)
        perror("system() 오류");
    printf("종료코드 %d\n", WEXITSTATUS(status));

    if ((status = system("hello")) < 0)
        perror("system() 오류");
    printf("종료코드 %d\n", WEXITSTATUS(status));
	
    if ((status = system("who; exit 44")) < 0)
        perror("system() 오류");
    printf("종료코드 %d\n", WEXITSTATUS(status));
}

int mysystem (const char *cmdstring) {
    int pid, status;
    if (cmdstring == NULL) 
        return 1;
    pid = fork();
    if (pid == -1) 
        return -1;
    if (pid == 0) {
        execl("/bin/sh", "sh", "-c", cmdstring, (char *) 0);
        _exit(127);
    }
    do {
        if (waitpid(pid, &status, 0) == -1) {
	 if (errno != EINTR) 
	 return -1;
        } else return status;
     } while(1);
}
