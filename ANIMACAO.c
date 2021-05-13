#include <stdio.h>
#include <stdlib.h>


void anjo_direita(){
    printf("                            -=-\n");
    printf("                         (\\  _  /)\n");
    printf("                         ( \\( )/ )\n");
    printf("                         (       )\n");
    printf("                          '>   <'\n");
    printf("                          /     \\\n");
    printf("                          '-._.-'\n");

}

void anjo_esquerda(){
    printf("        -=-     \n");
    printf("     (\\  _  /) \n");
    printf("     ( \\( )/ ) \n");
    printf("     (       )  \n");
    printf("      '>   <'   \n");
    printf("      /     \\  \n");
    printf("      '-._.-'   \n");
}

void anjo_centralizado(){
    printf("                   -=-     \n");
    printf("                (\\  _  /) \n");
    printf("                ( \\( )/ ) \n");
    printf("                (       )  \n");
    printf("                 '>   <'   \n");
    printf("                 /     \\  \n");
    printf("                 '-._.-'   \n");
}

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

void porta_fechada(){
    printf("____________________________________________________\n");
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

void frame_0(){
    printf("Cena 0 - Ninguem no livro");
    pula_linhas(4);
    dois_anjos();
    porta_aberta();
    pula_linhas(7);
    livro();
    pula_linhas(5);
    porta_aberta();
    pula_linhas(3);
    pessoas();
}

void frame_1(){
    printf("Cena 0 - Ninguem no livro");
    pula_linhas(4);
    anjo_direita();
    porta_fechada();
    anjo_centralizado(7);
    livro();
    pula_linhas(5);
    porta_fechada();
    pula_linhas(3);
    pessoas();
}

void frame_2(){
    printf("Cena 0 - Ninguem no livro");
    pula_linhas(4);
    anjo_esquerda();
    porta_fechada();
    anjo_centralizado(7);
    livro();
    pula_linhas(5);
    porta_fechada();
    pula_linhas(3);
    pessoas();
}

int main(){
    frame_0();
    frame_1();
    frame_2();


    return 0;
}