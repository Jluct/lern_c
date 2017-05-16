#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv[]) {
//  printf("\033[31mThis is red.\033[0m\n");
//    printf("Open file\n");

    FILE *f = fopen("D:\\CLion\\Project1\\TextFile.txt", "r");
    unsigned int N = 10, delta=10, i = 0;
    char* buf = (char*) malloc (sizeof(char)*N);
    while ((buf [i] = fgetc(f)) != EOF  )  {
        if (++i >= N) {
            N += delta;
            buf = (char*) realloc (buf, sizeof(char)*N);
        }
    }
    fclose(f);
    buf[i] = '\0';
    puts (buf);
    free (buf);
    getchar();
    return 0;

}