class NodeList {
    private Node last;
    private int counter;

    // Constructor
    public NodeList() {
        last = null;
        counter = 0;
    }

    // Check if the list is empty
    public boolean isEmpty() {
        return counter == 0;
    }

    
    public boolean add(Node item) {
        if (isEmpty()) {
            last = item;
            item.next = last; 
        } else {
            Node current = last;
            while (current.next != last) {
                current = current.next;
            }
            current.next = item;
        }
        item.next = last; 
        counter++;
        return true;
    }

    
    public boolean delete(int location) {
        if (isEmpty() || location < 0 || location >= counter) {
            return false;
        }

        Node current = last;
        Node previous = null;

        if (location == 0) {
            if (counter == 1) {
                last = null;
            } else {
                while (current.next != last) {
                    current = current.next;
                }
                previous = current;
                current = last;
                last = last.next; 
                previous.next = last; 
            }
        } else {
            for (int i = 0; i < location; i++) {
                previous = current;
                current = current.next;
            }
            previous.next = current.next;
            if (current == last) {
                last = previous;
            }
        }  
        while(current == null){
         System.out.println("No node found at location " + location);
        }
         
        counter--;
        return true;
    }

      
    public void display() {
        if (isEmpty()) {
            System.out.println("List is empty.");
            return;
        }
        Node current = last;
        do {
            System.out.println(current.data + " ");
            current = current.next;
        } while (current != last);
        System.out.println();
    }
}