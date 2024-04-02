class Avion:
    def __init__(self, modelo, combustible, consumo_combustible):
        self.modelo = modelo
        self.combustible = combustible
        self.consumo_combustible = consumo_combustible
    
    def capacidad_de_vuelo_combustible(self, tiempo_de_vuelo):
        combustible_necesario = tiempo_de_vuelo * self.consumo_combustible
        return combustible_necesario <= self.combustible

class Mision:
    def __init__(self, destino, duracion, tripulacion):
        self.destino = destino
        self.duracion = duracion
        self.tripulacion = tripulacion

    def planificar_mision(self, avion):
        print(f"Combustible mínimo requerido: {self.duracion * avion.consumo_combustible}")
        if avion.capacidad_de_vuelo_combustible(self.duracion):
            print("Planificación de Misión exitosa ")
            print(f"Cantidad de combustible en el tanque: {avion.combustible}")
        else:
            print("Combustible insuficiente para el tiempo de vuelo en la misión")


avion = Avion("Airbus 777", 2000, 500)
mision = Mision("Lima", 5, 100)

mision.planificar_mision(avion)
