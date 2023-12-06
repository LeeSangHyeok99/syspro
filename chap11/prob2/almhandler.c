#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
void alarmHandler();

int main( )
{
   unsigned int alarm(unsigned int sec);
   signal(SIGALRM, alarmHandler);
   alarm(5);
   printf("무한 루프 \n");
   while (1) {
      sleep(1);
      printf("1초 경과 \n");
   }
   printf("실행되지 않음 \n");
}
void alarmHandler(int signo)
{
   printf("일어나세요\n");
   exit(0);
}
