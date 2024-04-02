class Carro:
    def __init__(self, nombre="Anonymous", velocidad=0.0):
        self.nombre = nombre
        self.velocidad = velocidad

    def avanzar(self, tiempo=0.0):
        return self.velocidad * tiempo

    # Getter y Setter para nombre
    def getNombre(self):
        return self.nombre

    def setNombre(self, nombre):
        self.nombre = nombre

    # Getter y Setter para velocidad
    def getVelocidad(self):
        return self.velocidad

    def setVelocidad(self, velocidad):
        self.velocidad = velocidad

class Carrera:
    def __init__(self, largo=100, nivelbot=1):
        self.distanciaPista = largo
        self.bot = None
        self.CreacionBot(nivelbot)

    def CreacionBot(self, dificultad):
        self.bot = Carro("pollo", dificultad)

    def inicioCarrera(self, PJ):
        tiempo = 0
        momento = True

        while PJ.avanzar(tiempo) <= self.distanciaPista or self.bot.avanzar(tiempo) <= self.distanciaPista:
            tiempo += 1

            if PJ.avanzar(tiempo) > self.distanciaPista / 2 and momento:
                print("El jugador", PJ.getNombre(), "está a la mitad de la pista")
                momento = False

        if PJ.avanzar(tiempo) > self.bot.avanzar(tiempo):
            print("El jugador", PJ.getNombre(), "ha ganado.")
        else:
            print("El bot", self.bot.getNombre(), "ha ganado.")

j1 = Carro("FRANCESCO",2.1)

carrera_1 = Carrera(100, 2)

carrera_1.inicioCarrera(j1)
