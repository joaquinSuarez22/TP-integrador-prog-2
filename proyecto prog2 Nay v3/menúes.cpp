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

// Funci�n para mostrar el men� de Gesti�n Interna
void menuGestionInterna(){
    int opcion;
    Gestion a;
    do
    {
        cout << "==============================" << endl;
        cout << "     GESTI�N INTERNA         " << endl;
        cout << "==============================" << endl;
        cout << "1. Modificar el Valor de los Costos Operativos" << endl;
        cout << "2. Gesti�n de Vendedores" << endl;
        cout << "3. Actualizaci�n de Precios y Gesti�n de Descuentos" << endl;
        cout << "4. Incorporaci�n de Nuevos Productos" << endl;
        cout << "5. Creaci�n de Nuevas Categor�as" << endl;

        cout << "0. Volver al men� principal" << endl;
        cout << "Seleccione una opci�n: ";
        cin >> opcion;
        limpiarPantalla();
        switch (opcion)
        {
        case 1:
            cout << "Has seleccionado la opci�n 1 de Gesti�n Interna." << endl;
            cout<<"MENU GESTION DE COSTOS OPERATIVOS"<<endl;
            cout<< "1) Modificar costo de luz"<<endl;
            cout<< "2) Modificar costo de agua"<<endl;
            cout<< "3) Modificar costo de mantenimiento del local"<<endl;
            break;
        case 2:
            cout<< "Has seleccionado la opci�n 2 de Gesti�n Interna." << endl;
            cout<< "MENU GESTION DE VENDEDORES"<<endl;
            cout<< "1) Agregar vendedor"<<endl;
            cout<< "2) Eliminar vendedor"<<endl;
            a.mvendedores();

            break;
        case 3:
            cout << "Has seleccionado la opci�n 3 de Gesti�n Interna." << endl;
            break;
        case 4:
            cout << "Has seleccionado la opci�n 4 de Gesti�n Interna." << endl;
            break;
        case 5:
            cout << "Has seleccionado la opci�n 5 de Gesti�n Interna." << endl;
            break;
        case 0:
            //cout << "Volviendo al men� principal..." << endl;
            break;
        default:
            cout << "Opci�n inv�lida, por favor intenta de nuevo." << endl;



        }
        esperarEnter();
        limpiarPantalla();

    }while (opcion != 0);
}



// Funci�n para mostrar el men� de Informes
void menuInformes()
{
    int opcion;
    do
    {
        cout << "==============================" << endl;
        cout << "          INFORMES            " << endl;
        cout << "==============================" << endl;
        cout << "1. Recaudaci�n por cliente" << endl;
        cout << "2. Recaudaci�n por producto" << endl;
        cout << "3. Cantidad de productos vendidos por categor�a" << endl;
        cout << "4. Stock de todos los productos" << endl;
        cout << "5. Ganancias del mes" << endl;
        cout << "6. Recaudaci�n anual" << endl;

        cout << "0. Volver al men� principal" << endl;
        cout << "Seleccione una opci�n: ";
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
            cout << "Volviendo al men� principal..." << endl;
            break;
        default:
            cout << "Opci�n inv�lida, por favor intenta de nuevo." << endl;
        }

        esperarEnter();
        limpiarPantalla();
    }
    while (opcion != 0);
}

// Funci�n para mostrar el men� de Configuraciones
void menuConfiguraciones()
{
    int opcion;
    do
    {
        cout << "==============================" << endl;
        cout << "       CONFIGURACIONES        " << endl;
        cout << "==============================" << endl;
        cout << "1. Configuraci�n 1" << endl;
        cout << "2. Configuraci�n 2" << endl;
        cout << "3. Configuraci�n 3" << endl;
        cout << "0. Volver al men� principal" << endl;
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Accediendo a configuraci�n 1..." << endl;
            break;
        case 2:
            cout << "Accediendo a configuraci�n 2..." << endl;
            break;
        case 3:
            cout << "Accediendo a configuraci�n 3..." << endl;
            break;
        case 0:
            cout << "Volviendo al men� principal..." << endl;
            break;
        default:
            cout << "Opci�n inv�lida, por favor intenta de nuevo." << endl;
            break;
        }

        esperarEnter();
        limpiarPantalla();
    }
    while (opcion != 0);
}

// Funci�n para mostrar el men� de Configuraciones
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
        cout << "4. Configuraci�n 3" << endl;
        cout << "0. Volver al men� principal" << endl;
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Accediendo a configuraci�n 1..." << endl;
            break;
        case 2:
            cout << "Accediendo a configuraci�n 2..." << endl;
            break;
        case 3:
            cout << "Accediendo a configuraci�n 3..." << endl;
            break;
            case 4:
            cout << "Accediendo a configuraci�n 3..." << endl;
            break;
        case 0:
            cout << "Volviendo al men� principal..." << endl;
            break;
        default:
            cout << "Opci�n inv�lida, por favor intenta de nuevo." << endl;
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
        cout << "Seleccione una opci�n: ";
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
            cout << "Opci�n inv�lida, por favor intenta de nuevo." << endl;
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

