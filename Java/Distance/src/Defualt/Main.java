package Defualt;

import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.Scanner;

/**
 * Created by theCh on 8/4/2017.
 */
public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        boolean Correct = true;
        while (Correct)
        {
            try
            {
                System.out.println("Quentin Higley");
                System.out.println("You can exit by entering Q");


                System.out.println("Please enter the First X");
                String strInput = sc.next();
                if (strInput.charAt(0) == 81 && strInput.length() == 1)
                {
                    System.exit(0);
                }
                int intFirstX = Integer.parseInt(strInput);


                System.out.println("Please enter the First Y");
                strInput = sc.next();
                if (strInput.charAt(0) == 81 && strInput.length() == 1)
                {
                    System.exit(0);
                }
                int intFirstY = Integer.parseInt(strInput);


                Point ptErste = new Point(intFirstX, intFirstY);
                StringBuilder strOut = new StringBuilder();
                strOut.append("Distances: \n");
                boolean boolCont = true;
                while(boolCont)
                {



                    System.out.println("Please enter the next X");
                    strInput = sc.next();
                    if (strInput.charAt(0) == 81 && strInput.length() == 1)
                    {
                        System.exit(0);
                    }
                    int intX = Integer.parseInt(strInput);


                    System.out.println("Please enter the next Y");
                    strInput = sc.next();
                    if (strInput.charAt(0) == 81 && strInput.length() == 1)
                    {
                        System.exit(0);
                    }
                    int intY = Integer.parseInt(strInput);

                    Point ptMachen = new Point(intX, intY);
                    ArrayList<Point> alCoordinate = new ArrayList<>();
                    alCoordinate.add(ptMachen);
                    for(int x = 0; x < alCoordinate.size(); x++)
                    {
                        strOut.append(ptErste.distance(alCoordinate.get(x)) + "\n");

                    }
                    System.out.println(strOut.toString());

                }
            }
            catch(NumberFormatException e)
            {
                System.out.println("Enter a number");
            }
            catch (InputMismatchException e)
            {
                System.out.println("Enter a number");
            }
        }





    }
}
