#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    string genero;
    bool prestamo;

public:
    Libro(string title = "Sin titulo", string author = "Jose", string genre = "Novela", bool presta = false) {
        titulo = title;
        autor = author;
        genero = genre;
        prestamo = presta;
    }

    void setTitulo(string title) {
        titulo = title;
    }

    void setAutor(string author) {
        autor = author;
    }

    void setGenero(string genre) {
        genero = genre;
    }

    string getTitulo() {
        return titulo;
    }

    string getAutor() {
        return autor;
    }

    string getGenero() {
        return genero;
    }

    void prestar() {
        if (!prestamo) {
            prestamo = true;
            cout << "Libro: " << titulo << " ha sido prestamo" << endl;
        } else {
            cout << "Libro no disponible, ya ha sido prestamo" << endl;
        }
    }

    void devolver() {
        if (prestamo) {
            prestamo = false;
            cout << "Libro " << titulo << " devuelto con éxito" << endl;
        } else {
            cout << "El libro no estaba prestamo" << endl;
        }
    }

    bool prestado() {
        return prestamo;
    }
};

class Biblioteca {
private:
    string nombre;
    vector<Libro> catalogo;

public:
    Biblioteca(string name = "Hola"){
        nombre = name;
    }

    void agregarLibro(Libro libro) {
        catalogo.push_back(libro);
        cout << "Libro: '" << libro.getTitulo() << " añadido al catálogo" << endl;
    }

    void prestarLibro(Libro libro) {
        bool encontrado = false;
        for (int i = 0; i < catalogo.size(); ++i) {
            if (catalogo[i].getTitulo() == libro.getTitulo()) {
                encontrado = true;
                catalogo[i].prestar();
                break;
            }
        }
        if (!encontrado) {
            cout << "Libro: '" << libro.getTitulo() << "' no disponible en esta biblioteca" << endl;
        }
    }
};

int ejecucion() {
    Libro libro1("caperucita", "Juan", "Novela");
    Libro libro2("Waos", "Pedro", "Fabula");

    Biblioteca biblioteca("Biblioteca_1");
    biblioteca.agregarLibro(libro1);
    biblioteca.agregarLibro(libro2);

    cout << "\nPrestamo de libros" << endl;
    biblioteca.prestarLibro(libro1);
    biblioteca.prestarLibro(libro1);

    cout << "\nDevolucion de libro" << endl;
    libro1.devolver();

    return 0;
}
