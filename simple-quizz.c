// Type your code here, or load an example.
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

    for (int i = 0; i < 5; i++){
        printf("%s %s\n",quizz[i].q,quizz[i].a);

   }
}
