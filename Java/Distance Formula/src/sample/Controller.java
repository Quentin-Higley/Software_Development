package sample;
import javafx.fxml.FXML;
import javafx.scene.control.*;

public class Controller
{

    public Button btnCalc;
    public Slider slrValue;
    public Label lblValue;
    public TextField txtX1, txtX2, txtY1, txtY2;
    public TextArea txtOutput;

    public void Calculate()
    {

        int intX1, intX2, intY1, intY2, intValue;
        double dblOut;
        intValue = (int) slrValue.getValue();
        try
        {

                intX1 = Integer.parseInt(txtX1.getText());
                intY1 = Integer.parseInt(txtY1.getText());

                intX2 = Integer.parseInt(txtX2.getText());
                intY2 = Integer.parseInt(txtY2.getText());


            if(intX1 >= intValue && intX2 >= intValue && intY1 >= intValue && intY2 >= intValue)
            {
                dblOut = Math.sqrt(Math.pow(intY2 - intY1, 2) + Math.pow(intX2 - intX1, 2));


                txtOutput.setText("Quentin Higley \nThe distance is: " + String.format("%.2f", dblOut));
            }
            else
            {
                txtOutput.setText("Please a value higher than the min value");
            }

        }
        catch(NumberFormatException e)
        {
            txtOutput.setText("Input a number");
        }
    }
}
