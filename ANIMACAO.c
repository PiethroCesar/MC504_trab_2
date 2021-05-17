#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ANIMACAO.h"

void anjo_direita();
void anjo_esquerda();
void anjo_centralizado();
void dois_anjos();
void porta_aberta();
void porta_fechada();
void pula_linhas();
void livro();
void pessoa_1();
void pessoa_2();
void pessoa_3();
void pessoa_4();
void pessoa_5();
void pessoa_1_2();
void pessoa_1_2();
void pessoa_1_3();
void pessoa_1_4();
void pessoa_1_5();
void pessoa_2_3();
void pessoa_2_4();
void pessoa_2_5();
void pessoa_3_4();
void pessoa_3_5();
void pessoa_4_5();
void pessoa_1_2_3();void pessoa_1_2_4();void pessoa_1_2_5();void pessoa_1_3_4();
void pessoa_1_3_5();
void pessoa_1_4_5();
void pessoa_2_3_4();
void pessoa_2_3_5();
void pessoa_2_4_5();
void pessoa_3_4_5();
void pessoa_1_2_3_4();
void pessoa_1_2_3_5();
void pessoa_1_2_4_5();
void pessoa_1_3_4_5();
void pessoa_2_3_4_5();
void pessoas();
void frame_ninguem();
void frame_anjo_esq();
void frame_anjo_dir();
void frame_pessoa_1();
void frame_pessoa_2();
void frame_pessoa_3();
void frame_pessoa_4();
void frame_pessoa_5();
void frame_pessoa_1_2();
void frame_pessoa_1_3();
void frame_pessoa_1_4();
void frame_pessoa_1_5();
void frame_pessoa_2_3();
void frame_pessoa_2_4();
void frame_pessoa_2_5();
void frame_pessoa_3_4();
void frame_pessoa_3_5();
void frame_pessoa_4_5();
void frame_pessoa_1_2_3();
void frame_pessoa_1_2_4();
void frame_pessoa_1_2_5();
void frame_pessoa_1_3_4();
void frame_pessoa_1_3_5();
void frame_pessoa_1_4_5();
void frame_pessoa_2_3_4();
void frame_pessoa_2_3_5();
void frame_pessoa_2_4_5();
void frame_pessoa_3_4_5();
void frame_pessoa_1_2_3_4();
void frame_pessoa_1_2_3_5();
void frame_pessoa_1_2_4_5();
void frame_pessoa_1_3_4_5();
void frame_pessoa_2_3_4_5();
void frame_pessoa_1_2_3_4_5();
void frame_readers(int readers[5]);


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
    printf("_______               __________________________________________________________________________________________\n");
    printf("      /\n");
    printf("     /\n");
    printf("    /\n");
}

