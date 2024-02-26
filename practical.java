import java.util.Scanner;

public class practical {
    public static void main(String[] args) {
      //  Declarations.
        Scanner scan = new Scanner (System.in);
        int minutes;
        double totalCost;
      //  CONSTANT VALUES.
        double connectFee = 1.99;
        double initialFee = 2.00;
        double addtionalMin = 0.45;

        System.out.println("Enter the number of minutes the call lasted: ");    //  Prompt the user to input data.
        minutes = scan.nextInt();

      //  If Else Conditions.
        if (minutes <= 3) {        // If minutes is less than or equal to 3 it adds the connectfee and initial fee.
            totalCost = connectFee + initialFee;
        } 
        else if (minutes == 0) {    //  If the user inputs 0 minutes the total cost would be 0.0
            totalCost = 0;
        }
        else {                      //  The user inputs 4 minutes above, it will add the connectFee + initialFee, then subtract the minutes inputted by the user by 3 and multiples it with the additionalMin which is 0.45
            totalCost = connectFee + initialFee + ( minutes - 3) * addtionalMin;
        }
            System.out.printf(" The amount due for the call is %.2f : ", totalCost);
    }
}
