package sample;

import java.awt.*;
import java.util.ArrayList;
import java.util.InputMismatchException;

public class Controller
{
    TextField txtInX = new TextField();
    TextField txtInY = new TextField();
    Button btnSubmit = new Button();
    Button btnClose = new Button();

    public void Start()
    {
        try
        {
            int intFirstX = Integer.parseInt(txtInX.getText());
            int intFirstY = Integer.parseInt(txtInY.getText());

            final Point ptErste = new Point(intFirstX, intFirstY);

            StringBuilder strOut = new StringBuilder();
            strOut.append("Distances: \n");
            boolean boolCont = true;
            while(boolCont)
            {



                System.out.println("Please enter the next X");
                int intX = Integer.parseInt(txtInX.getText());
                System.out.println("Please enter the next Y");
                int intY = Integer.parseInt(txtInY.getText());

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
            System.out.println("Enter a number1");
        }
        catch (InputMismatchException e)
        {
            System.out.println("Enter a number");
        }
    }

    public void Close()
    {
    System.exit(0);
    }
}
