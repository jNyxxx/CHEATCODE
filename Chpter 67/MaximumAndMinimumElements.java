/* Author: Baran, Junex Glenn A.
 * Date: May 13, 2024
 */
public class MaximumAndMinimumElements {
    public static void main(String[] args) {
        // 2D array containing integer data
        int[][] data = {
            {3, 2, 5},
            {1, 4, 4, 8, 13},
            {9, 1, 0, 2},
            {0, 2, 6, 3, -1, -8}
        };
        
        // Initialize max and min with the first element of the array
        int max = data[0][0], min = data[0][0];
        
        // Find the minimum and maximum values in the array
        for (int row = 0; row < data.length; row++) {
            for (int col = 0; col < data[row].length; col++) {
                // Update max if a larger element is found
                if (data[row][col] > max) 
                    max = data[row][col];
                
                // Update min if a smaller element is found
                if (data[row][col] < min) 
                    min = data[row][col];
            }
        }
        
        // Print out the maximum and minimum values
        System.out.println("Maximum value: " + max);
        System.out.println("Minimum value: " + min);
    }
}
