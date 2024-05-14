/* Author: Baran, Junex Glenn A.
 * Date: May 6, 2024
 */
public class SameSum {
    public static void main(String[] args) {
        int[] valA   = { 13, -22,  82,  17}; 
        int[] valB   = {  0,   0,   0,   0};
        
        // Put values into valB so that the sum of the values
        // in corresponding cells of valA and valB is 25.
        valB[0] = 25 - valA[0]; // 25 - 13 = 12
        valB[1] = 25 - valA[1]; // 25 - (-22) = 47
        valB[2] = 25 - valA[2]; // 25 - 82 = -57
        valB[3] = 25 - valA[3]; // 25 - 17 = 8
     
        System.out.println( "valA: " 
            + valA[0] + " " + valA[1] + " " + valA[2] + " " + valA[3] );
     
        System.out.println( "valB: " 
            + valB[0] + " " + valB[1] + " " + valB[2] + " " + valB[3] );
    
        System.out.println( "sum:  " 
            + (valA[0]+valB[0]) + " " + (valA[1]+valB[1]) + " " 
            + (valA[2]+valB[2]) + " " + (valA[3]+valB[3]) );
    }   
}
