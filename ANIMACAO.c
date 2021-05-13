#include <stdio.h>
#include <stdlib.h>






void dois_anjos(){
    printf("        -=-                 -=-\n");
    printf("     (\\  _  /)           (\\  _  /)\n");
    printf("     ( \\( )/ )           ( \\( )/ )\n");
    printf("     (       )           (       )\n");
    printf("      '>   <'             '>   <'\n");
    printf("      /     \\             /     \\\n");
    printf("      '-._.-'             '-._.-'\n");

}

void porta_aberta(){
    printf("_______               ______________________________\n");
    printf("      /\n");
    printf("     /\n");
    printf("    /\n");
}

void pula_linhas(int n){
    for(int i=0; i<n; i++){
        printf("\n");
    }
}

void livro(){
    printf("              ______ ______\n");
    printf("            _/      Y      \\_\n");
    printf("           // ~~ ~~ | ~~ ~  \\\\\n");
    printf("          // ~ ~ ~~ | ~~~ ~~ \\\\\n");
    printf("         //________.|.________\\\\\n");
    printf("        '----------'-'----------'\n");
}

void pessoas(){
    printf("  _____          _____          _____          ________             _____\n");
    printf("  //_+\\         %% '-' %%        J O-O L           | `-` |           | *-* |\n");
    printf("  /[\\]\\          /[U]\\         --[:]--            /[Y]\\          / [__I__] \\\n");
    printf(" _/  |_          _I |_          _\\ /_             _| |_           _|     \\_\n");
}

int main(){
    printf("Cena 0 - Ninguem no livro \n\n\n\n");

    dois_anjos();
    porta_aberta();
    pula_linhas(3);
    livro();
    pula_linhas(5);
    porta_aberta();
    pula_linhas(3);
    pessoas();


    return 0;
}