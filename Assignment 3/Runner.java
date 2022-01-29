package JavaAst3;

import java.io.*;
import java.util.*;

class SleepException extends Exception {
  SleepException(String msg){
    super(msg);
  }
}

class OrderException extends Exception {
  OrderException(String msg){
    super(msg);
  }
}

class TradingPartyException extends Exception {
  TradingPartyException(String msg){
    super(msg);
  }
}

public class Runner {

  static void doPossibleTrade(Vector<Order> orderList) {

    Order latestOrder = orderList.lastElement();

    // Handle IOC orders

    if(latestOrder.type.equalsIgnoreCase("IOC")) {
      if(latestOrder.direction.equalsIgnoreCase("Buy") 
        && quoteList.get(latestOrder.stockName).bestSellPrice > latestOrder.price) {
        Order quoteOrder = findOrderFromQuote(latestOrder.stockName);
        try {
          Trade tradeIOC = new Trade(latestOrder.price, quoteOrder.price, 
                                    latestOrder.stockName, latestOrder.tradingParty, 
                                    quoteOrder.tradingParty);
          
        }
        catch(final Exception e) {
          throw new TradingPartyException("Same Trading Party on both ends!");
        }
      }
      // else if (latestOrder[3].equalsIgnoreCase("Sell")) {
      //   quotePrice = quoteList.get(latestOrder[0]).bestSellPrice;
      // }

    }
  }

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
    Vector<Ouote> quoteList = new Vector<Ouote>();
    for(int i = 0; i < n; i++) {

      try {

        File currentFile = new File(files[i]);
        Scanner fileScanner = new Scanner(System.in);
        Vector<String> orders = new Vector<String>();
        while(fileScanner.hasNextLine())
          orders.add(fileScanner.nextLine());

        for(int i = 0; i < orders.size(); i++) {

          // Order Input

          if(orders.elementAt(i).startsWith("Sleep")) {
            try {
              int sleepTime = Integer.parseInt(orders.elementAt(i).substring(6));
              java.util.concurrent.TimeUnit.SECONDS.sleep(sleepTime / 1000);
            }
            catch(final NumberFormatException e) {
              throw new SleepException("Invalid Sleep Command!");
            }
          }

          else {
            try {
              String currentOrder[] = orders.elementAt(i).split(",");
              if(!quoteList.contains(currentOrder[0])) {
                if(currentOrder[3].equalsIgnoreCase("Buy"))
                  quoteList.add(new Quote(currentOrder[0], currentOrder[1], 0));
                else
                  quoteList.add(new Quote(currentOrder[0], 0, currentOrder[1]));
              }
              orderList.add(new Order(currentOrder[0], currentOrder[1], currentOrder[2], currentOrder[3], currentOrder[4]));
            }
            catch(final Exception e) {
              throw new OrderException("Invalid Order Command!");
            }

            // Try Trading with New Order

            doPossibleTrade(orderList);
          }

        }
      }
      catch(final Exception e) {
        System.out.println(e.getClass());
      }

    }

  }
}