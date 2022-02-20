class Product():

    #private atribute
    __idProduct = ""
    __price = 0

    #constructor
    def __init__(self):
        self.__idProduct = ""
        self.__price = 0

    #membuat set dan get
    def setIdProduct(self, idP):
        self.__idProduct = idP

    def getIdProduct(self):
        return self.__idProduct
    
    def setPrice(self, p):
        self.__price = p
    
    def getPrice(self):
        return self.__price

    # Menampilkan atrubut kelas
    def showProduct(self):
        print("ID Product    : " + str(self.__idProduct))
        print("Price         : " + str(self.__price))