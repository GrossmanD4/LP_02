class Factura:
    def __init__(self, numFactura, emision, monto):
        self.numFactura = numFactura
        self.emision = emision
        self.monto = monto
        self.arreglo_de_facturas = []
    
    def setNumFactura(self, numFactura):
        self.numFactura = numFactura
    def setEmision(self, emision):
        self.emision = emision
    def setMonto(self, monto):
        self.monto = monto
    
    def getNumFactura(self):
        return self.numFactura
    def getEmision(self):
        return self.emision
    def getMonto(self):
        return self.monto
    
factura1 = Factura("20010010001","22-06-2020",5050)
factura2 = Factura("20010040002","29-03-2024",1200)

# Recuperar informacion
print("  Informacion")
print(f"Numero de factura: {factura1.getNumFactura()}\n"
      f"Fecha de emision: {factura1.getEmision()}\n"
      f"Monto: {factura1.getMonto()}\n")

# Actualizar informacion
factura2.setEmision("28-03-2024")
factura2.setMonto(3020.99)
print("  Informacion")
print(f"Numero de factura: {factura2.getNumFactura()}\n"
      f"Fecha de emision: {factura2.getEmision()}\n"
      f"Monto: {factura2.getMonto()}\n")
