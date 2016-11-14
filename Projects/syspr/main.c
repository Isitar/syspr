#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>


#define MAXFILESIZE 1024
void pipeTest()
{
    
    union wait Reader;
    int pipeRef[2];
    int retVal;
    retVal = pipe(pipeRef);
    if (retVal == -1) perror("error on pipeing");
    //if (fork() == 0)
    //{
        // reader child
        //printf("in child1");
        char *content;
        FILE *file;
        file = fopen("/tmp/testForC", "r");
        char *c;
        fscanf(file,c);
        //if (file) {
        //    while ((c = getc(file)) != EOF)
         //   {
             printf("sending: %s\n", &c);
                write(pipeRef[1], &c, MAXFILESIZE);
         //   }
          //  fclose(file);
        //}
        
        
        //write(pipeRef[1], "swag", /*content,*/ MAXFILESIZE);
        
       // exit(0);
    //}
//    else
    {
        
        wait(&Reader);
        close(pipeRef[1]);
        //if (fork() == 0)
        //{
            char fileContent[MAXFILESIZE];
            // writer child
            read(pipeRef[0], fileContent, sizeof(fileContent));
            printf("pipe content: %s", fileContent);
        //}
    }
        wait(&Reader);
        
    
}

int main(int argc, char **argv)
{
    
    pipeTest();
    getchar();
    exit(0);
    union wait Status;
    
    int x = 3;
    int newPID = fork();
        if (newPID == 0)
        {
            // I'm the child
            printf("I'm the child\n");
            printf("Child: %d\n",x);
            x+= 10;
            printf("Child: %d\n",x);
            execl("/bin/date", "/bin/date", (char*)0);
            printf("do I still exist?\n");
            
            printf("%d\n",x);
            exit(0);
        }
        else
        {
            //wait(&Status);
            printf("Parent %d\n",x);
            printf("I'm the parent");
            
        }
            getchar();
        
}
