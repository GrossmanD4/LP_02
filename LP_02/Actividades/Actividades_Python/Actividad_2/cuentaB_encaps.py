class Cuenta_Bancaria:
    def __init__(self, saldo, numCuenta):
        self.saldo = saldo
        self.numCuenta = numCuenta
        lista_de_cuentas = []
    
    def setSaldo(self, saldo):
        self.saldo = saldo
    def setNumCuenta(self, numCuenta):
        self.numCuenta = numCuenta
    
    def getSaldo(self):
        return self.saldo
    def getNumCuenta(self):
        return self.numCuenta
    
    def imprimir_datos(self):
        print(f"numero de cuenta:\n  {self.numCuenta}")
        print(f"saldo disponible:\n  {self.saldo}\n")
    
    def agregar_a_lista():
        pass
    
cuenta1 = Cuenta_Bancaria(1000,"102000001")
cuenta2 = Cuenta_Bancaria(500,"102000002")

cuenta2.setSaldo(1000)

cuenta1.imprimir_datos()
cuenta2.imprimir_datos()

