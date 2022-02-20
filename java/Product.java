public class Product {

    private int price;
    private String idProduct;

    public Product(){
    }

    public Product(int p, String idP){
        this.price = p;
        this.idProduct = idP;
    }

    public int getPrice() {
        return price;
    }

    public String getIdProduct() {
        return idProduct;
    }

    public void setIdProduct(String idProduct) {
        this.idProduct = idProduct;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public void showProduct() {
        System.out.println("ID Product    : " + idProduct);
        System.out.println("Price         : Rp. " + price);
    }
}