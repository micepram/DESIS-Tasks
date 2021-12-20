package JavaAst2;

import java.io.*;
import java.util.*;

public class Runner {
  public static void main(String args[]) {
    
    // Inputting File Details

    Scanner in = new Scanner(System.in);
    System.out.println("Enter the number of file(s) and their names for Input: ");
    int n = in.nextInt();
    String files[] = new String[n];
    for(int i = 0; i < n; i++)
      files[i] = in.nextLine();
    
    // Running through Each File

    Vector<Order> orderList = new Vector<Order>();
    for(int i = 0; i < n; i++) {

      try {

        File currentFile = new File(files[i]);
        Scanner fileScanner = new Scanner(System.in);
        Vector<String> orders = new Vector<String>();
        while(fileScanner.hasNextLine())
          orders.add(fileScanner.nextLine());

        for(int i = 0; i < orders.size(); i++) {

          if(orders.elementAt(i).startsWith("Sleep")) {
            int sleepTime = Integer.parseInt(orders.elementAt(i).substring(6));
            java.util.concurrent.TimeUnit.SECONDS.sleep(sleepTime / 1000);
          }
          else {
            String currentOrder[] = orders.elementAt(i).split(",");
            orderList.add(new Order(currentOrder[0], currentOrder[1], currentOrder[2]));
          }

        }
      }
      catch() {

      }

    }

  }
}