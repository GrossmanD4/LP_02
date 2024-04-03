//class Persona {
//    private String nombre;
//    private int edad;
//    private char genero;
//
//    public Persona(String nombre, int edad, char genero) {
//        this.nombre = nombre;
//        this.edad = edad;
//        this.genero = genero;
//    }
//
//    // Métodos get
//    public String getNombre() {
//        return nombre;
//    }
//
//    public int getEdad() {
//        return edad;
//    }
//
//    public char getGenero() {
//        return genero;
//    }
//
//    // Métodos set
//    public void setNombre(String nuevoNombre) {
//        nombre = nuevoNombre;
//    }
//
//    public void setEdad(int nuevaEdad) {
//        if (nuevaEdad >= 0) {
//            edad = nuevaEdad;
//        }
//    }
//
//    public void setGenero(char nuevoGenero) {
//        genero = nuevoGenero;
//    }
//}
//
////// Ejemplo de uso:
////public class Actividad2
////{
////    public static void main(String[] args) {
////        Persona persona1 = new Persona("Ana", 30, 'F');
////        System.out.println(persona1.getNombre()); // Recuperar nombre
////        persona1.setEdad(31); // Actualizar edad
////    }
////}
//
//
//class CuentaBancaria {
//    private double saldo;
//    private String numeroCuenta;
//
//    public CuentaBancaria(String numeroCuenta) {
//        this.numeroCuenta = numeroCuenta;
//        this.saldo = 0.0;
//    }
//
//    public double getSaldo() {
//        return saldo;
//    }
//
//    public void setSaldo(double nuevoSaldo) {
//        if (nuevoSaldo >= 0) {
//            saldo = nuevoSaldo;
//        }
//    }
//
//    public String getNumeroCuenta() {
//        return numeroCuenta;
//    }
//
//    public void setNumeroCuenta(String numeroCuenta) {
//        this.numeroCuenta = numeroCuenta;
//    }
//}
//
//// Ejemplo de Cuenta:
////public class Actividad2 {
////    public static void main(String[] args) {
////        CuentaBancaria cuenta1 = new CuentaBancaria("123456");
////        cuenta1.setSaldo(1000.0); // Actualizar saldo
////        System.out.println("Saldo actual: " + cuenta1.getSaldo());
////    }
////}
//
//
//class Libro {
//    private String titulo;
//    private String autor;
//    private String genero;
//
//    public Libro(String titulo, String autor, String genero) {
//        this.titulo = titulo;
//        this.autor = autor;
//        this.genero = genero;
//    }
//
//    public String getTitulo() {
//        return titulo;
//    }
//
//    public void setTitulo(String titulo) {
//        this.titulo = titulo;
//    }
//
//    public String getAutor() {
//        return autor;
//    }
//
//    public void setAutor(String autor) {
//        this.autor = autor;
//    }
//
//    public String getGenero() {
//        return genero;
//    }
//
//    public void setGenero(String genero) {
//        this.genero = genero;
//    }
//}
//
////// Ejemplo de libro:
////public class Actividad2 {
////    public static void main(String[] args) {
////        Libro libro1 = new Libro("Cien años de soledad", "Gabriel García Márquez", "Realismo mágico");
////        System.out.println("Título: " + libro1.getTitulo());
////        libro1.setAutor("Gabo"); // Actualizar autor
////    }
////}
//
//
//class Factura {
//    private int numeroFactura;
//    private String fechaEmision;
//    private double monto;
//
//    public Factura(int numeroFactura, String fechaEmision, double monto) {
//        this.numeroFactura = numeroFactura;
//        this.fechaEmision = fechaEmision;
//        this.monto = monto;
//    }
//
//    public int getNumeroFactura() {
//        return numeroFactura;
//    }
//
//    public void setNumeroFactura(int numeroFactura) {
//        this.numeroFactura = numeroFactura;
//    }
//
//    public String getFechaEmision() {
//        return fechaEmision;
//    }
//
//    public void setFechaEmision(String fechaEmision) {
//        this.fechaEmision = fechaEmision;
//    }
//
//    public double getMonto() {
//        return monto;
//    }
//
//    public void setMonto(double monto) {
//        this.monto = monto;
//    }
//}
//
////// Ejemplo de Factura:
////public class Actividad2 {
////    public static void main(String[] args) {
////        Factura factura1 = new Factura(1001, "27/03/2024", 500.0);
////        System.out.println("Número de factura: " + factura1.getNumeroFactura());
////        factura1.setMonto(550.0); // Actualizar monto
////    }
////}
//
//
