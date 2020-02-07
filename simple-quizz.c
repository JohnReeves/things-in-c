#include <stdio.h>

typedef struct {
char * q;
char * a;
} question;

question quizz[5] = {\
{"england", "london"},
{"france", "paris"},
{"germany", "berlin"},
{"spain", "madrid"},
{"norway", "oslo"}\
};

int main(){
    printf("hello\n");
    char * answer;

    for (int i = 0; i < 5; i++){
        printf("What is the capital of %s ?\n >>", quizz[i].q);
        fgets(answer,10,stdin);
        printf("%s \n", answer);
        if (answer == quizz[i].a){
            printf("that's correct!\n");
        } else {
            printf("that's wrong!\n");
        }
   }
}
