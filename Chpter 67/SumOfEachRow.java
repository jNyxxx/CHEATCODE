/* Author: Baran, Junex Glenn A.
 * Date: May 12, 2024
 */
public class SumOfEachRow {
    public static void main (String[] args) {
        int[][] data = {{3, 2, 5},
                        {1, 4, 4, 8, 13},
                        {9, 1, 0, 2},
                        {0, 2, 6, 3, -1, -8} };
        int sum;
        
        // Compute the sum
        for (int row = 0; row < data.length; row++) {
            sum = 0;
            for (int col = 0; col < data[row].length ; col++) {
                sum += data[row][col];
            }
            // Print the sum for each row
            System.out.println("Sum of row " + row + ": " + sum);
        }
    }
}