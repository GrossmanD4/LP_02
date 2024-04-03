import java.util.ArrayList;

// Colaboración entre clases libro y biblioteca

//class Libro {
//    public String getTitulo() {
//        return titulo;
//    }
//
//    public void setTitulo(String titulo) {
//        this.titulo = titulo;
//    }
//
//    public boolean isPrestado() {
//        return prestado;
//    }
//
//    public void setPrestado(boolean prestado) {
//        this.prestado = prestado;
//    }
//
//    public String titulo;
//    public boolean prestado;
//
//    public Libro(String titulo) {
//        this.titulo = titulo;
//        this.prestado = false;
//    }
//
//    public void prestar() {
//        prestado = true;
//    }
//
//    public void devolver() {
//        prestado = false;
//    }
//}
//
//class Biblioteca {
//    public void prestarLibro(Libro libro) {
//        libro.prestar();
//        System.out.println("Se prestó el libro: " + libro.getTitulo());
//    }
//}

//public class Actividad4 {
//    public static void main(String[] args) {
//        Libro miLibro = new Libro("Principito");
//        Biblioteca biblioteca = new Biblioteca();
//        biblioteca.prestarLibro(miLibro);
//        miLibro.devolver();
//    }
//}

// Colaboración entre clases factura y producto


//class Producto {
//    public String nombre;
//    public double precio;
//
//    public Producto(String nombre, double precio) {
//        this.nombre = nombre;
//        this.precio = precio;
//    }
//}
//
//class Factura {
//    public ArrayList<Producto> productos;
//
//    public Factura() {
//        productos = new ArrayList<>();
//    }
//
//    public void agregarProducto(Producto producto) {
//        productos.add(producto);
//    }
//
//    public double calcularTotal() {
//        double total = 0;
//        for (Producto producto : productos) {
//            total += producto.precio;
//        }
//        return total;
//    }
//}
//
//public class Actividad4 {
//    public static void main(String[] args) {
//        Producto producto1 = new Producto("Laptop", 1000.0);
//        Producto producto2 = new Producto("Mouse", 20.0);
//
//        Factura factura = new Factura();
//        factura.agregarProducto(producto1);
//        factura.agregarProducto(producto2);
//
//        System.out.println("Total de la factura: " + factura.calcularTotal());
//    }
//}


// Colaboración entre carro y rueda


//class Rueda {
//    private int tamano;
//
//    public Rueda(int tamano) {
//        this.tamano = tamano;
//    }
//
//    public int getTamano() {
//        return tamano;
//    }
//
//    public void setTamano(int tamano) {
//        this.tamano = tamano;
//    }
//}
//
//class Carro {
//    private Rueda rueda1;
//    private Rueda rueda2;
//    private Rueda rueda3;
//    private Rueda rueda4;
//
//    public Carro(Rueda rueda1, Rueda rueda2, Rueda rueda3, Rueda rueda4) {
//        this.rueda1 = rueda1;
//        this.rueda2 = rueda2;
//        this.rueda3 = rueda3;
//        this.rueda4 = rueda4;
//    }
//
//    public void mover() {
//        System.out.println("El carro se está moviendo");
//    }
//
//    public void cambiarRueda(int numeroRueda, Rueda nuevaRueda) {
//        switch (numeroRueda) {
//            case 1:
//                this.rueda1 = nuevaRueda;
//                break;
//            case 2:
//                this.rueda2 = nuevaRueda;
//                break;
//            case 3:
//                this.rueda3 = nuevaRueda;
//                break;
//            case 4:
//                this.rueda4 = nuevaRueda;
//                break;
//            default:
//                System.out.println("Número de rueda inválido");
//        }
//    }
//}


// Colaboración entre tienda y cliente


//class Producto {
//    public String nombre;
//    public double precio;
//
//    public Producto(String nombre, double precio) {
//        this.nombre = nombre;
//        this.precio = precio;
//    }
//}
//
//class Cliente {
//    private ArrayList<Producto> listaCompras;
//
//    public Cliente() {
//        this.listaCompras = new ArrayList<>();
//    }
//
//    public void agregarProducto(Producto producto) {
//        this.listaCompras.add(producto);
//    }
//
//    public void pagar() {
//        System.out.println("El cliente ha pagado la cuenta");
//        this.listaCompras.clear();
//    }
//
//    public ArrayList<Producto> getListaCompras() {
//        return this.listaCompras;
//    }
//}
//
//class Tienda {
//    private ArrayList<Producto> productosDisponibles;
//    private ArrayList<Cliente> comprasClientes;
//
//    public Tienda() {
//        this.productosDisponibles = new ArrayList<>();
//        this.comprasClientes = new ArrayList<>();
//    }
//
//    public void agregarProducto(Producto producto) {
//        this.productosDisponibles.add(producto);
//    }
//
//    public void agregarCompraCliente(Cliente cliente) {
//        this.comprasClientes.add(cliente);
//    }
//
//    public ArrayList<Producto> getProductosDisponibles() {
//        return this.productosDisponibles;
//    }
//
//    public ArrayList<Cliente> getComprasClientes() {
//        return this.comprasClientes;
//    }
//}

/*
 Preguntas:
 a) ¿Cómo se crea una clase de tienda?

 Primero se crea la clase Producto con los atributos nombre y precio, luego se crea la clase Cliente con un
 ArrayList de productos, luego se crea la clase Tienda con dos ArrayLists, uno de productos disponibles y otro
 de compras de clientes.

 b) ¿Cómo se crea una clase de cliente?

 Como la primera pregunta hay que crear los atributos de la clase Cliente, luego se crea el constructor de la clase

 c) ¿Cómo se utilizan objetos de la clase de producto como elementos de una lista?

 Se crea un ArrayList de productos en la clase Cliente y se agregan productos a la lista con el método agregarProducto.

 d) ¿Cómo se agregan elementos a una lista?

 Se utiliza el método add de la clase ArrayList para agregar elementos a la lista.
*/

