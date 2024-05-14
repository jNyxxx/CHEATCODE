/* Author: Baran, Junex Glenn A.
 * Date: May 8, 2024
 */
public class ReverseOrder {
    public static void main(String[] args) {
        int[] val = {0, 1, 2, 3}; 
        int temp;

        // Print the original array
        System.out.println("Original Array: " 
            + val[0] + " " + val[1] + " " + val[2] + " " + val[3]);

        // Reverse the order of the numbers in the array
        for (int i = 0; i < val.length / 2; i++) { // Loop through the first half of the array
            temp = val[i];                // Store the current element in temp
            val[i] = val[val.length - 1 - i]; // Swap the element with the corresponding element from the end
            val[val.length - 1 - i] = temp; // Move the value in temp to the corresponding position from the end
        }

        // Print the reversed array
        System.out.println("Reversed Array: " 
            + val[0] + " " + val[1] + " " + val[2] + " " + val[3]);
    }
}
