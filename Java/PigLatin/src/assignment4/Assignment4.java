/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignment4;
import java.util.*;
/**
 *
 * @author theCh
 */
public class Assignment4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //loop
        boolean boolCont = true;
        System.out.println("Quentin Higley");
        System.out.println("Wilkommen!, Bienvenue");
        while (boolCont){
        // Enter a string store in Array
        System.out.println("Enter a sentance or a lone Q to exit: ");
        
        Scanner scanner = new Scanner(System.in);
        String stringInput = scanner.nextLine();
        
        //quit with a Q
        char charQuit = stringInput.charAt(0);
        if(stringInput.length() == 1 && charQuit == 'Q'){
            System.exit(0);
        }
        String[] Array = stringInput.split(" ");
        //iterate the loop for each of strings stored in the array
        
        for (String Array1 : Array) {
            //vowel conversion
            char charFirst = Character.toLowerCase(Array1.charAt(0));
            if (charFirst == 'a' || charFirst == 'e' || charFirst == 'i' || charFirst == 'o' || charFirst == 'u') {
                String stringOut = Array1 + "ay ";
                System.out.print(stringOut);
            } 
            //else conversion
            else {
                String stringFirst = Array1.substring(0, 1);
                String stringSlice = Array1.substring(1, Array1.length());
                System.out.print(stringSlice + stringFirst + "ay ");
            }
        }
        //and on a new line
        System.out.println();
        
        
        
        }
    }
    
}
