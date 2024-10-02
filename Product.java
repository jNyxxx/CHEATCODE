public class Product{
   private String productId;
   private String productName;
   private int quantity;
   private double price;   
   
   public Product(String productId, String productName, int quantity, double price){
       this.productId = productId;
       this.productName = productName;
       this.quantity = quantity;
       this.price = price;
}
   public String getProductId(){
      return productId;
      }
   public String getProductName(){
      return productName;
      }
   public int getQuantity(){
      return quantity;
      }
   public void setQuantity(int quantity){
        if(quantity >= 0){
      this.quantity = quantity;
        } else
        throw new InvalidQuantityException("Quantity cannot be negative.");
   }
   public double getPrice(){
      return price;
      }
    }