void porta_fechada(){
    printf("________________________________________________________________________________________________________________\n");
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

void pessoa_2_3_4(){
    printf("                 _____          _____          ________                         \n");
    printf("                %% '-' %%        J O-O L           | `-` |                       \n");
    printf("                 /[U]\\         --[:]--            /[Y]\\                       \n");
    printf("                 _I |_          _\\ /_             _| |_                       \n");
}

void pessoa_2_3_5(){
    printf("                 _____          _____                               _____                 \n");
    printf("                %% '-' %%        J O-O L                             | *-* |                  \n");
    printf("                 /[U]\\         --[:]--                            /[__I__]\\                \n");
    printf("                 _I |_          _\\ /_                             _|     \\_                \n");
}

void pessoa_2_4_5(){
    printf("                 _____                         ________             _____                 \n");
    printf("                %% '-' %%                          | `-` |           | *-* |                  \n");
    printf("                 /[U]\\                            /[Y]\\           /[__I__]\\                \n");
    printf("                 _I |_                            _| |_           _|     \\_                \n");
}

void pessoa_3_4_5(){
    printf("                                _____          ________             _____                 \n");
    printf("                               J O-O L           | `-` |           | *-* |                  \n");
    printf("                               --[:]--            /[Y]\\           /[__I__]\\                \n");
    printf("                                _\\ /_             _| |_           _|     \\_                \n");
}

void pessoa_1_2_3_4(){
    printf("  _____          _____          _____          ________                         \n");
    printf("  //_+\\         %% '-' %%        J O-O L           | `-` |                       \n");
    printf("  /[\\]\\          /[U]\\         --[:]--            /[Y]\\                       \n");
    printf(" _/  |_          _I |_          _\\ /_             _| |_                       \n");
}

void pessoa_1_2_3_5(){
    printf("  _____          _____          _____                               _____        \n");
    printf("  //_+\\         %% '-' %%        J O-O L                             | *-* |      \n");
    printf("  /[\\]\\          /[U]\\         --[:]--                            /[__I__]\\       \n");
    printf(" _/  |_          _I |_          _\\ /_                             _|     \\_      \n");
}

void pessoa_1_2_4_5(){
    printf("  _____          _____                         ________             _____        \n");
    printf("  //_+\\         %% '-' %%                          | `-` |           | *-* |      \n");
    printf("  /[\\]\\          /[U]\\                            /[Y]\\           /[__I__]\\       \n");
    printf(" _/  |_          _I |_                            _| |_           _|     \\_      \n");
}

void pessoa_1_3_4_5(){
    printf("  _____                         _____          ________             _____        \n");
    printf("  //_+\\                        J O-O L           | `-` |           | *-* |      \n");
    printf("  /[\\]\\                        --[:]--            /[Y]\\           /[__I__]\\       \n");
    printf(" _/  |_                         _\\ /_             _| |_           _|     \\_      \n");
}

void pessoa_2_3_4_5(){
    printf("                 _____          _____          ________             _____        \n");
    printf("                %% '-' %%        J O-O L           | `-` |           | *-* |      \n");
    printf("                 /[U]\\         --[:]--            /[Y]\\           /[__I__]\\       \n");
    printf("                 _I |_          _\\ /_             _| |_           _|     \\_      \n");
}

void pessoas(){
    printf("  _____          _____          _____          ________             _____           \n");                      
    printf("  //_+\\         %% '-' %%        J O-O L           | `-` |           | *-* |       \n");             
    printf("  /[\\]\\          /[U]\\         --[:]--            /[Y]\\           /[__I__]\\   \n");                         
    printf(" _/  |_          _I |_          _\\ /_             _| |_           _|     \\_       \n");                       
}

void frame_ninguem(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_aberta();
    pula_linhas(7);
    livro();
    pula_linhas(5);
    porta_aberta();
    pula_linhas(1);
    pessoas();
    pula_linhas(1);
}

void frame_anjo_esq(){
    
    pula_linhas(1);
    pula_linhas(2);
    anjo_direita();
    porta_fechada();
    anjo_centralizado();
    livro();
    pula_linhas(5);
    porta_fechada();
    pula_linhas(3);
    pessoas();
    pula_linhas(1);
}

void frame_anjo_dir(){
    
    pula_linhas(1);
    pula_linhas(2);
    anjo_esquerda();
    porta_fechada();
    anjo_centralizado();
    livro();
    pula_linhas(5);
    porta_fechada();
    pula_linhas(3);
    pessoas();
    pula_linhas(1);
}

void frame_pessoa_1(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_2_3_4_5();
    pula_linhas(1);
}

void frame_pessoa_2(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_2();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_3_4_5();
    pula_linhas(1);
}

void frame_pessoa_3(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_3();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_2_4_5();
    pula_linhas(1);
}

void frame_pessoa_4(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_4();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_2_3_5();
    pula_linhas(1);
}

void frame_pessoa_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_2_3_4();
    pula_linhas(1);
}

void frame_pessoa_1_2(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_2();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_3_4_5();
    pula_linhas(1);
}

void frame_pessoa_1_3(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_3();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_2_4_5();
    pula_linhas(1);
}

void frame_pessoa_1_4(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_4();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_2_3_5();
    pula_linhas(1);
}

void frame_pessoa_1_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_2_3_4();
    pula_linhas(1);
}

void frame_pessoa_2_3(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_2_3();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_4_5();
    pula_linhas(1);
}

void frame_pessoa_2_4(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_2_4();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_3_5();
    pula_linhas(1);
}

void frame_pessoa_2_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_2_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_3_4();
    pula_linhas(1);
}

