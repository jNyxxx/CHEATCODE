* Author: Baran, Junex Glenn A.
 * Date: May 14, 2024
 */
public class ReversalOfElements {
    // Define the matrix with integer values
    static int[][] matrix = {{3, 2, 5},
                             {1, 4, 4, 8, 13},
                             {9, 1, 0, 2},
                             {0, 2, 6, 3, -1, 8},
                             {-1, -2, -3, 4, 5, 45},
                             {56},
                             {0, 1, 2, 3, 4, 5, 6, 7}};

    // Method to print the matrix
    private static void printMatrix() {
        // Loop through each row of the matrix
        for (int row = 0; row < matrix.length; row++) {
            // Loop through each element of the current row
            for (int col = 0; col < matrix[row].length - 1; col++)
                // Print the element followed by a comma
                System.out.print(matrix[row][col] + ", ");
            // Print the last element of the row
            System.out.println(matrix[row][matrix[row].length - 1]);
        }
    }

    // Main method
    public static void main(String[] args) {
        // Print the initial matrix
        System.out.println("Initial Array:");
        printMatrix();
        System.out.println();

        // Reverse each row of the matrix
        for (int row = 0; row < matrix.length; row++) {
            // Define start and end indices for swapping
            int start = 0;
            int end = matrix[row].length - 1;
            // Swap elements until start and end meet
            while (start < end) {
                // Swap elements at start and end indices
                int temp = matrix[row][start];
                matrix[row][start] = matrix[row][end];
                matrix[row][end] = temp;
                // Move start and end pointers towards each other
                start++;
                end--;
            }
        }
        // Print the reversed matrix
        System.out.println("Reversed Array:");
        printMatrix();
    }
}
