#include <stdio.h>
#include "ANIMACAO.c"

int main(){
	int v[5];
	system("clear");
	frame_pessoa_1_5();
	sleep(2);
	system("clear");
	frame_pessoa_1_2_5();
	sleep(2);

	for(int i=0; i<=1; i++){
		for(int j=0; j<=1; j++){
			for(int k=0; k<=1; k++){
				for(int l=0; l<=1; l++){
					for(int m=0; m<=1; m++){
						system("clear");
						v[0]=i;
						v[1]=j;
						v[2]=k;
						v[3]=l;
						v[4]=m;
						frame_readers(v);
						sleep(5);

					}
				}
			}
		}
	}


	return 0;
}