import java.util.*;
public class Main {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        // display all numbers entered except multiple of 10
        
        while (true) {
            
            System.out.println("Enter your number :");
            int n = sc.nextInt();
            
            if (n % 10 == 0) {
                continue;
            }
            
            System.out.println("The number is : " + n );
        }
      
        
    }
}