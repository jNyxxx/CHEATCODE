/* Author: Baran, Junex Glenn A.
 * Date: May 13, 2024
 */
public class LargestElements {
    public static void main(String[] args) {
        // Variable declarations and definitions
        int[][] data = { {3, 2, 5},
                         {1, 4, 4, 8, 13},
                         {9, 1, 0, 2},
                         {0, 2, 6, 3, -1, -8} };
        int max;
        
        // Driver code
        for (int row = 0; row < data.length; ++row) { 
            // Iterate each element in the multidimensional array to find the maximum of each row
            max = data[row][0]; // Initialize max as the first element of the row
            for (int col = 1; col < data[row].length; ++col) { // Start from the second element
                if (data[row][col] > max) {
                    max = data[row][col];
                }
            }
            // Output
            System.out.println("Largest element in row " + row + ": " + max);
        }
    }
}
