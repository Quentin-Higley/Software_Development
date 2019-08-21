/**
 * Created by theCh on 7/20/2017.
 */
import java.net.*;
import java.io.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception
    {
        try
        {
            System.out.println("Quentin Higley \n");
            System.out.println("Please input an allrecipes.com URL");
            Scanner input = new Scanner(System.in);
            String strInput = input.next();
            if (strInput.contains("allrecipes.com"))
            {
                if (!strInput.toLowerCase().matches("http://"))
                {
                    strInput = "http://" + strInput;
                }
                URL oracle = new URL(strInput);
                BufferedReader in = new BufferedReader(
                        new InputStreamReader(oracle.openStream()));

                String inputLine;
                while ((inputLine = in.readLine()) != null)
                    if(inputLine.contains("<title>"))
                    {
                        int intIndex = inputLine.indexOf("<title>");
                        String strSub = inputLine.substring(intIndex + 7, inputLine.length() - 8);
                        System.out.println(strSub);

                    }

                    else if(inputLine.contains("itemprop=\"ingredients"))
                    {
                        int intIndex = inputLine.indexOf("ingredients");
                        String strSub = inputLine.substring(intIndex +13, inputLine.length() - 7);
                        System.out.println(strSub);
                    }
                    else if (inputLine.contains("class=\"recipe-directions__list--item\">"))
                    {
                        int intIndex = inputLine.indexOf("list--");
                        String strSub = inputLine.substring(intIndex + 12, inputLine.length() - 12);
                        System.out.println(strSub + "\n");
                    }

                in.close();
            }
            else
                {
                    System.out.println("please enter an allrecipes.com URL");
                }


        }
        catch(MalformedURLException e)
        {
            System.out.println("Please enter a URL");
        }
        catch (IOException e)
        {
            System.out.println("Please enter a URL");
        }

    }
}
