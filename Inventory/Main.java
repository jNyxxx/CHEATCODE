public class Main {
    public static void main(String[] args) {
        Inventory inventory = new Inventory();

        System.out.println("\nCase 1 :");
        PerishableProduct apple = new PerishableProduct("P001", "Apple", 50, 0.5, "2024-12-31");
        inventory.addProduct(apple);

        System.out.println("\nCase 2 : ");
        NonPerishableProduct rice = new NonPerishableProduct("NP001", "Rice", 200, 1.0, 365);
        inventory.addProduct(rice);

        System.out.println("\nCase 3 : ");
        apple.updateStock(30);

        System.out.println("\nCase 4 : ");
        try {
            apple.updateStock(30); // Total would be 110
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        System.out.println("\nCase 5 : ");
        try {
            inventory.removeProduct("P001");
        } catch (InsufficientStockException e) {
            System.out.println(e.getMessage());
        }

        System.out.println("\nCase 6 : ");
        try {
            apple.updateStock(-90); // Attempting to remove more than available
        } catch (InsufficientStockException e) {
            System.out.println(e.getMessage());
        }

        System.out.println("\nCase 7 : ");
        try {
            apple.setQuantity(-10);
        } catch (InvalidQuantityException e) {
            System.out.println(e.getMessage());
        }
    }
}
