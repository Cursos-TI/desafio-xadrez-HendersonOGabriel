#include <stdio.h>

int main(){
    
    for(int i = 0; i <10; i++){
        if (i == 5) continue; // pula daqui e reinicia o for
        if (i == 8) break; // pula daqui e sai do for sem executar o resto do código
        printf("%d\n", i);
    }

    return 0;
}