void frame_pessoa_3_4(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_3_4();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_2_5();
    pula_linhas(1);
}

void frame_pessoa_3_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_3_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_2_4();
    pula_linhas(1);
}

void frame_pessoa_4_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_4_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_2_3();
    pula_linhas(1);
}

void frame_pessoa_1_2_3(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_2_3();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_4_5();
    pula_linhas(1);
}

void frame_pessoa_1_2_4(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_2_4();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_3_5();
    pula_linhas(1);
}

void frame_pessoa_1_2_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_2_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_3_4();
    pula_linhas(1);
}

void frame_pessoa_1_3_4(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_3_4();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_2_5();
    pula_linhas(1);
}

void frame_pessoa_1_3_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_3_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_2_4();
    pula_linhas(1);
}

void frame_pessoa_1_4_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_4_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_2_3();
    pula_linhas(1);
}

void frame_pessoa_2_3_4(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_2_3_4();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_5();
    pula_linhas(1);
}

void frame_pessoa_2_3_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_2_3_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_4();
    pula_linhas(1);
}

void frame_pessoa_2_4_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_2_4_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_3();
    pula_linhas(1);
}

void frame_pessoa_3_4_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_3_4_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1_2();
    pula_linhas(1);
}

void frame_pessoa_1_2_3_4(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_2_3_4();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_5();
    pula_linhas(1);
}

void frame_pessoa_1_2_3_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_2_3_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_4();
    pula_linhas(1);
}

void frame_pessoa_1_2_4_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_2_4_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_3();
    pula_linhas(1);
}

void frame_pessoa_1_3_4_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_1_3_4_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_2();
    pula_linhas(1);
}

void frame_pessoa_2_3_4_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoa_2_3_4_5();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pessoa_1();
    pula_linhas(1);
}

void frame_pessoa_1_2_3_4_5(){
    
    pula_linhas(1);
    pula_linhas(2);
    dois_anjos();
    porta_fechada();
    pula_linhas(7);
    livro();
    pula_linhas(1);
    pessoas();
    pula_linhas(1);
    porta_aberta();
    pula_linhas(1);
    pula_linhas(4);
    pula_linhas(1);
}

