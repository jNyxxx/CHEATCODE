class NonPerishableProduct extends Product{
    private int shelfLife;
    
    public NonPerishableProduct(String productId, String productName, int quantity, double price, int shelfLife){
       super(productId, productName, quantity, price);
       this.shelfLife = shelfLife;
 }
 
    public int getShelfLife(){
       return shelfLife;
    }
    
    public void setShelfLife(int shelfLife){
       this.shelfLife = shelfLife;
    }
 }