#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char chaine[40];
    int i;

   printf("Entrer la  chaine: ");
    //scanf("%s",chaine);
    gets(chaine);

    for(i=0;chaine[i]!='\0';i++){
    chaine[i]=toupper(chaine[i]);
    }

    printf("la chaine en majuscule: %s",chaine);
    return 0;
}
