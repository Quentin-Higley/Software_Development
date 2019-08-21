package sample;

import javafx.application.Platform;
import javafx.fxml.FXML;
import javafx.scene.control.Slider;
import javafx.scene.control.Label;
import javafx.scene.control.TextArea;
import java.awt.*;
import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Random;

public class Controller {
    @FXML
    public Slider slrValue;
    @FXML
    public Label lblSlrValue;
    @FXML
    public TextArea txtOutput;


    public void Roll(){

        StringBuilder strOutput = new StringBuilder();
        Random rng = new Random();

        int intValue1;
        int intValue2;
        int intSlrValue =  (int) slrValue.getValue();
        int[] intStars = new int[11];

        strOutput.append("Quentin Higley \n" +
                "DICE ROLLING SIMULATION RESULTS\n" +
                "Each * represents 1% of the total number of rolls.\n" +
                "Total number of rolls = " + intSlrValue + ".\n");

        for (int i = 0; i < intSlrValue; i++){
            int intTotal;
            intValue1 = rng.nextInt(6) + 1;
            intValue2 = rng.nextInt(6) + 1;
            intTotal = intValue1 + intValue2;

            switch(intTotal){
                case 2: intStars[0] += 1;
                break;
                case 3: intStars[1] += 1;
                break;
                case 4: intStars[2] += 1;
                break;
                case 5: intStars[3] += 1;
                    break;
                case 6: intStars[4] += 1;
                    break;
                case 7: intStars[5] += 1;
                    break;
                case 8: intStars[6] += 1;
                    break;
                case 9: intStars[7] += 1;
                    break;
                case 10: intStars[8] += 1;
                    break;
                case 11: intStars[9] += 1;
                    break;
                case 12: intStars[10] += 1;
                    break;
            }
        }

        for(int i = 0; i <11; i++){

            switch (i){
                case 0: strOutput.append("2: ");
                    break;
                case 1: strOutput.append("3: ");
                    break;
                case 2: strOutput.append("4: ");
                    break;
                case 3: strOutput.append("5: ");
                    break;
                case 4: strOutput.append("6: ");
                    break;
                case 5: strOutput.append("7: ");
                    break;
                case 6: strOutput.append("8: ");
                    break;
                case 7: strOutput.append("9: ");
                    break;
                case 8: strOutput.append("10: ");
                    break;
                case 9: strOutput.append("11: ");
                    break;
                case 10: strOutput.append("12: ");
                    break;
            }

            double intTotals = intStars[i];
            intTotals = (intTotals / intSlrValue) * 100;
            for(int j = 0; j <= intTotals; j++)
            {
                strOutput.append("*");
            }
            strOutput.append("\n");
        }
        txtOutput.setText(strOutput.toString());

    }

}
