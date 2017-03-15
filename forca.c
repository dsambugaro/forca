#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void preencheVetor(char v[], int tam, char c){
     int i;
     for ( i = 0; i < tam; i++) {
          v[i] = c;
     }
}

void imprimeLetras(char v[], int t){
     int i;
     for (i = 0; i < t; i++) {
         printf("%c ", v[i]);
     }
}

int definePalavra(int N){
    int palavraSelecionada;
    srand(time(NULL));
    palavraSelecionada = 2+ (rand() % N);
    return palavraSelecionada;

}

void pegaPalavras(FILE *arquivo, int lin, char p[], int max){
    int i;
    int palavraSelecionada;

    palavraSelecionada = definePalavra(lin);
    for ( i = 0; i < lin; i++) {
        fgets(p, max, arquivo);
        if (i == palavraSelecionada) {
            break;
        }
    }
}

void imprimeCaveira(){
    printf("\t█████████████████████████████████\n");    //  ███████████████████████████
    printf("\t███████▀░░░░░░░░░░░░░░░░░▀███████\n");    //  ████▀░░░░░░░░░░░░░░░░░▀████
    printf("\t██████│░░░░░░░░░░░░░░░░░░░│██████\n");    //  ███│░░░░░░░░░░░░░░░░░░░│███
    printf("\t█████▌│░░░░░░░░░░░░░░░░░░░│▐█████\n");    //  ██▌│░░░░░░░░░░░░░░░░░░░│▐██
    printf("\t█████░└┐░░░░░░░░░░░░░░░░░┌┘░█████\n");    //  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██
    printf("\t█████░░└┐░░░░░░░░░░░░░░░┌┘░░█████\n");    //  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██
    printf("\t█████░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░█████\n");    //  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██
    printf("\t█████▌░│██████▌░░░▐██████│░▐█████\n");    //  ██▌░│██████▌░░░▐██████│░▐██
    printf("\t██████░│▐███▀▀░░▄░░▀▀███▌│░██████\n");    //  ███░│▐███▀▀░░▄░░▀▀███▌│░███
    printf("\t█████▀─┘░░░░░░░▐█▌░░░░░░░└─▀█████\n");    //  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██
    printf("\t█████▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄█████\n");    //  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██
    printf("\t███████▄─┘██▌░░░░░░░▐██└─▄███████\n");    //  ████▄─┘██▌░░░░░░░▐██└─▄████
    printf("\t████████░░▐█─┬┬┬┬┬┬┬─█▌░░████████\n");    //  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████
    printf("\t███████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐███████\n");    //  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████
    printf("\t████████▄░░░└┴┴┴┴┴┴┴┘░░░▄████████\n");    //  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████
    printf("\t██████████▄░░░░░░░░░░░▄██████████\n");    //  ███████▄░░░░░░░░░░░▄███████
    printf("\t█████████████████████████████████\n");    //  ███████████████████████████
}

