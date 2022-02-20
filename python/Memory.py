from Hardware import Hardware

class Memory(Hardware):

    #contructor
    def __init__(self):
        self.frequency = ""
        self.memorySize = ""
        self.SupportsCuda = ""
    
    def setFrequency(self, freq):
        self.frequency = freq

    def getFrequency(self):
        return self.frequency

    def setMemorySize(self, ms):
        self.memorySize = ms

    def getMemorySize(self):
        return self.memorySize

    def setSupportsCuda(self, sc):
        self.SupportsCuda = sc
    
    def getSupportsCuda(self):
        return self.SupportsCuda
    
    # Menampilkan isi Atribut
    def showMemory(self):
        print("Frequency     : " + str(self.frequency))
        print("Memory Size   : " + str(self.memorySize))
        print("Supports Cuda : " + str(self.SupportsCuda))