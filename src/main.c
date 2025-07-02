  #include <stdio.h>
#include <stdlib.h>
#include "../include/funcoes.h"

int main() {
    // Exemplo de utilização
    Reserva reservas[10]; // Supondo que há 10 quartos no hotel
    int totalReservas = 0;

    int opcao;
    do {
        printf("\nBEM-VINDO AO HOTEL ORIENTE:\n");
        printf("Escolha uma opção:\n");
        printf("1. Fazer Reserva\n");
        printf("2. Realizar Check-In\n");
        printf("3. Realizar Check-Out\n");
        printf("4. Visualizar Reservas\n");
        printf("0. Sair\n");

        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida. Encerrando o programa.\n");
            break;
        }

        switch (opcao) {
            case 1:
                fazerReserva(reservas, &totalReservas);
                break;
            case 2:
                realizarCheckIn(reservas, totalReservas);
                break;
            case 3:
                realizarCheckOut(reservas, totalReservas);
                break;
            case 4:
                visualizarReservas(reservas, totalReservas);
                break;
            case 0:
                printf("Saindo do programa. Adeus!\n");
                break;
            default:
                printf("Opcao invalida. Tentar novamente.\n");
        }

    } while (opcao != 0); 

        
    return 0;
}
