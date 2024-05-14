/* Author: Baran, Junex Glenn A.
 * Date: May 7, 2024
 */
public class ThreeArrays {
    public static void main(String[] args) {
        int[] valA   = { 13, -22,  82,  17}; 
    int[] valB   = {-12,  24, -79, -13};
    int[] sum    = {  0,   0,   0,   0};
    
    // Add values from corresponding cells of valA and valB
    // and put the result in the corresponding cell of sum.
    sum[0] = valA[0] + valB[0]; // Add the values at index 0 of valA and valB and store in index 0 of sum
    sum[1] = valA[1] + valB[1]; // Add the values at index 1 of valA and valB and store in index 1 of sum
    sum[2] = valA[2] + valB[2]; // Add the values at index 2 of valA and valB and store in index 2 of sum
    sum[3] = valA[3] + valB[3]; // Add the values at index 3 of valA and valB and store in index 3 of sum

    System.out.println( "sum: " 
        + sum[0] + " " + sum[1] + " " + sum[2] + " " + sum[3] );
    }
}
