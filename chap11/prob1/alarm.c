#include <stdio.h>
#include <unistd.h>
unsigned int alarm(unsigned int sec);
int main( )
{
   
   alarm(5);
   printf("Loop start \n");
   while (1) {
      sleep(1);
      printf("1 second \n");
   }
   printf("Alarm clock \n");
}
