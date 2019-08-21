package sample;

import javafx.application.Application;
import javafx.application.Platform;
import javafx.beans.value.ObservableValue;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.stage.Stage;


import java.util.Observable;

public class Main extends Application {


    @Override
    public void start(Stage primaryStage) throws Exception{
        FXMLLoader loader = new FXMLLoader();
        loader.setLocation(Main.class.getResource("sample.fxml"));
        Parent root = loader.load();
        primaryStage.setTitle("Assignment 6");
        primaryStage.setScene(new Scene(root, 650, 430));
        primaryStage.show();
        Controller controller = loader.getController();
    }



    public static void main(String[] args) {
        launch(args);
    }
}
