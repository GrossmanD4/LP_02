class Libro:
    def __init__(self, titulo, autor, genero):
        self.titulo = titulo
        self.autor = autor
        self.genero = genero
    
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

libro1 = Libro("El Silmarillion","J. R. R Tolkien","Fantasia")
libro2 = Libro("Danza de dragones","Geroge R. R. Martin","Novela - Alta fantasia")

print(f"Autor del 1er libro : {libro1.getAutor()}")

# Actualizar informacion

libro2.setGenero("Fantasia")

print(f"  2do libro:\n"
      f"Autor : {libro2.getAutor()}\n"
      f"Titulo: {libro2.getTitulo()}\n"
      f"Genero: {libro2.getGenero()}\n")