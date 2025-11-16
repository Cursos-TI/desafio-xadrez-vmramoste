#include <stdio.h>
#include <locale.h>

// Movimentar torre para a direita com recursividade
void movimenta_torre(int casas){
    if(casas>0){
        printf("Direita\n");
        
        movimenta_torre(casas - 1);
    }
}


//Movimenta bispo;
void movimenta_bispo(int casas) {
    if(casas > 0) {
        // Loop externo (vertical) - Cima
        for(int vertical = 0; vertical < 1; vertical++) {
            printf("Cima\n");
            
            // Loop interno (horizontal) - Direita  
            for(int horizontal = 0; horizontal < 1; horizontal++) {
                printf("Direita\n");
            }
        }
        movimenta_bispo(casas - 1);
    }
}

//Movimento da rainha para a esquerda com recursividade
void movimenta_rainha(int casas){
    if(casas>0){
        printf("Esquerda\n");
        movimenta_rainha(casas - 1);
    }
}

int main(){
    // Caracteres especiais
    setlocale(LC_ALL,"Portuguese_Brazil");

    // Movimentação Torre, 5 casas para a direita
    printf("Movimentação da torre:\n");
    movimenta_torre(5);

    // Movimentação Bispo, 5 casas na diagonal superior direita
    printf("\nMovimentação do bispo:\n");
    movimenta_bispo(5);

    // Movimentação da Rainha, 8 casas para a esquerda
    
    printf("\nMovimentação da rainha:\n");
    movimenta_rainha(8);

    // Movimentação do Cavalo, 2 casas para cima e uma para a direita
    printf("\nMovimentação do cavalo:\n");

    for(int movimento_cima = 0, movimento_direita = 0; 
        movimento_cima < 2 || movimento_direita < 1; 
        (movimento_cima < 2) ? movimento_cima++ : movimento_direita++) {
        
        if(movimento_cima < 2) {
            printf("Cima\n");
            continue;  // Pula para próxima iteração
        }
        
        if(movimento_direita < 1) {
            printf("Direita\n");
        }
    }
    return 0;
}

   
