class Producto:
    def __init__(self, nombre, precio):
        self.nombre = nombre
        self.precio = precio

class Tienda:
    def __init__(self, nombre):
        self.nombre = nombre
        self.productos_disponibles = []
        self.compras_clientes = []

    def agregar_producto(self, producto):
        self.productos_disponibles.append(producto)
        print(f"Producto '{producto.nombre}' agregado a la tienda: {self.nombre}")

    def mostrarProductos(self):
        print(f"\nProductos disponibles en {self.nombre}")
        for producto in self.productos_disponibles:
            print(f"    -{producto.nombre}\n"
                  f"    -precio: {producto.precio}\n")
    
    def agregar_compras_cliente(self, cliente, lista_compras):
        compra = {'cliente': cliente.nombre, 'productos':lista_compras}  # 'cliente' en minúscula
        self.compras_clientes.append(compra)
        print(f"Compra de {cliente.nombre} registrada en la tienda")
    
    def mostrar_compras_clientes(self):
        print(f"Registro de compras en {self.nombre}")
        for compra in self.compras_clientes:
            cliente = compra['cliente']
            productos_adquiridos = compra['productos']
            print(f"Cliente:\n" 
                  f"    -{cliente}")
            print(f"Productos: ")
            for producto, cantidad in productos_adquiridos:
                print(f"    -{producto.nombre}x{cantidad}")

class Cliente:
    def __init__(self, nombre):
        self.nombre = nombre
        self.lista_compras = []

    def agregar_producto(self, producto, cantidad):
        self.lista_compras.append((producto, cantidad))
        print(f"Producto '{producto.nombre}' añadido al carrito de {self.nombre}.")

    def mostrarProductos(self):
        print("\nProductos en carrito")
        for producto in self.lista_compras:
            print(f"    -{producto[0].nombre}\n"
                  f"    -precio: {producto[0].precio}\n"
                  f"    -cantidad: {producto[1]}\n")

    def calcular_costo_total(self):
        coste_total = 0
        for producto, cantidad in self.lista_compras:
            precio_producto = producto.precio * cantidad
            coste_total += precio_producto
        return coste_total
    

# Productos
producto1 = Producto("Televisor", 1200)
producto2 = Producto("Lavadora", 1500)
producto3 = Producto("Radio", 75)
producto4 = Producto("Teléfono", 900)

# Tienda
tienda1 = Tienda("Electrodomésticos Y")
tienda1.agregar_producto(producto1)
tienda1.agregar_producto(producto2)
tienda1.agregar_producto(producto3)
tienda1.agregar_producto(producto4)
tienda1.mostrarProductos()

# Cliente
cliente1 = Cliente("Yhosfer")
cliente1.agregar_producto(producto1, 2)
cliente1.agregar_producto(producto3, 4)
cliente1.mostrarProductos()

costo_total = cliente1.calcular_costo_total()
print(f"Costo total de la compra de {cliente1.nombre}: ${costo_total}.")
print()

# Mostrar compras realizadas
tienda1.agregar_compras_cliente(cliente1,cliente1.lista_compras)
tienda1.mostrar_compras_clientes()
