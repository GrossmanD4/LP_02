class Animales:
    def __init__(self, nombre, edad, tipo):
        self.nombre = nombre
        self.edad = edad
        self.tipo = tipo
    
    def alimentar(self):
        print(f"{self.nombre} esta siendo alimentado")
    
    def hacerSonido(self):
        if self.tipo == "perro":
            print(f"¡Gua!\n")
        elif self.tipo == "gato":
            print(f"¡Miau!\n")
        elif self.tipo == "gallina":
            print(f"¡Co, co, co!\n")


perro = Animales("Lucas",4,"perro")
gato = Animales("Nekito",7,"gato")
gallina = Animales("Clara",1,"gallina")

perro.alimentar()
perro.hacerSonido()

gallina.alimentar()
gallina.hacerSonido()

gato.alimentar()
gato.hacerSonido()