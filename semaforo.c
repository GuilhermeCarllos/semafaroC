#include <stdio.h>
#include <unistd.h> // Para usar a função sleep
#include <ncurses.h> // Para detectar as teclas do teclado 

int main() 
{
    
    initscr(); // Incia a biblioteca a "ncurses.h"
    timeout(0); // Configura o tempo de espera para zero
    int sinal = 0; // 0 = Não aciona o sinal de pedestres, 1 = incia o sinal de pedestres

    while (1) { // Cria um loop infinito
        
        int tecla = getch(); // Lê uma tecla
        if (tecla == 's'){
            sinal = 1; // O sinal é ativado quando o usuário pressiona a tecla "s" do teclado
        }
        printf("Fase 1\n");
        printf("Rua Alfa - \33[32mSinal: Verde \33[m\n");
        printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n"); // Todos os "printf" têm padrão Ansi para imprimir com cor
        printf("Pedestres - \33[31mSinal: Vermelho \33[m\n\n");
        sleep(15); // Pausa o código por 15 segundos    
        tecla = getch(); // Lê uma tecla
        if (tecla == 's'){
            sinal = 1; // O sinal é ativado quando o usuário pressiona a tecla "s" do teclado
        }
        
        printf("Fase 2\n");
        printf("Rua Alfa - \33[33mSinal: Amarelo \33[m\n");
        printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
        printf("Pedestres - \33[31mSinal: Vermelho \33[m\n\n");
        sleep(2); // Pausa o código por 2 segundos
        tecla = getch(); // Lê uma tecla
        if (tecla == 's'){
            sinal = 1; // O sinal é ativado quando o usuário pressiona a tecla "s" do teclado
        }
    
        printf("Fase 3\n");
        printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
        printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
        printf("Pedestres - \33[31mSinal: Vermelho \33[m\n\n");
        sleep(1); // Pausa o código por 1 segundo
        tecla = getch(); // Lê uma tecla
        if (tecla == 's'){
            sinal = 1; // O sinal é ativado quando o usuário pressiona a tecla "s" do teclado
        }
        
        if (sinal){ // Se a tecla "s" for pressionada o sinal de pedestres será ativado, caso não seja pressionado o sinal não será ativado
            printf("Fase 3A\n");
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            printf("Pedestres - \33[32mSinal: Verde \33[m\n\n");
            sleep(5); // Pausa o código por 5 segundos
            printf("Fase 3B\n");
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            printf("Pedestres - \33[31mSinal: Vermelho Piscando \33[m\n\n");
            sleep(5); // Pausa o código por 5 segundos
            sinal = 0; // Desativa o sinal de pedestres
        }
        
        printf("Fase 4\n");
        printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
        printf("Rua Bravo - \33[32mSinal: Verde \33[m\n");
        printf("Pedestres - \33[31mSinal: Vermelho \33[m\n\n");
        sleep(10); // Pausa o código por 10 segundos
        tecla = getch(); // Lê uma tecla
        if (tecla == 's'){
            sinal = 1; // O sinal é ativado quando o usuário pressiona a tecla "s" do teclado
        }
            
        printf("Fase 5\n");
        printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
        printf("Rua Bravo - \33[33mSinal: Amarelo \33[m\n");
        printf("Pedestres - \33[31mSinal: Vermelho \33[m\n\n");
        sleep(2); // Pausa o código por 2 segundos
        tecla = getch(); // Lê uma tecla
        if (tecla == 's'){
            sinal = 1; // O sinal é ativado quando o usuário pressiona a tecla "s" do teclado
        }
            
        printf("Fase 6\n");
        printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
        printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
        printf("Pedestres - \33[31mSinal: Vermelho \33[m\n\n");
        sleep(1); // Pausa o código por 1 segundo
        tecla = getch(); // Lê uma tecla
        if (tecla == 's'){
            sinal = 1; // O sinal é ativado quando o usuário pressiona a tecla "s" do teclado
        }
        
        if (sinal){ // Se a tecla "s" for pressionada o sinal de pedestres será ativado, caso não seja pressionado o sinal não será ativado
            printf("Fase 6A\n");
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            printf("Pedestres - \33[32mSinal: Verde \33[m\n\n");
            sleep(5); // Pausa o código por 5 segundos
            printf("Fase 6B\n");
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            printf("Pedestres - \33[31mSinal: Vermelho Piscando \33[m\n\n");
            sleep(5); // Pausa o código por 5 segundos
            sinal = 0; // Desativa o sinal de pedestres
        }
    }

    endwin(); // Finaliza a biblioteca "ncurses.h"

    return 0;
}
