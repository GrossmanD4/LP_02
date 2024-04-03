//class Animal {
//    public String nombre;
//    public int edad;
//    public String tipo;
//
//    public Animal(String nombre, int edad, String tipo) {
//        this.nombre = nombre;
//        this.edad = edad;
//        this.tipo = tipo;
//    }
//
//    public void alimentar() {
//        System.out.println(nombre + " está siendo alimentado.");
//    }
//
//    public void hacerSonidos() {
//        System.out.println(nombre + " hace sonidos característicos.");
//    }
//}
//
//// Ejemplo de la clase animal
////public class Main {
////    public static void main(String[] args) {
////        Animal perro = new Animal("Firulais", 3, "Perro");
////        perro.alimentar();
////        perro.hacerSonidos();
////    }
////}
//
//
//class Coche {
//    public String modelo;
//    public int year;
//    public double velocidad;
//
//    public Coche(String modelo, int year) {
//        this.modelo = modelo;
//        this.year = year;
//        this.velocidad = 0.0;
//    }
//
//    public void acelerar(double incremento) {
//        velocidad += incremento;
//    }
//
//    public void frenar(double decremento) {
//        velocidad -= decremento;
//    }
//}
//
//// Ejemplo de coche:
////public class Main {
////    public static void main(String[] args) {
////        Coche miCoche = new Coche("Toyota Camry", 2022);
////        miCoche.acelerar(30.0);
////        miCoche.frenar(10.0);
////    }
////}
//
//class Estudiante {
//    public String nombre;
//    public int edad;
//
//    public int grado;
//
//    public Estudiante(String nombre, int edad, int grado) {
//        this.nombre = nombre;
//        this.edad = edad;
//        this.grado = grado;
//    }
//
//    public void tomarExamen() {
//        System.out.println(nombre + " está tomando un examen.");
//    }
//
//    public void calificar(int nota) {
//        System.out.println(nombre + " ha obtenido una nota de " + nota);
//    }
//}
//
//// Ejemplo de Estudiante:
////public class Main {
////    public static void main(String[] args) {
////        Estudiante juan = new Estudiante("Juan Pérez", 20, 3);
////        juan.tomarExamen();
////        juan.calificar(85);
////    }
////}
//
//class Tienda {
//    public String nombre;
//    public String direccion;
//    public String tipo;
//
//    public Tienda(String nombre, String direccion, String tipo) {
//        this.nombre = nombre;
//        this.direccion = direccion;
//        this.tipo = tipo;
//    }
//
//    public void venderProducto(String producto) {
//        System.out.println("Se vendió " + producto + " en " + nombre);
//    }
//
//    public void agregarProducto(String producto) {
//        System.out.println("Se agregó " + producto + " a " + nombre);
//    }
//}
//
//// Ejemplo de Tienda:
////public class Main {
////    public static void main(String[] args) {
////        Tienda miTienda = new Tienda("Supermercado ABC", "Av. Principal 123", "Supermercado");
////        miTienda.venderProducto("Leche");
////        miTienda.agregarProducto("Pan");
////    }
////}
