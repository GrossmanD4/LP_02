class Libro:
    def __init__(self, titulo, autor, genero):
        self.titulo = titulo
        self.autor = autor
        self.genero = genero
        self.prestado = False
    
    def setTitulo(self, titulo):
        self.titulo = titulo
    def setAutor(self, autor):
        self.autor = autor
    def setGenero(self, genero):
        self.genero = genero
    
    def getTitulo(self):
        return self.titulo
    def getAutor(self):
        return self.autor
    def getGenero(self):
        return self.genero
    
    def prestar(self):
        if self.prestado == False:
            self.prestado = True
            print(f"Libro: {self.titulo} ha sido prestado")
        else:
            print("Libro no diponible, ya a sido prestado")
    def devolver(self):
        if self.prestado == True:
            self.prestado = False
            print(f"Libro {self.titulo} devuelto con exito")
        else:
            print("El libro no estaba prestado ")

class Biblioteca:
    def __init__(self, nombre):
        self.nombre = nombre
        self.catalogo = []
    
    def agregarLibro(self, libro):
        self.catalogo.append(libro)
        print(f"libro: '{libro.titulo}' añadido al catalogo")

    def prestarLibro(self, libro):
        if libro in self.catalogo:
            libro.prestar()
        else:
            print(f"Libro: '{libro.titulo}' no disponible en esta biblioteca\n")
    

libro1 = Libro("El Silmarillion","J. R. R Tolkien","Fantasia")
libro2 = Libro("Danza de dragones","Geroge R. R. Martin","Novela - Alta fantasia")

biblioteca = Biblioteca("Biblioteca X")
biblioteca.agregarLibro(libro1)
biblioteca.agregarLibro(libro2)
print("\n Prestamo de libros")
biblioteca.prestarLibro(libro1)
biblioteca.prestarLibro(libro1)
print("\n Devolucion de libro")
libro1.devolver()