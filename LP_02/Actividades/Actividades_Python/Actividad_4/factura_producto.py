class Producto:
    def __init__(self, nombre, precio, cantidad):
        self.nombre = nombre
        self.precio = precio
        self.cantidad = cantidad
    
    def establecerPrecio(self, precio):
        self.precio = precio
    def establecerCantidad(self, cantidad):
        self.cantidad = cantidad

class Factura:
    def __init__(self, cliente):
        self.cliente = cliente
        self.productos = []
    
    def agregar_producto(self, producto):
        self.productos.append(producto)
        print(f"Producto {producto.nombre} agregad a la factura")
    
    def imprimirFactura(self):
        total_factura = 0
        total_producto = 0
        print(f"Factura a nombre de '{self.cliente}'")
        print(f"    Productos:")
        for producto in self.productos:
            total_producto = producto.precio * producto.cantidad
            total_factura += total_producto
            print(f"    -Nombre: {producto.cantidad}{producto.nombre} -Precio: {producto.precio*producto.cantidad}")
        print(f"Total de la factura: {total_factura}")

producto1 = Producto("Televisor",1200,1)
producto2 = Producto("Radio",75,3)

factura1 = Factura("Yhosfer")
factura1.agregar_producto(producto1)
factura1.agregar_producto(producto2)
factura1.imprimirFactura()