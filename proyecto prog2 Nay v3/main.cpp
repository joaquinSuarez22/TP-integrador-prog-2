# include <iostream>
# include <cstdlib>
# include <cstring>
#include <string.h>

using namespace std;

#include "menus.h"

#include "fecha.h"

#include "producto.h"
#include "videojuegos.h"
#include "accesorios.h"
#include "consola.h"
#include "personas.h"
#include "vendedor.h"
#include "cliente.h"
#include "ventas.h"
#include "detalleDeVentas.h"

//archivos
#include "ArchivoProductos.h"


int main()
{
    setlocale(LC_ALL, "spanish");

    // Crear una instancia de ArchivoProductos
    ArchivoProductos archivo("productos.dat");


    int opcion;

    do
    {
        cout << "==============================" << endl;
        cout << "         MENÚ PRINCIPAL       " << endl;
        cout << "==============================" << endl;
        cout << "1. GESTION INTERNA" << endl;
        cout << "2. INFORMES" << endl;
        cout << "3. CONFIGURACIONES" << endl;
        cout << "4. LISTADOS" << endl;
        cout << "5. CONSULTAS" << endl;
        cout << "6. GESTION PRINCIPAL" << endl;
        cout << "7. cargar productos" << endl;
        cout << "8. mostrar productos" << endl;

        cout << "0. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        limpiarPantalla();

        switch (opcion)
        {
        case 1:
            menuGestionInterna();
            break;
        case 2:
            menuInformes();
            break;
        case 3:
            menuConfiguraciones();
            break;
        case 4:
            menuListados();
            break;
        case 5:
            menuConsultas();
            break;
        case 6:
            menuGestionPrincipal();
            break;
        case 7:
            archivo.cargarProducto(); // Llama a la función para cargar productos
            break;
        case 8:
            //archivo.listarProductos(); // Llama al método para listar productos // mostrados todos los pruductos (las 3 categorias
            archivo.mostrarTodosLosProductos();
            break;
        case 0:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opción inválida, por favor intenta de nuevo." << endl;
        }

        esperarEnter();
        limpiarPantalla();

    }
    while (opcion != 0);

    return 0;
}







