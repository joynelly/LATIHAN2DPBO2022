public class Memory extends Hardware{
    
    private String frequency;
    private String memorySize;
    private String supportsCuda;
    
    public Memory(){
    }

    public Memory(String f, String ms, String sc){
        this.frequency = f;
        this.memorySize = ms;
        this.supportsCuda = sc;
    }

    public String getFrequency() {
        return frequency;
    }
    
    public String getSupportsCuda() {
        return supportsCuda;
    }
    
    public void setSupportsCuda(String supportsCuda) {
        this.supportsCuda = supportsCuda;
    }
    
    public String getMemorySize() {
        return memorySize;
    }
    
    public void setMemorySize(String memorySize) {
        this.memorySize = memorySize;
    }
    
    public void setFrequency(String frequency) {
        this.frequency = frequency;
    }

    public void showMemory(){
        System.out.println("Frequency     : " + frequency);
        System.out.println("Memory Size   : " + memorySize);
        System.out.println("Supports Cuda : " + supportsCuda);
    }

    
}
