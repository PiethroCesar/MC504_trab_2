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
    printf("  _____          _____          _____          ________             _____           \n");                      
    printf("  //_+\\         %% '-' %%        J O-O L           | `-` |           | *-* |       \n");             
    printf("  /[\\]\\          /[U]\\         --[:]--            /[Y]\\           /[__I__]\\   \n");                         
    printf(" _/  |_          _I |_          _\\ /_             _| |_           _|     \\_       \n");                       
}

void pessoa_1(){
    printf("  _____  \n");
    printf("  //_+\\ \n");
    printf("  /[\\]\\\n");
    printf(" _/  |_  \n");
}

void pessoa_2(){
    printf("                 _____     \n");
    printf("                %% '-' %%  \n");
    printf("                 /[U]\\    \n");
    printf("                 _I |_     \n");
}

void pessoa_3(){
    printf("                                _____     \n");
    printf("                               J O-O L    \n");
    printf("                               --[:]--    \n");
    printf("                                _\\ /_    \n");
}

void pessoa_4(){
    printf("                                               ________   \n");
    printf("                                                 | `-` |  \n");
    printf("                                                  /[Y]\\  \n");
    printf("                                                  _| |_   \n");
}

void pessoa_5(){
    printf("                                                                    _____\n");          
    printf("                                                                   | *-* |\n");      
    printf("                                                                  /[__I__]\\\n");  
    printf("                                                                  _|     \\_\n");      
}

void pessoa_1_2(){
    printf("  _____          _____     \n");
    printf("  //_+\\         %% '-' %%  \n");
    printf("  /[\\]\\          /[U]\\    \n");
    printf(" _/  |_          _I |_     \n");
}

void pessoa_1_3(){
    printf("  _____                         _____     \n");
    printf("  //_+\\                        J O-O L \n");
    printf("  /[\\]\\                        --[:]-- \n");
    printf(" _/  |_                         _\\ /_    \n");
}

void pessoa_1_4(){
    printf("  _____                                        ________     \n");
    printf("  //_+\\                                          | `-` | \n");
    printf("  /[\\]\\                                           /[Y]\\ \n");
    printf(" _/  |_                                           _| |_    \n");
}


void pessoa_1_5(){
    printf("  _____                                                             _____\n");                      
    printf("  //_+\\                                                            | *-* |\n");             
    printf("  /[\\]\\                                                           /[__I__]\\\n");                         
    printf(" _/  |_                                                            _|     \\_\n");                       
}

void pessoa_2_3(){
    printf("                 _____          _____     \n");                      
    printf("                %% '-' %%        J O-O L \n");             
    printf("                 /[U]\\         --[:]-- \n");                         
    printf("                 _I |_          _\\ /_    \n");                       
}

void pessoa_2_4(){
    printf("                 _____                         ________            \n");                      
    printf("                %% '-' %%                          | `-` |        \n");             
    printf("                 /[U]\\                            /[Y]\\        \n");                         
    printf("                 _I |_                            _| |_           \n");                       
}


void pessoa_2_5(){
    printf("                 _____                                              _____           \n");
    printf("                %% '-' %%                                            | *-* |       \n");
    printf("                 /[U]\\                                            /[__I__]\\   \n");
    printf("                 _I |_                                            _|     \\_       \n");
}

void pessoa_3_4(){
    printf("                                _____          ________         \n");                      
    printf("                               J O-O L           | `-` |  \n");             
    printf("                               --[:]--            /[Y]\\ \n");                         
    printf("                                _\\ /_             _| |_ \n");                       
}

void pessoa_3_5(){
    printf("                                _____                               _____           \n");                      
    printf("                               J O-O L                             | *-* |      \n");             
    printf("                               --[:]--                            /[__I__]\\  \n");                         
    printf("                                _\\ /_                             _|     \\_      \n");                       
}

void pessoa_4_5(){
    printf("                                               ________             _____           \n");                      
    printf("                                                 | `-` |           | *-* |      \n");             
    printf("                                                  /[Y]\\           /[__I__]\\  \n");                         
    printf("                                                  _| |_           _|     \\_      \n");                       
}

void pessoa_1_2_3(){
    printf("  _____          _____          _____   \n");
    printf("  //_+\\         %% '-' %%        J O-O L \n");
    printf("  /[\\]\\          /[U]\\         --[:]-- \n");
    printf(" _/  |_          _I |_          _\\ /_    \n");
}

void pessoa_1_2_4(){
    printf("  _____          _____                         ________                   \n");
    printf("  //_+\\         %% '-' %%                          | `-` |                  \n");
    printf("  /[\\]\\          /[U]\\                            /[Y]\\               \n");
    printf(" _/  |_          _I |_                            _| |_                \n");
}

void pessoa_1_2_5(){
    printf("  _____          _____                                              _____                    \n");
    printf("  //_+\\         %% '-' %%                                            | *-* |                  \n");
    printf("  /[\\]\\          /[U]\\                                            /[__I__]\\               \n");
    printf(" _/  |_          _I |_                                            _|     \\_                 \n");
}

void pessoa_1_3_4(){
    printf("  _____                         _____          ________                   \n");
    printf("  //_+\\                        J O-O L           | `-` |                  \n");
    printf("  /[\\]\\                        --[:]--            /[Y]\\               \n");
    printf(" _/  |_                         _\\ /_             _| |_                \n");
}

void pessoa_1_3_5(){
    printf("  _____                         _____                               _____                    \n");
    printf("  //_+\\                        J O-O L                             | *-* |                  \n");
    printf("  /[\\]\\                        --[:]--                            /[__I__]\\               \n");
    printf(" _/  |_                         _\\ /_                             _|     \\_               \n");
}

void pessoa_1_4_5(){
    printf("  _____                                        ________             _____                    \n");
    printf("  //_+\\                                          | `-` |           | *-* |                  \n");
    printf("  /[\\]\\                                           /[Y]\\           /[__I__]\\               \n");
    printf(" _/  |_                                           _| |_           _|     \\_               \n");
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
    pessoas();
    pessoa_1_4_5();

    return 0;
}