package sample;
        import javafx.scene.control.Label;
        import javafx.scene.control.TextField;
        import javax.swing.JOptionPane;

public class Controller {

    public TextField txtInput;
    public Label lblOutput, lblValidity, lblOutput1;

    public void Execute(){

        String strInput = txtInput.getText();

        //see if textbox is empty
        if(strInput.isEmpty()){
            lblValidity.setText("Valid");
            lblOutput.setText("empty");
        }
        else if(strInput.equals("one") || strInput.equals("One")){
            lblValidity.setText("Valid: Valid");
            lblOutput.setText("Output: One is the loneliest number.");
        }
        else if(strInput.equals("Fox") || strInput.equals("fox")){
            lblValidity.setText("Valid: Valid");
            lblOutput.setText("Output: Fox on the run, and hide away.");
        }
        else if (strInput.equals("Illusion") || strInput.equals("illusion")){
            lblValidity.setText("Valid: Truly valid");
            lblOutput.setText("Output: I hope i'll never have to say, it's just an illusion.");
        }
        else {
            lblValidity.setText("Valid: Invalid");
            lblOutput.setText("Output: ");
        }

    }

    public void Commands(){
        String strC1 = "One \n Illusion \n Fox \n Empty";
        String strTitle = "Commands";

        JOptionPane.showMessageDialog(null, strC1, strTitle, JOptionPane.INFORMATION_MESSAGE);
    }

}