void frame_readers(int readers[5]){

    if (readers[0] == 0 && readers[1] == 0 && readers[2] == 0 && readers[3] == 0 && readers[4] == 0)
    {
        frame_ninguem();
    }

    // 1 pessoa lendo

    else if (readers[0] == 1 && readers[1] == 0 && readers[2] == 0 && readers[3] == 0 && readers[4] == 0)
    {
        frame_pessoa_1();
    }
    else if(readers[0] == 0 && readers[1] == 1 && readers[2] == 0 && readers[3] == 0 && readers[4] == 0)
    {
        frame_pessoa_2();
    }
    else if(readers[0] == 0 && readers[1] == 0 && readers[2] == 1 && readers[3] == 0 && readers[4] == 0)
    {
        frame_pessoa_3();
    }
    else if(readers[0] == 0 && readers[1] == 0 && readers[2] == 0 && readers[3] == 1 && readers[4] == 0)
    {
        frame_pessoa_4();
    }
    else if(readers[0] == 0 && readers[1] == 0 && readers[2] == 0 && readers[3] == 0 && readers[4] == 1)
    {
        frame_pessoa_5();
    }


    // 2 pessoas lendo

    else if(readers[0] == 1 && readers[1] == 1 && readers[2] == 0 && readers[3] == 0 && readers[4] == 0)
    {
        frame_pessoa_1_2();
    }
    else if(readers[0] == 1 && readers[1] == 0 && readers[2] == 1 && readers[3] == 0 && readers[4] == 0)
    {
        frame_pessoa_1_3();
    }
    else if(readers[0] == 1 && readers[1] == 0 && readers[2] == 0 && readers[3] == 1 && readers[4] == 0)
    {
        frame_pessoa_1_4();
    }
    else if(readers[0] == 1 && readers[1] == 0 && readers[2] == 0 && readers[3] == 0 && readers[4] == 1)
    {
        frame_pessoa_1_5();
    }


    else if(readers[0] == 0 && readers[1] == 1 && readers[2] == 1 && readers[3] == 0 && readers[4] == 0)
    {
        frame_pessoa_2_3();
    }
    else if(readers[0] == 0 && readers[1] == 1 && readers[2] == 0 && readers[3] == 1 && readers[4] == 0)
    {
        frame_pessoa_2_4();
    }
    else if(readers[0] == 0 && readers[1] == 1 && readers[2] == 0 && readers[3] == 0 && readers[4] == 1)
    {
        frame_pessoa_2_5();
    }


    else if(readers[0] == 0 && readers[1] == 0 && readers[2] == 1 && readers[3] == 1 && readers[4] == 0)
    {
        frame_pessoa_3_4();
    }
    else if(readers[0] == 0 && readers[1] == 0 && readers[2] == 1 && readers[3] == 0 && readers[4] == 1)
    {
        frame_pessoa_3_5();
    }


    else if(readers[0] == 0 && readers[1] == 0 && readers[2] == 0 && readers[3] == 1 && readers[4] == 1)
    {
        frame_pessoa_4_5();
    }


    // 3 pessoas lendo

    else if(readers[0] == 1 && readers[1] == 1 && readers[2] == 1 && readers[3] == 0 && readers[4] == 0)
    {
        frame_pessoa_1_2_3();
    }
    else if(readers[0] == 1 && readers[1] == 1 && readers[2] == 0 && readers[3] == 1 && readers[4] == 0)
    {
        frame_pessoa_1_2_4();
    }
    else if(readers[0] == 1 && readers[1] == 1 && readers[2] == 0 && readers[3] == 0 && readers[4] == 1)
    {
        frame_pessoa_1_2_5();
    }

    else if(readers[0] == 1 && readers[1] == 0 && readers[2] == 1 && readers[3] == 1 && readers[4] == 0)
    {
        frame_pessoa_1_3_4();
    }
    else if(readers[0] == 1 && readers[1] == 0 && readers[2] == 1 && readers[3] == 0 && readers[4] == 1)
    {
        frame_pessoa_1_3_5();
    }

    else if(readers[0] == 1 && readers[1] == 0 && readers[2] == 0 && readers[3] == 1 && readers[4] == 1)
    {
        frame_pessoa_1_4_5();
    }


    else if(readers[0] == 0 && readers[1] == 1 && readers[2] == 1 && readers[3] == 1 && readers[4] == 0)
    {
        frame_pessoa_2_3_4();
    }
    else if(readers[0] == 0 && readers[1] == 1 && readers[2] == 1 && readers[3] == 0 && readers[4] == 1)
    {
        frame_pessoa_2_3_5();
    }
    else if(readers[0] == 0 && readers[1] == 1 && readers[2] == 0 && readers[3] == 1 && readers[4] == 1)
    {
        frame_pessoa_2_4_5();
    }

    else if(readers[0] == 0 && readers[1] == 0 && readers[2] == 1 && readers[3] == 1 && readers[4] == 1)
    {
        frame_pessoa_3_4_5();
    }


    // 4 pessoas lendo

    else if(readers[0] == 1 && readers[1] == 1 && readers[2] == 1 && readers[3] == 1 && readers[4] == 0)
    {
        frame_pessoa_1_2_3_4();
    }
    else if(readers[0] == 1 && readers[1] == 1 && readers[2] == 1 && readers[3] == 0 && readers[4] == 1)
    {
        frame_pessoa_1_2_3_5();
    }
    else if(readers[0] == 1 && readers[1] == 1 && readers[2] == 0 && readers[3] == 1 && readers[4] == 1)
    {
        frame_pessoa_1_2_4_5();
    }
    else if(readers[0] == 1 && readers[1] == 0 && readers[2] == 1 && readers[3] == 1 && readers[4] == 1)
    {
        frame_pessoa_1_3_4_5();
    }
    else if(readers[0] == 0 && readers[1] == 1 && readers[2] == 1 && readers[3] == 1 && readers[4] == 1)
    {
        frame_pessoa_2_3_4_5();
    }


    // 5 pessoas lendo

    else if(readers[0] == 1 && readers[1] == 1 && readers[2] == 1 && readers[3] == 1 && readers[4] == 1)
    {
        frame_pessoa_1_2_3_4_5();
    }
    
}
