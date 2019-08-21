package sample;

import javafx.animation.RotateTransition;
import javafx.animation.TranslateTransition;
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.paint.*;
import javafx.scene.shape.*;
import javafx.stage.Stage;
import javafx.animation.Transition.*;
import javafx.util.Duration;


public class Main extends Application {

    @Override
    public void start(Stage primaryStage) throws Exception{
        Group root = new Group();
        Scene scene = new Scene(root, 500, 500, Color.BLACK);

        //Filled rectangle
        Rectangle Map = new Rectangle(150, 150, 200, 200);
        Map.setFill( Color.color(0.42,.05,.03));

        Rectangle Dire = new Rectangle(290, 180, 30,30);
        Dire.setFill(Color.BLACK);
        Dire.setRotate(35);

        Rectangle Radiant = new Rectangle(180, 280, 30, 30);
        Radiant.setFill(Color.color(0.67, 0.84, 0.94));
        Radiant.setRotate(35);

        Rectangle River = new Rectangle(160, 220, 180,40);
        River.setFill(Color.color(.16, .35, .46));
        River.setRotate(42);

        Button btnRadiant = new Button("Radiant Win");
        btnRadiant.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                RotateTransition rt = new RotateTransition(Duration.millis(1000), Radiant);
                rt.setByAngle(360);
                rt.play();


            }
        });
        Button btnDire = new Button("Dire Win");
        btnDire.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                RotateTransition rt = new RotateTransition(Duration.millis(1000), Dire);
                rt.setByAngle(360);
                rt.play();
            }
        });
        btnDire.setLayoutX(0);
        btnDire.setLayoutY(0);
        btnRadiant.setLayoutX(0);
        btnRadiant.setLayoutY(50);


        root.getChildren().addAll(Map, Dire, Radiant, River,btnRadiant, btnDire);

        primaryStage.setTitle("What does a hero truly need");
        primaryStage.setScene(scene);
        primaryStage.show();
    }


    public static void main(String[] args) {
        launch(args);
    }
}
