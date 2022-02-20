from Product import Product

class Hardware(Product):

    #konstruktor
    def __init__(self):
        self.brand = ""
        self.model = ""

    #membuat setter dan getter
    def setBrand(self, brand):
        self.brand = brand
    
    def getBrand(self):
        return self.brand

    def setModel(self, model):
        self.model = model
    
    def getModel(self):
        return self.model

    # Menampilkan isi kelas
    def showHardware(self):
        print("Brand         : " + str(self.brand))
        print("Model         : " + str(self.model))