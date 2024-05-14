/* Author: Baran, Junex Glenn A.
 * Date: May 10, 2024
 */class Weight {
    private int[] data; // Array to hold the data

    // Constructor that initializes the data array with the values from the init array
    public Weight(int[] init) {
        data = new int[init.length]; // Create a new array of the same length as init
        
        for (int i = 0; i < init.length; i++) { // Loop through each element in init
            data[i] = init[i]; // Copy each element from init to data
        } 
    }

    // Method to compute and return the average of the data array
    public int computeAverage() {
        int sum = 0; // Initialize sum to 0
        
        for (int i = 0; i < data.length; i++) { // Loop through each element in data
            sum += data[i]; // Add each element to sum
        }
        
        return sum / data.length; // Return the average using integer division
    }
}

public class Average {
    public static void main(String[] args) {
        // Initialize an array with given values
        int[] weights = {
            98, 99, 98, 99, 100, 101, 102, 100, 104, 105,
            105, 106, 105, 103, 104, 103, 105, 106, 107, 106,
            105, 105, 104, 104, 103, 102, 102, 101, 100, 102
        };
        
        Weight weightData = new Weight(weights); // Create a Weight object with the weights array
        
        int average = weightData.computeAverage(); // Compute the average
        
        // Print out the average
        System.out.println("Average = " + average);
    }
}