void imprimeTaca(){
    printf("\t░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");  // ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
    printf("\t░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");  // ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
    printf("\t░░░░░░█████████████████████░░░░░░\n");  // ░░░░░░█████████████████████░░░░░░
    printf("\t░░░░░░░██░░░░░░░░░░░░░░░██░░░░░░░\n");  // ░░░░░░░██               ██░░░░░░░
    printf("\t░░░░░░░░██░░░░░▀█░▀░░░░██░░░░░░░░\n");  // ░░░░░░░░██     ▀█ ▀    ██░░░░░░░░
    printf("\t░░░░░░░░░██░░░░░█░░░░░██░░░░░░░░░\n");  // ░░░░░░░░░██     █     ██░░░░░░░░░
    printf("\t░░░░░░░░░░██░░░▀▀▀░░░██░░░░░░░░░░\n");  // ░░░░░░░░░░██   ▀▀▀   ██░░░░░░░░░░
    printf("\t░░░░░░░░░░░██░░░░░░░██░░░░░░░░░░░\n");  // ░░░░░░░░░░░██       ██░░░░░░░░░░░
    printf("\t░░░░░░░░░░░░░███████░░░░░░░░░░░░░\n");  // ░░░░░░░░░░░░░███████░░░░░░░░░░░░░
    printf("\t░░░░░░░░░░░░░░░███░░░░░░░░░░░░░░░\n");  // ░░░░░░░░░░░░░░░███░░░░░░░░░░░░░░░
    printf("\t░░░░░░░░░░░░░░░███░░░░░░░░░░░░░░░\n");  // ░░░░░░░░░░░░░░░███░░░░░░░░░░░░░░░
    printf("\t░░░░░░░░░░░░░░█████░░░░░░░░░░░░░░\n");  // ░░░░░░░░░░░░░░█████░░░░░░░░░░░░░░
    printf("\t░░░░░░░░░░░░█████████░░░░░░░░░░░░\n");  // ░░░░░░░░░░░░█████████░░░░░░░░░░░░
    printf("\t░░░░░░░░░░█████████████░░░░░░░░░░\n");  // ░░░░░░░░░░█████████████░░░░░░░░░░
    printf("\t░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");  // ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
    printf("\t░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");  // ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
}

void fim(int V, int pontos, char palavra[]) {
    if (V == 1) {
        printf("\n\n");
        printf("\n\tPARABÉNS VOCÊ CONSEGUIU! ^^\n");
        printf("\tPontuação: %d", pontos);
        printf("\n\n");
    } else if (V == 0){

        printf("\n\n\tA palavra era: %s\n", palavra);
        imprimeCaveira();
        printf("\n\n");
        printf("\tVOCÊ PERDEU! u.u\n\n");
        printf("\tPontuação: %d", pontos);
    }
    printf("\n\n");
    exit(0);
}

int checaFim(int t, char forcaPal[]) {
    int i, checa = 0;
    for ( i = 0; forcaPal[i] != '\n'; i++) {
        if (forcaPal[i] != '_') {
            checa++;
        }
    }
    if (checa == t) {
        return 1;
    } else {
        return 0;
    }
}

void imprimeForca(int erros) {

    printf(" ________\n");
    printf("|"); printf("\t |\n");
    printf("|");

    if (erros >= 1) {
        printf("\t O\n");
    } else {
        printf("\n");
    }

    printf("|");

    if (erros >= 2) {
        printf("\t/");
    }
    if (erros >= 3) {
        printf("|");
    }
    if (erros >= 4) {
        printf("\\\n");
    } else {
        printf("\n");
    }

    printf("|");

    if (erros >= 5) {
        printf("\t/ ");
    }
    if (erros >= 6) {
        printf("\\\n");
    } else {
        printf("\n");
    }

    printf("|\n");
    printf("|\n");
}


void forcaFront(char forcaPal[], int pontos, int erros, char letrasUtilizadas[], int t) {
    printf("\n\n");
    printf("Letras já utilizadas: ");
    imprimeLetras(letrasUtilizadas, 26);
    printf("\nPontuação: %d\n", pontos);
    imprimeForca(erros);
    printf("\n\n\t\t");
    imprimeLetras(forcaPal, t);
    printf("\n\n");
    printf("Letra: ");
}

int errou(int erros){
    system("clear");
    printf("\nA palavra não contem esta letra.");
    printf("\nTente novamente.\n\n");
    erros++;
    return erros;
}

int verificaEntrada(char *letra, char letrasUtilizadas[], int vezes){
    int i;
    int verificaLetra = 0;

    if (((*letra >= 65) && (*letra <= 90)) || ((*letra >= 97) && (*letra <= 122))) {
        if (*letra >= 97) {
          *letra -= 32;
        }
        for (i = 0; i < 26; i++) {
            if (*letra == letrasUtilizadas[i]) {
                verificaLetra = 1;
                system("clear");
                printf("\n\nEsta letra já foi utilizada!\n\n");
                break;
            }
        }
        if (verificaLetra == 1) {
            return 0;
        } else{
            letrasUtilizadas[vezes] = *letra;
            return 1;
        }
    } else {
        system("clear");
        printf("\n\nEntre com uma letra válida!\n\n");
        return 0;
    }
}

