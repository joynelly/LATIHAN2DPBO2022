public class Hardware extends Product{
    
    private String brand;
    private String model;

    public Hardware(){
    }

    public Hardware(String b, String m){
        this.brand = b;
        this.model = m;
    }
    
    public String getBrand() {
        return brand;
    }
    
    public String getModel() {
        return model;
    }
    
    public void setModel(String model) {
        this.model = model;
    }
    
    public void setBrand(String brand) {
        this.brand = brand;
    }

    public void showHardware(){
        System.out.println("Brand         : " + brand);
        System.out.println("Model         : " + model);
    }

    
}
