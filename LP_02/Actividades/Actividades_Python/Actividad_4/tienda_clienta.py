class Producto:
    def __init__(self, nombre, precio):
        self.nombre = nombre
        self.precio = precio

class Tienda:
    def __init__(self, nombre):
        self.nombre = nombre
        self.productos_disponibles = []
        self.compras_clientes = []

    def agregarProductos(self, producto):
        self.productos_disponibles.append(producto)
        print(f"Producto agragado a la tienda: {self.nombre}")
    
    def mostrarProductos(self):
        print("Productos disponibles")
        for producto in self.productos_disponibles:
            print(f"    -{producto.nombre}\n"
                  f"    -precio: {producto.precio}\n")
    
    def agregar_compra(self, carrito):
        self.compras_clientes = carrito

    def mostrar_carrito_cliente(self):
        print(f"\nCarrito de cliente, tienda:{self.nombre}")
        for producto in self.compras_clientes:
            print(f"    -{producto[0].nombre}\n"
                  f"    -precio: {producto[0].precio}\n"
                  f"    -cantidad: {producto[1]}\n")
    
    def generarCoste(self):
        coste_total = 0
        for producto in self.compras_clientes:
            precio_productos = producto[0].precio * producto[1]
            coste_total += precio_productos
        return coste_total

class Cliente:
    def __init__(self, nombre):
        self.nombre = nombre
        self.lista_compras = []
    
    def agregar_producto(self, producto, cantidad):
        self.lista_compras.append((producto,cantidad))
        print(f"Produco {producto.nombre} añadido")
    
    def mostrarProductos(self):
        print("\nProductos en carrito")
        for producto in self.lista_compras:
            print(f"    -{producto[0].nombre}\n"
                  f"    -precio: {producto[0].precio}\n"
                  f"    -cantidad: {producto[1]}\n")
    
    def pagar_cuenta(self, tienda):
        pass

# Productos
producto1 = Producto("Televisor",1200)
producto2 = Producto("Lavadora",1500)
producto3 = Producto("Radio",75)
producto4 = Producto("Telefono",900)

# Tienda
tienda1 = Tienda("Electrodomesticos Y")
tienda1.agregarProductos(producto1)
tienda1.agregarProductos(producto2)
tienda1.agregarProductos(producto3)
tienda1.agregarProductos(producto4)
tienda1.mostrarProductos()

# Cliente
cliente1 = Cliente("Yhosfer")
cliente1.agregar_producto(producto1,2)
cliente1.agregar_producto(producto3,4)
cliente1.mostrarProductos()

tienda1.agregar_compra(cliente1.lista_compras)
tienda1.mostrar_carrito_cliente()

#cliente1.pagar_cuenta(tienda1)