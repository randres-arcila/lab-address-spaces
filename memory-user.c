#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  
    clock_t start_t;
    start_t = clock();
    
    int t = atoi(argv[1]);
    int s = t*1e6;
    char *p = malloc(s);

    
    printf("test %d\n",atoi(argv[1]));

    pid_t pid = getpid();
    printf("pid: %d\n", pid);

    while((clock()-start_t)/CLOCKS_PER_SEC < atoi(argv[2]))
    {
        for(int i = 0; i < s; i++)
        {
        *(p+i) = 255;
        }         
    }    
    return 0;
}
