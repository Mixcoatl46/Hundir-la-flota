#include <stdio.h>
#include <stdlib.h>


//DATOS
#define __DATOS__
typedef struct{
    int Id_jugador;             //Id del jugador, 1 o 2
    char Nomb_jugador[20];      //Nombre del jugador (max 20 caracteres)
    char Tipo_disparo;          //A para automatico, M para manual
    int Num_disp;               //Numero de disparos del jugador
    int Ganador;                //0 para perdedor, 1 para ganador
}datos_jugador;

typedef struct{
    char Nomb_barco[20];
    char Id_barco;
    int Tam_barco;
    int Usado;                  //1 si se va a utilizar, 0 en caso contrario
    int Cantidad;               //Cantidad de barcos de ese tipo a utilizar
}datos_barco;

typedef struct{
    datos_jugador jugador[2];
    datos_barco barco[6];
    int n;                      //Tamaño de los tableros
    int comienzo;               //1 para jugador con Id=1, 2 para jugador con Id=2, 0 para que el sistema elija
}datos_partida;

# define LINEA \
printf ("\n - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");

//FUNCIONES
void configuracion(datos_partida);
void configuracion(datos_partida data){
    int opcion;
    do{
        LINEA
        printf ("Configracion:\n 1.Introducir datos\n 2.Mostrar\n 3.Borrar\n 4.Guardar\n 5.Cargar\n 6.Volver\n");           //Menu de configuracion
        printf("Introduce la opcion a elegir: ");
        scanf("%d", &opcion);
        while(opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4 && opcion!=5 && opcion!=6){
            printf("Error: Valor introducido no valido. Introduce un valor entero del 1 al 6: ");
            scanf("%d", &opcion);
        };

        switch(opcion){
            case 1: //Intorducir datos

                break;

            case 2: //Mostrar

                break;

            case 3: //Borrar

                break;

            case 4: //Guardar

                break;

            case 5: //Cargar

                break;

        }

        printf("\nAccion finalizada\n\n");
    }while(opcion!=6); //Volver
}

int main(){
    datos_partida data;
    configuracion(data);
    return(0);
}
