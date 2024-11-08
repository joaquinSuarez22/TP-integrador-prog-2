# include <iostream>
# include <cstdlib>
# include <cstring>
# include <algorithm>

using namespace std;

#include "ArchivoProductos.h"
#include "consola.h"
#include "accesorios.h"
#include "videojuegos.h"

Producto::Producto()
{
    // Inicialización por defecto (puedes dejarlo vacío o asignar valores por defecto)
}

//nombre del archivo
ArchivoProductos::ArchivoProductos(string nombreArchivo)
{
    _nombreArchivo = nombreArchivo;
}

//guardar el archivo
bool ArchivoProductos::Guardar(Producto producto)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "ab");
    if(pArchivo == NULL)
    {
        return false;
    }
    bool ok = fwrite(&producto, sizeof(Producto), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

//guardar el archivo en x posicion
bool ArchivoProductos::Guardar(Producto producto, int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb+");
    if(pArchivo == NULL)
    {
        return false;
    }
    fseek(pArchivo, sizeof(Producto) * posicion, SEEK_SET);
    bool ok = fwrite(&producto, sizeof(Producto), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

//buscar en el archivo por ID
int ArchivoProductos::Buscar(int IDProducto)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if(pArchivo == NULL)
    {
        return -1;
    }
    Producto producto;
    int i = 0;
    while(fread(&producto, sizeof(Producto), 1, pArchivo))
    {
        if(producto.getID() == IDProducto)
        {
            fclose(pArchivo);
            return i;
        }
        i++;
    }
    fclose(pArchivo);
    return -1;
}

//leer archivo
Producto ArchivoProductos::Leer(int posicion)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if(pArchivo == NULL)
    {
        return Producto();
    }
    Producto producto;
    fseek(pArchivo, sizeof(Producto) * posicion, SEEK_SET);
    fread(&producto, sizeof(Producto), 1, pArchivo);
    fclose(pArchivo);
    return producto;
}

//cant de registros del archivo
int ArchivoProductos::CantidadRegistros()
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if(pArchivo == NULL)
    {
        return 0;
    }
    fseek(pArchivo, 0, SEEK_END);
    int cantidadRegistros = ftell(pArchivo) / sizeof(Producto);
    fclose(pArchivo);
    return cantidadRegistros;
}

//leer archivo
void ArchivoProductos::Leer(int cantidadRegistros, Producto *vector)
{
    FILE *pArchivo = fopen(_nombreArchivo.c_str(), "rb");
    if(pArchivo == NULL)
    {
        return;
    }
    for(int i = 0; i < cantidadRegistros; i++)
    {
        fread(&vector[i], sizeof(Producto), 1, pArchivo);
    }
    fclose(pArchivo);
}

void ArchivoProductos::cargarProducto()
{
    int tipo;
    cout << "Ingrese el tipo de producto (1: Consola, 2: Videojuego, 3: Accesorio): ";
    cin >> tipo;

    // Variables comunes
    int id, stock, categoria;
    string nombre;
    float precio;

    cout << "Ingrese el ID del producto: ";
    cin >> id;

    cout << "Ingrese el nombre del producto: ";
    cin.ignore();
    getline(cin, nombre);

    categoria = tipo;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "Ingrese el STOCK del producto: ";
    cin >> stock;

    // Ahora puedes agregar lógica específica dependiendo del tipo
    switch (tipo)
    {
    case 1:   // Consola
    {
        // Aquí podrías pedir más información específica para Consola
        Consola consola(id, nombre, categoria, precio, stock);
        if (GuardarEnArchivo(consola, "consolas.dat"))
        {
            cout << "Consola guardada correctamente en consolas.dat." << endl;
        }
        else
        {
            cout << "Error al guardar la consola." << endl;
        }
        break;
    }
    case 2:   // Videojuego
    {
        // Aquí podrías pedir más información específica para Videojuego
        Videojuegos videojuego(id, nombre, categoria, precio, stock);
        if (GuardarEnArchivo(videojuego, "videojuegos.dat"))
        {
            cout << "Videojuego guardado correctamente en videojuegos.dat." << endl;
        }
        else
        {
            cout << "Error al guardar el videojuego." << endl;
        }
        break;
    }
    case 3:   // Accesorio
    {
        // Aquí podrías pedir más información específica para Accesorio
        Accesorios accesorio(id, nombre, categoria, precio, stock);
        if (GuardarEnArchivo(accesorio, "accesorios.dat"))
        {
            cout << "Accesorio guardado correctamente en accesorios.dat." << endl;
        }
        else
        {
            cout << "Error al guardar el accesorio." << endl;
        }
        break;
    }
    default:
        cout << "Tipo de producto inválido." << endl;
        break;
    }
}

