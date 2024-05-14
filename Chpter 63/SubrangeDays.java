/* Author: Baran, Junex Glenn A.
 * Date: May 12, 2024
 */
class Weight {
    private int[] data;
    
    // Constructor to initialize data array
    public Weight(int[] init) {
        data = new int[init.length];
        
        // Copy values from init to data
        for (int j = 0; j < init.length; j++) {
            data[j] = init[j];
        } 
    }

    // Method to compute average of a subrange of days
    public int subAverage(int start, int end) {
        int sum = 0;

        // Calculate sum of elements between start and end indices (inclusive)
        for (int i = start; i <= end; i++) {
            sum += data[i];
        }

        // Calculate and return average
        return sum / (end - start + 1); // Add 1 because the range is inclusive
    }
}

public class SubrangeDays {
    public static void main(String[] args) {
        // Variable declaration
        int[] values = {
            98,  99,  98,  99, 100, 101, 102, 100, 104, 105,
            105, 106, 105, 103, 104, 103, 105, 106, 107, 106,
            105, 105, 104, 104, 103, 102, 102, 101, 100, 102
        };
        Weight june = new Weight(values);
        int firstHalf, secondHalf;
        
        // Determine the midpoint of the month
        int midpoint = values.length / 2;

        // Calculate average for the first half of the month
        firstHalf = june.subAverage(0, midpoint);

        // Calculate average for the second half of the month
        secondHalf = june.subAverage(midpoint, values.length - 1);

        // Print the average of the first and second halves, as well as the difference between them
        System.out.println("Average of first half = " + firstHalf);
        System.out.println("Average of second half = " + secondHalf);
        System.out.println("Difference between first half and second half = " + Math.abs(firstHalf - secondHalf));
    }
}
