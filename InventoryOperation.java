import java.util.ArrayList;

abstract class InventoryOperation{
    public abstract void addProduct(Product product);
    public abstract void removeProduct(String productId);   
 }
 
 class Inventory extends InventoryOperation{
    private ArrayList <Product> prods = new ArrayList<>();
    
    @Override
    public void addProduct(Product product){
       prods.add(product);
       System.out.println("Product added: " + prods.get(prods.size()-1).getProductName() + " with quantity " + prods.get(prods.size()-1).getQuantity());
    }
    
    @Override
    public void removeProduct(String productId){
       for(Product p : prods){
          if (p.getProductId().equals(productId)){
             prods.remove(p);
             System.out.println("Product " + productId + " removed successfully.\r\n");
             break;
          }
       }
       
       
    }
 
 }