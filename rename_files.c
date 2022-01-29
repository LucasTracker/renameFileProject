#include <stdio.h>

int main(int argc, char *argv[]){
	if(rename(argv[1], argv[2]) != 0)
		puts("[*] Erro na troca de Nomes");
	
	puts("[*] Troca de nome concluída com sucesso");
	return 0;
}
