import java.util.Scanner;

// Creacion de objetos

//public class Actividad3 {
//    public static void main(String[] args) {
//        // Creación de objeto persona
//        Persona persona1 = new Persona("Juan", 25, 'M');
//        System.out.println(persona1.getNombre());
//        persona1.setEdad(26);
//        System.out.println(persona1.getEdad());
//
//        // Creación de objeto cuenta bancaria
//        CuentaBancaria cuenta1 = new CuentaBancaria("123456");
//        System.out.println(cuenta1.getNumeroCuenta());
//        cuenta1.setSaldo(1000.0);
//        System.out.println(cuenta1.getSaldo());
//
//        // Creación de objeto libro
//        Libro libro1 = new Libro("Cien años de soledad", "Gabriel García Márquez", "Realismo mágico");
//        System.out.println(libro1.getTitulo());
//        libro1.setAutor("Gabriel García Márquez");
//        System.out.println(libro1.getAutor());
//
//        // Creacion de objeto factura
//        Factura factura1 = new Factura(1, "2022-01-01", 100.0);
//        System.out.println(factura1.getNumeroFactura());
//        factura1.setMonto(200.0);
//        System.out.println(factura1.getMonto());
//
//    }
//}


// Creacion de arreglo de objetos

//public class Actividad3 {

//    static void imprimirPersonas(Persona[] personas) {
//        for (Persona persona : personas) {
//            System.out.println(persona.getNombre());
//            System.out.println(persona.getEdad());
//        }
//    }
//
//    public static void main(String[] args)
//    {
//        // Creación de un arreglo de personas
//        Persona[] personas = new Persona[2];
//        personas[0] = new Persona("Juan", 25, 'M');
//        personas[1] = new Persona("Ana", 22, 'F');
//
//
//        imprimirPersonas(personas);
//
//        // Modificar un objeto del arreglo
//        for (Persona persona : personas)
//        {
//            Scanner scanner = new Scanner(System.in);
//            System.out.println("Ingrese la nueva edad de " + persona.getNombre());
//            int nuevaEdad = scanner.nextInt();
//            persona.setEdad(nuevaEdad);
//        }
//
//        imprimirPersonas(personas);
//    }
//}


// Operaciones con objetos y arreglos de objetos

//public class Actividad3 {
//    public static void main(String[] args) {
//        Persona[] personas = new Persona[3];
//        personas[0] = new Persona("Juan", 25, 'M');
//        personas[1] = new Persona("Ana", 22, 'F');
//
//        // Agregar un nuevo objeto al arreglo
//        System.out.println("Ingrese el nombre de la nueva persona:");
//        Scanner scanner = new Scanner(System.in);
//        String nombre = scanner.nextLine();
//        System.out.println("Ingrese la edad de la nueva persona:");
//        int edad = scanner.nextInt();
//        System.out.println("Ingrese el género de la nueva persona:");
//        char genero = scanner.next().charAt(0);
//
//        personas[2] = new Persona(nombre, edad, genero);
//
//        // Iliminar un objeto del arreglo
//        System.out.println("Ingrese el índice de la persona a eliminar:");
//        int indice = scanner.nextInt();
//        personas[indice] = null;
//
//        // Modificar un objeto del arreglo
//        System.out.println("Ingrese el índice de la persona a modificar:");
//        indice = scanner.nextInt();
//        System.out.println("Ingrese la nueva edad de " + personas[indice].getNombre());
//        int nuevaEdad = scanner.nextInt();
//        personas[indice].setEdad(nuevaEdad);
//
//    }
//}


// Implementar de comparación de objetos

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
//
//    public boolean esIgual(Persona persona) {
//        return this.nombre.equals(persona.getNombre()) && this.edad == persona.getEdad() && this.genero == persona.getGenero();
//    }
//}
//
//public class Actividad3 {
//    public static void main(String[] args) {
//        Estudiante ana = new Estudiante("Ana", 21, 4);
//        Estudiante maria = new Estudiante("María", 22, 5);
//
//        if (ana.esIgual(maria)) {
//            System.out.println("Los estudiantes son iguales.");
//        } else {
//            System.out.println("Los estudiantes son diferentes.");
//        }
//    }
//}


