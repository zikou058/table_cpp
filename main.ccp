#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(){
    int PID, valeur_fork, status;

    valeur_fork=fork();
    switch(valeur_fork){
        case -1 : exit(2);
        case 0:
            printf("Fils : Processus avec PID %d \n", getpid());
            sleep (100);
            printf("Fils : Processus dont le PID %d est terminé\n", getpid());
            exit(10);
        default :
            printf("Père : Processus dont le PID %d\n",getpid());
            PID=wait(&status);
            printf("Père : fin du wait \n");
            printf("Père : Processus fils dont le PID = %d est terminé \n", PID);
            printf("Père : Processus père terminé \n\n");
            exit(0);
    }
    return 0; 
}
