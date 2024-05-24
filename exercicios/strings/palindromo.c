#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[50];

    int comp_palavra=0, c=0, n=0, i=0, j=0;

    //scanf("%s", palavra);

    fgets(palavra, 50, stdin);

    comp_palavra = strlen(palavra) - 1;


    //Tirar espaços
    while(i < comp_palavra){
        if(palavra[i] == ' '){
            for(int j = i; j < comp_palavra; j++){
                palavra[j] = palavra[j + 1];
            }
        }
        ++i;
    }

    printf("\n\n%s", palavra);

    /*for(int i = 0; i < comp_palavra; i++){
        if(palavra[i] ==  palavra[comp_palavra - (i + 1) ]){
            ++c;
        }

    }*/



    if(c == comp_palavra){
        printf("E um palindromo!");
    }else{
        printf("Nao e um palindromo!");
    }


    return 0;
}
