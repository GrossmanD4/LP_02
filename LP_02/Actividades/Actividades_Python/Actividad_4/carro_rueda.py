class Rueda:
    def __init__(self, tamaño):
        self.tamaño = tamaño

class Coche:
    def __init__(self, marca, año, velocidad):
        self.modelo = marca
        self.año = año
        self.velocidad = velocidad
        self.rueda1 = Rueda(16)
        self.rueda2 = Rueda(16)
        self.rueda3 = Rueda(16)
        self.rueda4 = Rueda(16)
    
    def acelerar(self):
        print(f"El coche {self.marca} acelera a {self.velocidad}km")
    
    def frenar(self):
        print(f"El coche {self.marca} frena\n")

    def cambiar_ruedas(self, tamaño):
        self.rueda1 = Rueda(tamaño)
        self.rueda2 = Rueda(tamaño)
        self.rueda3 = Rueda(tamaño)
        self.rueda4 = Rueda(tamaño)
        print(f"Se cambiaron las ruedas\n"
              f"    Modelo: {self.modelo}\n"
              f"    nuevo tamaño: {tamaño} pulgadas")


coche2 = Coche("supra","2001",200)

print("Cambio de ruedas")

coche2.cambiar_ruedas(17)