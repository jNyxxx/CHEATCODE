/* Author: Baran, Junex Glenn A.
 * Date: May 11, 2024
 */
class Weight {
    private int[] data;

    // Constructor
    public Weight(int[] init) {
        // Make data the same length as the array referenced by init.
        data = new int[init.length];

        // Copy values from the input array (init) to the data array.
        for (int j = 0; j < init.length; j++) {
            data[j] = init[j];
        }
    }

    // Convert the data array to a string representation
    public String toString() {
        StringBuilder result = new StringBuilder(); // Use StringBuilder for efficient string concatenation
        result.append("["); // Start the string with an opening bracket
        for (int i = 0; i < data.length; i++) {
            result.append(data[i]); // Append the current element to the result
            if (i < data.length - 1) { // If not the last element, append a comma and space
                result.append(", ");
            }
        }
        result.append("]"); // End the string with a closing bracket
        return result.toString(); // Convert StringBuilder to a string and return it
    }
}

public class Constructor {
    public static void main(String[] args) {
        // Initialize an array with given values
        int[] values = {
            98, 99, 98, 99, 100, 101, 102, 100, 104, 105,
            105, 106, 105, 103, 104, 103, 105, 106, 107, 106,
            105, 105, 104, 104, 103, 102, 102, 101, 100, 102
        };

        // Create a Weight object with the values array
        Weight june = new Weight(values);

        // Print the Weight object, which calls the toString method
        System.out.println(june);
    }
}
