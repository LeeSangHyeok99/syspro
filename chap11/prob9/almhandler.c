#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
void alarmHandler();

int main( )
{
   int a = 1;
   unsigned int alarm(unsigned int sec);
   signal(SIGALRM, alarmHandler);
   alarm(5);
   while (1) {
      sleep(1);
      printf("%d second \n", a++);
   }
   printf("실행되지 않음 \n");
}
void alarmHandler(int signo)
{
   printf("wake up\n");
   exit(0);
}
