class Factura:
    def __init__(self, numFactura, emision, monto):
        self.numFactura = numFactura
        self.emision = emision
        self.monto = monto
    
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
    
    
factura1 = Factura("1001","22-06-2020",5050)
factura2 = Factura("1002","22-06-2020",6050)

# Recuperar informacion
print("-- Informacion --")
print(f"Numero de factura: {factura1.getNumFactura()}\n"
      f"Fecha de emision: {factura1.getEmision()}\n"
      f"Monto: {factura1.getMonto()}\n")

# Actualizar informacion
factura2.setEmision("28-03-2024")
factura2.setMonto(3020.99)
print("-- Informacion Actalizada --")
print(f"Numero de factura: {factura2.getNumFactura()}\n"
      f"Fecha de emision: {factura2.getEmision()}\n"
      f"Monto: {factura2.getMonto()}\n")

# Crear un arreglo de facturas
arreglo_facturas = [factura1,factura2]
# Añadir mas facturas al arreglo
factura3 = Factura("1003","31-03-2024",3000)
arreglo_facturas.append(factura3)

# Ciclo para recorrer y manipular objetos
print("-- Facturas en el arreglo --")
for factura in arreglo_facturas:
    print(f"Numero de factura: {factura.getNumFactura()}\n"
      f"Fecha de emision: {factura.getEmision()}\n"
      f"Monto: {factura.getMonto()}\n")
    
# Modicar datos de objetos en el arreglo
arreglo_facturas[2].setMonto(5090)
arreglo_facturas[2].setEmision("02-04-2024")

# Eliminar factura del arreglo
arreglo_facturas.remove(factura2)
print("-- Arreglo actualizado --")
for factura in arreglo_facturas:
    print(f"Numero de factura: {factura.getNumFactura()}\n"
      f"Fecha de emision: {factura.getEmision()}\n"
      f"Monto: {factura.getMonto()}\n")
    
# Comparar de objetos
print(factura1.getNumFactura() == factura2.getNumFactura())
print(factura3.getMonto() != factura2.getMonto())
