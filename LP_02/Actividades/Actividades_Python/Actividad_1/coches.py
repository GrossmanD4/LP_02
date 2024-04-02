class Coches:
    def __init__(self, modelo, año, velocidad):
        self.modelo = modelo
        self.año = año
        self.velocidad = velocidad
    
    def acelerar(self):
        print(f"El coche {self.modelo} acelera a {self.velocidad}km")
    
    def frenar(self):
        print(f"El coche {self.modelo} frena\n")

coche1 = Coches("yaris","2009",160)
coche2 = Coches("supra","2001",200)

coche1.acelerar()
coche1.frenar()

coche2.acelerar()
coche2.frenar()