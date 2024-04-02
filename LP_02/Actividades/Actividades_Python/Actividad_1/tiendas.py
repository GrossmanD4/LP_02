class Tiendas:
    def __init__(self, nombre, direccion, tipo):
        self.nombre = nombre
        self.direccion = direccion
        self.tipo = tipo
        self.productos = []
    
    def vender(self, producto):
        if producto in self.productos:
            print(f"Venta realizada: {producto}")
        else:
            print(f"Producto no disponible en la tienda {self.nombre}\n")

    def agregarProductos(self, producto):
        self.productos.append(producto)
        print(f"Producto agragado al carrito {self.nombre}\n")
    
tienda1 = Tiendas("Marisielo","Jr Jilio Ochoa ","Minimarked")
tienda2 = Tiendas("Panditas","Av Arequipa","Supermecado")

tienda1.agregarProductos("Avena")
tienda1.vender("Leche")

tienda2.agregarProductos("Leche")
tienda2.vender("Leche")