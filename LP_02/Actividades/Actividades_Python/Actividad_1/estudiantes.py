class Estudiantes:
    def __init__(self, nombre, edad, grado):
        self.nombre = nombre
        self.edad = edad
        self.grado = grado
    
    def darExamen(self):
        print("Realizar Examen")
        print(f"Estudiante:  {self.nombre}")
        print(f"Grado     :  {self.grado}")

    def calificacion(self,nota):
        print(f"Estudiante:  {self.nombre}")
        print(f"Calificacion: {nota}")

estudi1 = Estudiantes("Ana Cecilia","20","4°")
estudi2 = Estudiantes("Anderson Quispe","23","5°")

estudi1.darExamen()
print("Resultado de Examen")
estudi1.calificacion(20)
print("- - - - - - - - - -")
estudi2.darExamen()
print("Resultado de Examen")
estudi2.calificacion(12)