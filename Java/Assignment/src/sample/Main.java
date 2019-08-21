package sample;

import javafx.application.Application;
import javafx.stage.*;
import javafx.fxml.*;
import javafx.scene.*;


public class Main extends Application {
    public static void main(String[] args) {launch(args);
    }

    @Override
    public void start(Stage primaryStage) throws Exception{

        Parent root = FXMLLoader.load(getClass().getResource("Default.fxml"));
        primaryStage.setTitle("Assignment 5");
        primaryStage.setScene(new Scene(root, 500, 320));
        primaryStage.show();


    }



}