void jogaForca(char palavra[], char forcaPal[], int t, int *p, int *e, char letrasUtilizadas[], int *v) {
    char letra;
    int i, checaFinal;
    int verifica = 0;
    int entrada = 0;
    int pontos;
    int erros;
    int vezes;
    pontos = *p;
    erros = *e;
    vezes = *v;

    forcaFront(forcaPal, pontos, erros, letrasUtilizadas, t);
    checaFinal = checaFim(t, forcaPal);

    if (checaFinal == 1) {
        fim(1, pontos, palavra);
    } else {
        if (erros == 6) {
        fim(0, pontos, palavra);
        } else {

            while (entrada == 0) {
                setbuf(stdin, NULL);
                scanf(" %c", &letra);
                entrada = verificaEntrada(&letra, letrasUtilizadas, vezes);
                vezes++;
                if (entrada == 0) {
                    vezes--;
                    forcaFront(forcaPal, pontos, erros, letrasUtilizadas, t);
                }
            }

            for ( i = 0; palavra[i] != '\n'; i++) {
                if (palavra[i] == letra) {
                    forcaPal[i] = letra;
                    verifica = 1;
                    pontos++;
                }
            }

            if (verifica == 0) {
                erros = errou(erros);
                if (pontos > 0) {
                    pontos--;
                }
            } else {
                system("clear");

            }

            jogaForca(palavra, forcaPal, t, &pontos, &erros, letrasUtilizadas, &vezes);
        }
    }
}

void forcaBack(char palavra[], char forcaPal[]){
    int i;
    for (i = 0; palavra[i] != '\n'; i++) {
        if (palavra[i] == ' ') {
            forcaPal[i] = ' ';
        } else {
            forcaPal[i] = '_';
        }
    }
    forcaPal[i] = '\n';
}

int contaLinhas(FILE *arquivo){
    int linhas = 0;
    char c;
    while (!feof(arquivo)) {
        c = fgetc(arquivo);
        if (c == '\n') {
            linhas++;
        }
    }
    return linhas;
}

FILE* abrirArquivo(){
    FILE* arquivo;
    arquivo=fopen("palavras.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!\n");
        exit(1);
    }
    return arquivo;
}

int contaLetrasPalavra(char aux[]){
    int i, letras = 0;
    for ( i = 0; aux[i] != '\n'; i++) {
        letras++;
    }
    return letras;
}

void passaPalavra(char palavra[], char aux[], int max){
    int i;
    for ( i = 0; i <= max ; i++) {
        palavra[i] = aux[i];
    }
}

int main(int argc, char const *argv[]) {
    int linhas;
    int maximoLetras;
    int pontos = 0, erros = 0, vezes = 0;
    char letrasUtilizadas[26];
    char aux[47];

    preencheVetor(letrasUtilizadas, 26, '_');

    FILE *palavrasArq;
    palavrasArq = abrirArquivo();

    linhas = contaLinhas(palavrasArq);
    fclose(palavrasArq);
    palavrasArq = abrirArquivo();

    pegaPalavras(palavrasArq, linhas, aux, 47);
    fclose(palavrasArq);

    maximoLetras = contaLetrasPalavra(aux);
    char *palavra;
    char *forcaPal;
    // char palavra[maximoLetras+1];
    palavra = (char*)calloc(maximoLetras, sizeof(char));
    forcaPal = (char*)calloc(maximoLetras, sizeof(char));
    passaPalavra(palavra, aux, maximoLetras);

    forcaBack(palavra, forcaPal);
    jogaForca(palavra, forcaPal, maximoLetras, &pontos, &erros, letrasUtilizadas, &vezes);

    return 0;
}
