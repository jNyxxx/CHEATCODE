class PerishableProduct extends Product{
    private String expirationDate;
    
    public PerishableProduct(String productId, String productName, int quantity, double price, String expirationDate){
       super(productId, productName, quantity, price);
       this.expirationDate = expirationDate;
    }
    
    public String getExpirationDate(){
       return expirationDate;
    }
    public void setExpirationDate(String expirationDate){
       this.expirationDate = expirationDate;
    }
 
    public void updateStock(int amount){
        if (getQuantity() + amount < 0){
            throw new InsufficientStockException("Insufficient stock for product " + getProductName());
        }
       if (getQuantity() + amount > 100){
          throw new IllegalArgumentException("Cannot exceed the maximum quantity of 100.");   
       } else{
            setQuantity(getQuantity() + amount);
            System.out.println("Stock updated " + getProductName() + " new quantity is " + getQuantity());
       }
     }       
   }