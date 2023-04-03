
#include <iostream>
#include <conio.h> 
#include <stdio.h>
#include <stdlib.h>
using  namespace std;

int main()
{
    char apellido[40], descripcion[100], clasificacion[10], genero[30], consola[30];
    int precio, impuesto, total, opcion, desicion;


    printf("\t ***MENU DE OPCIONES***\n");
    printf("1.- Alta de Articulos\n");
    printf("2.- Baja de Articulos\n");
    printf("3.- Modificacion de Articulo\n");
    printf("4.- Lista de Articulos\n");
    printf("5.- Limpiar Pantalla\n");
    printf("6.- Salir\n");
    scanf_s("%d", &opcion);

    switch (opcion)
    {
    case 1: //ALTA

        printf("Ingrese el nombre del articulo:\n");
        scanf_s("%s", articulos[contador].nombre, 100);

        printf("Ingrese descripcion del videojuego:\n");
        scanf_s("%s", articulos[contador].descripcion, 100);

        printf("Ingrese la clasificacion:\n");
        scanf_s("%s", articulos[contador].clasificacion, 100);

        printf("Ingrese el genero:\n");
        scanf_s("%s", articulos[contador].genero, 50);

        printf("Ingrese la consola:\n");
        scanf_s("%s", articulos[contador].consola, 50);

        printf("Precio Unitario:\n");
        scanf_s("%f", &pres);


        impuesto = precio * 0.16;
        cout << "\nImpuesto: " << impuesto;
        total = impuesto + precio;
        cout << "\nTotal: " << total << endl;

        printf("¿Desea regresar al menu?\n");
        printf("1.- Si\n");
        printf("2.- No\n");
        cin >> desicion;
        if (desicion == 1)
        {
            //system("pause");
            return main();
        }
        break;
    case 2:
        break;

    case 3:
        break;

    case 4:
        for (int i = 0; i < contador; i++) {
            printf("Articulo %d:\n", i + 1);
            printf("  Nombre: %s\n", articulos[i].nombre);
            printf("  Clasificacion: %s\n", articulos[i].clasificacion);
            printf("  Genero: %s\n", articulos[i].genero);
            printf("  Consola: %s\n", articulos[i].consola);
        }
        break;

    case 5:
        system("cls"); // limpiar pantalla
        return main();
        break;
    case 6:
        return 0;
        exit(1);
        break;

    }
}
