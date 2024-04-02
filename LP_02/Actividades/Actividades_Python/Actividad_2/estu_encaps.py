class Persona:
    def __init__(self, nombre, edad, genero):
        self.nombre = nombre
        self.edad = edad
        self.genero = genero
    
    def setNombre(self, nombre):
        self.nombre = nombre
    def setEdad(self, edad):
        self.edad = edad
    def setGenero(self, genero):
        self.genero = genero
    
    def getNombre(self):
        return self.nombre
    def getEdad(self):
        return self.edad
    def getGenero(self):
        return self.genero
    
    def imprimir_datos(self):
        print(f"Nombre : {self.nombre}")
        print(f"edad   : {self.edad}")
        print(f"genero : {self.genero}\n")
    
persona1= Persona("Yhammile",17,"femenino")
persona2= Persona("Anderson",23,"masculino")


persona1.imprimir_datos()
persona1.setNombre("Sofia")
persona1.imprimir_datos()
