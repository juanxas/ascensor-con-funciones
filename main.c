#include <stdio.h>
int piso_actual =0;

void llamar_a_su_ascensor(){
   
    int piso_llamada;
        switch (opcion) {
            case '1':
                printf("Ingrese el piso desde donde llama al ascensor (0-9):");
                scanf("%d", &piso_llamada);
                if (piso_llamada >= 0 && piso_llamada <=9){ 
                    if (piso_actual == piso_llamada){
                        printf("El ascensor ya se encuentra en el piso %d\n", piso_actual);
                } else
                {
                    printf("Moviendo ascensor.....\n");
                    if (piso_llamada > piso_actual)
                    {
                        for ( int i = piso_actual + 1; i <= piso_llamada; i++)
                        {
                            printf("Ascensor en piso %d\n, i");
                        }
                    } else
                    {
                        for (int i = piso_actual - 1; i >= piso_llamada; i--)
                        {
                            printf("Ascensor en piso %d\n, i");
                        }
                        
                    }
                    piso_actual = piso_llamada;
                }      
        }
}          
void a_que_piso_desea_ir(){

    int piso_seleccionado;
    int i;
    printf("Ingrese el piso al que desea ir (0-9):");
    scanf("%d", &piso_seleccionado);
    if (piso_seleccionado >=0 && piso_selecionado <=9){
    if (piso_seleccionado == piso_actual)
    {
        printf ("El ascensor ya se encuentra en el piso %d\n", piso_seleccionado);
    } else
    {
        printf ("Moviendo ascensor...\n");
        if (piso_seleccionado > piso_actual)
        {
            for (int i = piso_actual + 1; i < piso_seleccionado; i++)
            {
                printf("Ascensor en piso %d\n", i);
            }
            
        }else
        {
            for (int i = piso_actual - 1 ; i >= piso_seleccionado; i--)
            {
                printf("Ascensor en piso %d\n", i);
            }
            
        }
        
        piso_actual =  piso_seleccionado;
    }
    break;
}
void mostrar_piso_donde_se_encuentra(){

    switch (piso_actual)
                {
                case 0:
                    printf("El ascensor se encuentra en la planta baja\n");
                    break;
                case 1:
                    printf("El ascensor se encuentra en el primer piso\n");
                    break;
                case 2:
                    printf("El ascensor se encuentra en el segundo piso\n");
                    break;
                case 3: 
                    printf("El ascensor se encuentra en el tercer piso\n");
                    break;
                case 4:
                    printf ("El ascensor se encuentra en el cuarto piso\n");
                    break;
                case 5: 
                    printf("El ascensor se encuentra en el quinto piso\n");
                    break;
                case 6:
                    printf("El ascensor se encuentra en el sexto piso\n");
                    break;
                case 7:
                    printf("El ascensor se encuentra en el septimo piso\n");
                    break;
                case 8:
                    printf("El ascensor se encuentra en el octavo piso\n");
                    break;
                case 9: 
                    printf("El ascensor se encuentra en el noveno piso\n");
                    break;   
                }
}                
void menu(){
    int opcion=0
    do{
        printf("\n----MENU DEL ASCENSOR----\n");
        printf("1. Llamar al ascensorn\n");
        printf("2. Seleccionar piso\n");
        printf("3. Mostrar piso actual\n");
        printf("4. Salir\n");
        printf("Ingrese una opcion:");
        scanf(%c, &opcion);
        switch (opcion)
        {
        case 1:
            llamar_a_su_ascensor();
            break;
        case 2:
            a_que_piso_desea_ir();
            break;
        case 3:
            mostrar_piso_donde_se_encuentra();
            break;
        case 4:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opcion no valida. Intente de nuevo ....\n");
            break;
        }
    }while (opcion != 4);
}
          
int main (){
    menu();
}

