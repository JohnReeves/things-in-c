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
    char * answer;
    char name[10];
    int score = 0;
    int out_of = sizeof(quizz)/sizeof(quizz[0]);

    printf("type in your name: ");
    fgets(name,10,stdin);
    printf("hello %s\n", name);

    for (int i = 0; i < out_of; i++){
        printf("What is the capital of %s?\n >>", quizz[i].q);
        fgets(answer,10,stdin);
        printf("%s \n", answer);
        if (answer == quizz[i].a){
            printf("that's correct!\n");
            score++;
        } else {
            printf("that's wrong!\n");
        }
   }

   printf("You scored: %d out of %d", score, out_of);
   return 0;
}
