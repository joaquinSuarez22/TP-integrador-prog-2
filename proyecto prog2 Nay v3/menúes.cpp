#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <ctime>
#include "gestioninterna.h"
using namespace std;

void limpiarPantalla(){
    system("cls");
}

void esperarEnter()
{
    cout << "Presiona Enter para continuar...";
    cin.ignore();
    cin.get();
}

// Función para mostrar el menú de Gestión Interna
void menuGestionInterna(){
    int opcion;
    Gestion a;
    do
    {
        cout << "==============================" << endl;
        cout << "     GESTIÓN INTERNA         " << endl;
        cout << "==============================" << endl;
        cout << "1. Modificar el Valor de los Costos Operativos" << endl;
        cout << "2. Gestión de Vendedores" << endl;
        cout << "3. Actualización de Precios y Gestión de Descuentos" << endl;
        cout << "4. Incorporación de Nuevos Productos" << endl;
        cout << "5. Creación de Nuevas Categorías" << endl;

        cout << "0. Volver al menú principal" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        limpiarPantalla();
        switch (opcion)
        {
        case 1:
            cout << "Has seleccionado la opción 1 de Gestión Interna." << endl;
            cout<<"MENU GESTION DE COSTOS OPERATIVOS"<<endl;
            cout<< "1) Modificar costo de luz"<<endl;
            cout<< "2) Modificar costo de agua"<<endl;
            cout<< "3) Modificar costo de mantenimiento del local"<<endl;
            break;
        case 2:
            cout<< "Has seleccionado la opción 2 de Gestión Interna." << endl;
            cout<< "MENU GESTION DE VENDEDORES"<<endl;
            cout<< "1) Agregar vendedor"<<endl;
            cout<< "2) Eliminar vendedor"<<endl;
            a.mvendedores();

            break;
        case 3:
            cout << "Has seleccionado la opción 3 de Gestión Interna." << endl;
            break;
        case 4:
            cout << "Has seleccionado la opción 4 de Gestión Interna." << endl;
            break;
        case 5:
            cout << "Has seleccionado la opción 5 de Gestión Interna." << endl;
            break;
        case 0:
            //cout << "Volviendo al menú principal..." << endl;
            break;
        default:
            cout << "Opción inválida, por favor intenta de nuevo." << endl;



        }
        esperarEnter();
        limpiarPantalla();

    }while (opcion != 0);
}



// Función para mostrar el menú de Informes
void menuInformes()
{
    int opcion;
    do
    {
        cout << "==============================" << endl;
        cout << "          INFORMES            " << endl;
        cout << "==============================" << endl;
        cout << "1. Recaudación por cliente" << endl;
        cout << "2. Recaudación por producto" << endl;
        cout << "3. Cantidad de productos vendidos por categoría" << endl;
        cout << "4. Stock de todos los productos" << endl;
        cout << "5. Ganancias del mes" << endl;
        cout << "6. Recaudación anual" << endl;

        cout << "0. Volver al menú principal" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Generando informe 1..." << endl;
            break;
        case 2:
            cout << "Generando informe 2..." << endl;
            break;
        case 3:
            cout << "Generando informe 3..." << endl;
            break;
        case 4:
            cout << "Generando informe 4..." << endl;
            break;
        case 5:
            cout << "Generando informe 5..." << endl;
            break;
        case 0:
            cout << "Volviendo al menú principal..." << endl;
            break;
        default:
            cout << "Opción inválida, por favor intenta de nuevo." << endl;
        }

        esperarEnter();
        limpiarPantalla();
    }
    while (opcion != 0);
}

// Función para mostrar el menú de Configuraciones
void menuConfiguraciones()
{
    int opcion;
    do
    {
        cout << "==============================" << endl;
        cout << "       CONFIGURACIONES        " << endl;
        cout << "==============================" << endl;
        cout << "1. Configuración 1" << endl;
        cout << "2. Configuración 2" << endl;
        cout << "3. Configuración 3" << endl;
        cout << "0. Volver al menú principal" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Accediendo a configuración 1..." << endl;
            break;
        case 2:
            cout << "Accediendo a configuración 2..." << endl;
            break;
        case 3:
            cout << "Accediendo a configuración 3..." << endl;
            break;
        case 0:
            cout << "Volviendo al menú principal..." << endl;
            break;
        default:
            cout << "Opción inválida, por favor intenta de nuevo." << endl;
            break;
        }

        esperarEnter();
        limpiarPantalla();
    }
    while (opcion != 0);
}

// Función para mostrar el menú de Configuraciones
void menuListados()
{
    int opcion;
    do
    {
        cout << "==============================" << endl;
        cout << "       listados        " << endl;
        cout << "==============================" << endl;
        cout << "1. Listado de clientes" << endl;
        cout << "2. Listado de vendedores" << endl;
        cout << "3. Listado de productos" << endl;
        cout << "4. Configuración 3" << endl;
        cout << "0. Volver al menú principal" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Accediendo a configuración 1..." << endl;
            break;
        case 2:
            cout << "Accediendo a configuración 2..." << endl;
            break;
        case 3:
            cout << "Accediendo a configuración 3..." << endl;
            break;
            case 4:
            cout << "Accediendo a configuración 3..." << endl;
            break;
        case 0:
            cout << "Volviendo al menú principal..." << endl;
            break;
        default:
            cout << "Opción inválida, por favor intenta de nuevo." << endl;
        }

        esperarEnter();
        limpiarPantalla();
    }
    while (opcion != 0);
}
void menuConsultas()
{
    int opcion;
    do
    {
        cout << "==============================" << endl;
        cout << "     MENU CONSULTAS         " << endl;
        cout << "==============================" << endl;
        cout << "1. Consulta de clientes" << endl;
        cout << "2. Consulta de productos" << endl;
        cout << "3. Consulta de ventas" << endl;
        cout << "4. Consulta de vendedores" << endl;

        cout << "0. Volver al menu principal" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch(opcion)
        {
        case 1:
            cout<<"A seleccionado Consulta de clientes."<< endl;
            break;
        case 2:
            cout<<"A seleccionado Consulta de productos."<< endl;
            break;
        case 3:
            cout<<"A seleccionado Consulta de ventas."<< endl;
            break;
        case 4:
            cout<<"A seleccionado Consulta de vendedores."<< endl;
            break;
        case 0:
            cout<<"volviendo al menu principal."<< endl;
            break;
        default:
            cout << "Opción inválida, por favor intenta de nuevo." << endl;
            break;
        }

        esperarEnter();
        limpiarPantalla();
    }
    while(opcion!=0);

}
void menuGestionPrincipal()
{
    cout << "A ENTRADO A GESTION PRINCIPAL...ESTA EN PROCESO";
    cin.ignore();
    cin.get();
}

