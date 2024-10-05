public class TestNodeList {
    public static void main(String[] args) {
        NodeList nl = new NodeList();

     
        System.out.println("Adding nodes:");
        nl.add(new Node("HI CRUSH"));
        nl.add(new Node("EHEHEHEHEHEHE"));
        nl.add(new Node("MEWOE MEOW MEOW"));
        nl.display();
        
        nl.delete(1);
        nl.display();
        
        nl.delete(1);
        nl.display();
        
        nl.delete(0);
        nl.display();
        
        nl.add(new Node("555 TUNA GET TGT"));
        nl.display();
        
        nl.delete(0);
        nl.display();
        
    }
}