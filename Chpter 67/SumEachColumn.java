/* Author: Baran, Junex Glenn A.
 * Date: May 14, 2024
 */
public class SumEachColumn {
    public static void main(String[] args) {
        // Define the 2D array with integer values
        int[][] matrix = { {3, 2, 5},
                           {1, 4, 4, 8, 13},
                           {9, 1, 0, 2},
                           {0, 2, 6, 3, -1, -8} };

        int sum; // Variable to store the sum of each column
        int maxColumns = 0; // Variable to store the maximum number of columns in any row
        
        // First pass to determine the maximum number of elements
        for (int row = 0; row < matrix.length; ++row) {
            if (matrix[row].length > maxColumns) {
                maxColumns = matrix[row].length;
            }
        }
        
        // Adding up the rows and columns
        for (int column = 0; column < maxColumns; ++column) {
            sum = 0; // Initialize sum for each column
            for (int row = 0; row < matrix.length; ++row) {
                // Check if the current row and column exist to prevent out of bounds error
                if (row < matrix.length && column < matrix[row].length) {
                    sum += matrix[row][column]; // Add element to the sum
                }
            }
            // Output the sum of the current column
            System.out.println("Sum of column " + (column + 1) + " is " + sum);
        }
    }
}
