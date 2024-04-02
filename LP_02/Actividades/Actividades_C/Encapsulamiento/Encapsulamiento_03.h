#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    string genero;

public:
    Libro(string title = "Sin título", string author = "Anonimo", string genre = "Sin genero") {
        titulo = title;
        autor = author;
        genero = genre;
    }

    string getTitulo() {
        return titulo;
    }

    void setTitulo(string title) {
        titulo = title;
    }

    string getAutor() {
        return autor;
    }

    void setAutor(string author) {
        autor = author;
    }

    string getGenero() {
        return genero;
    }

    void setGenero(string genre) {
        genero = genre;
    }
};

int ejecucion() {
    Libro libro_01("Caperucita", "Edgar Alan Poe", "Cuento Infantil");

    cout << "Titulo: " << libro_01.getTitulo() << endl;
    cout << "Autor: " << libro_01.getAutor() << endl;
    cout << "Genero: " << libro_01.getGenero() << endl;

    libro_01.setTitulo("Cien años de soledad");
    libro_01.setAutor("Pedro");
    libro_01.setGenero("Novela");

    cout << "Titulo: " << libro_01.getTitulo() << endl;
    cout << "Autor: " << libro_01.getAutor() << endl;
    cout << "Genero: " << libro_01.getGenero() << endl;

    return 0;
}
