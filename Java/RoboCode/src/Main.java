/**
 * Created by theCh on 7/13/2017.
 */
import java.net.*;
import java.io.*;
public class Main
{
    public static void main(String[] args) throws Exception
    {
        URL oracle = new URL("http://www.allrecipes.com/recipe/apple-pie-by-grandma-ople/");
        BufferedReader in = new BufferedReader(new InputStreamReader(oracle.openStream()));

        String inputLine;
        while ((inputLine = in.readLine()) != null)
            System.out.println(inputLine);
        in.close();
    }
}
