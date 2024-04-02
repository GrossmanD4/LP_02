class Producto:
    def __init__(self, nombre="NI pincho", precio=0, cantidad=1):
        self.nombre = nombre
        self.precio = precio
        self.cantidad = cantidad

    def mostrarProducto(self):
        print("{:<20} {:<20} {:<20}".format(self.nombre, self.precio, self.cantidad))

    def restarCantidad(self, cantidad=1):
        self.cantidad -= cantidad


class Inventario:
    def __init__(self, ProductosDisponibles=[], ProductosAgotados=[]):
        self.listaDisponible = ProductosDisponibles
        self.listaAgotado = ProductosAgotados

    def agregarProducto(self, P):
        self.listaDisponible.append(P)

    def actualizarLista(self):
        nuevaListaDisponible = []

        for p in self.listaDisponible:
            if p.cantidad > 0:
                nuevaListaDisponible.append(p)
            else:
                self.listaAgotado.append(p)

        self.listaDisponible = nuevaListaDisponible

    def agregarProductos(self, lista):
        self.actualizarLista()
        self.listaDisponible.extend(lista)

    def mostrarProductos(self):
        self.actualizarLista()
        print("Productos Disponibles")
        for producto in self.listaDisponible:
            producto.mostrarProducto()

    def pedidoProducto(self, solicitud):
        for producto in self.listaDisponible:
            if producto.nombre == solicitud:
                producto.restarCantidad()
                return producto
        raise RuntimeError("No se encontró el producto")

    def facturaCliente(self, solicitados):
        print("Productos solicitados")
        for producto in solicitados:
            producto.mostrarProducto()


amazon = Inventario()
productoSolicitados = []
listaProductos = [
    Producto("Coca Cola", 2.5, 15),
    Producto("Pepsi", 3.5, 1),
    Producto("Sprite", 2.5, 10),
]

amazon.agregarProductos(listaProductos)

while True:
    amazon.mostrarProductos()
    opc = input("Ingrese un producto a adquirir (o 'salir' para terminar):\n")

    if opc == "salir":
        break

    producto = None
    for p in amazon.listaDisponible:
        if p.nombre == opc:
            producto = p
            break

    if producto:
        productoSolicitados.append(producto)
        producto.restarCantidad()
    else:
        print("El producto no está disponible.")


amazon.facturaCliente(productoSolicitados)