// Método general para guardar un producto en un archivo específico
template <typename T>
bool ArchivoProductos::GuardarEnArchivo(T producto, const string& nombreArchivo)
{
    FILE *pArchivo = fopen(nombreArchivo.c_str(), "ab");
    if (pArchivo == nullptr)
    {
        return false;
    }
    bool ok = fwrite(&producto, sizeof(T), 1, pArchivo);
    fclose(pArchivo);
    return ok;
}

// listarProductos // mostrar por pantalla // mostrar las 3 categias
/*
void ArchivoProductos::listarProductos()
{
    int cantidad = CantidadRegistros();
    if (cantidad == 0)
    {
        cout << "No hay productos registrados." << endl;
        return;
    }

    Producto* productos = new Producto[cantidad]; // Crear un arreglo dinámico
    Leer(cantidad, productos); // Leer todos los productos del archivo

    cout << "Lista de productos registrados:" << endl;
    for (int i = 0; i < cantidad; i++)
    {
        productos[i].mostrarDetalles(); // Asegúrate de tener esta función en la clase Producto
    }

    delete[] productos; // Liberar la memoria
}
*/

/*
void ArchivoProductos::listarProductos()
{
    Consola miconsola;
    FILE* pConsola = fopen("consolas.dat", "rb");

    if (pConsola == NULL)
    {
        cerr << "Error al abrir el archivo consolas.dat" << endl;
        return;
    }

    //int tam = ftell(pConsola);
    while (fread(&miconsola, sizeof(Consola), 1, pConsola) == 1)
    {
        //tam = ftell(pConsola);
        //system("pause");
        miconsola.mostrarDetalles();
        cout << endl;
    }

    fclose(pConsola);
}
*/


void ArchivoProductos::mostrarTodosLosProductos() {
    Consola miConsola;
    Videojuegos miVideojuego;
    Accesorios miAccesorio;
    FILE* archivo;



    // Leer consolas
    archivo = fopen("consolas.dat", "rb");
    if (archivo != NULL) {
        cout << "Consolas:" << endl;
        while (fread(&miConsola, sizeof(Consola), 1, archivo) == 1) {
            miConsola.mostrarEspecificaciones();
            cout << endl;
        }
        fclose(archivo);
    } else {
        cerr << "Error al abrir consolas.dat" << endl;
    }

    cout<<"-----------------------------------------------"<<endl;

    // Leer videojuegos
    archivo = fopen("videojuegos.dat", "rb");
    if (archivo != NULL) {
        cout << "Videojuegos:" << endl;
        while (fread(&miVideojuego, sizeof(Videojuegos), 1, archivo) == 1) {
            miVideojuego.mostrarEspecificaciones();
            cout << endl;
        }
        fclose(archivo);
    } else {
        cerr << "Error al abrir videojuegos.dat" << endl;
    }


    cout<<"-----------------------------------------------"<<endl;


    // Leer accesorios
    archivo = fopen("accesorios.dat", "rb");
    if (archivo != NULL) {
        cout << "Accesorios:" << endl;
        while (fread(&miAccesorio, sizeof(Accesorios), 1, archivo) == 1) {
            miAccesorio.mostrarEspecificaciones();
            cout << endl;
        }
        fclose(archivo);
    } else {
        cerr << "Error al abrir accesorios.dat" << endl;
    }
}

















