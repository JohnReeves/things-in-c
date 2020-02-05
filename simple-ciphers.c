#include <stdio.h>
#include <string.h>

char cyphertext[]="GXXGS EZJIJ TEBCE HGJUB ZRBDE ZGYED AKJJE HRKCU IIRTE DKXED NBHJK EIDGP JTEJE ZJTIJ GZDAP NBHNK HJTEH UZIJH KRJUB ZIJTE PMUXX NBXXB MJTEM EGCBZ MUXXA EDEXU LEHED BZJTE EUSTJ TGZDJ TEJGH SEJMU XXAEU DEZJU NUEDU ZJTEE YGUXP BKMUX XHERE ULEBZ JTEZU ZJTJT ESBIU SZGXM UXXAE IEZJB ZJTEY BHZUZ SBNJT EJEZJ T";

//"WKH HDVLHVW PHWKRG RI HQFLSKHULQJ D WHAW PHVVDJH LV WR UHSODFH HDFK FKDUDFWHU EB DQRWKHU XVLQJ D ILAHG UXOH, VR IRU HADPSOH HYHUB OHWWHU D PDB EH UHSODFHG EB G, DQG HYHUB OHWWHU E EB WKH OHWWHU H DQG VR RQ.";
char alphabet[]="abcdefghijklmnopqrstuvwxyz";

// affine letter shift = (a*x + b) % 26
// thus the caesar letter shift = (1*x + a) % 26
int shift = 23; 

int a = 5;
int b = 3;

int main(void) 
{
    int i;
    char * name = "Your Name\0";

    printf("Hello %s, ", name);

    // removing spaces, printing forward
    for (i = 0; i < strlen(name); i++) {
      if (name[i] != ' ') printf("%c", name[i]);
    }
    printf(" or ");

    // keeping spaces, printing backwards
    for (i = strlen(name); i >= 0; i--) {
      printf("%c", name[i]);
    }
     printf("\n");

  printf("\nThe cypher challenge text is :\n");
  for (i = 0; i < strlen(cyphertext); i++){
    if (i%30 == 0) printf("\n");
    printf("%c", cyphertext[i]);
  }

    printf("\n\n");
    // printf("[We think we know: \"WKH\" is \"the\"]\n");
    // printf("[We are trying . : \"D\" as \"a\" and \"V\" as \"s\"]\n");
    printf("[We think we know: \"JTE\" is \"the\"]\n");
    printf("[We are trying . : \"D\" as \"a\" and \"V\" as \"s\"]\n");

    printf("\nAaand, translated the text is :\n");
    for (i=0; i<strlen(cyphertext); i++){
      // formatting
      //if (i%30 == 0) printf("\n");

      // translated letters
      // if (cyphertext[i] == 'W') printf("t"); else
      // if (cyphertext[i] == 'K') printf("h"); else
      // if (cyphertext[i] == 'H') printf("e"); else
      if (cyphertext[i] == 'J') printf("t"); else
      if (cyphertext[i] == 'T') printf("h"); else
      if (cyphertext[i] == 'E') printf("e"); else

      // trying these ones
      // if (cyphertext[i] == 'D') printf("a"); else
      // if (cyphertext[i] == 'V') printf("s"); else
      if (cyphertext[i] == 'Z') printf("n"); else
      if (cyphertext[i] == 'K') printf("u"); else
      if (cyphertext[i] == 'H') printf("r"); else
      if (cyphertext[i] == 'C') printf("p"); else
      if (cyphertext[i] == 'I') printf("s"); else
      if (cyphertext[i] == 'D') printf("d"); else
      if (cyphertext[i] == 'G') printf("a"); else
      if (cyphertext[i] == 'P') printf("y"); else
      if (cyphertext[i] == ' ') printf(""); else
       


      // display the letter we don't know yet
      printf("%c", cyphertext[i]);
    }
    printf("\n");

    printf("\nAlphabet with a Caesar shift\n");
    for (i = 0; i < strlen(alphabet); i++) {
      printf("%c", alphabet[i]);
      printf(" -> %c, ",alphabet[((i + shift) % 26)]);
    }
    printf("\n");

    printf("\nAlphabet with an affine shift\n");
    for (i = 0; i < strlen(alphabet); i++) {
      printf("%c", alphabet[i]);
      printf(" -> %c, ",alphabet[((a*i + b) % 26)]);
    }
    printf("\n");

    return 0;
} 

