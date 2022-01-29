package JavaAst3;

import java.io.*;
import java.util.*;

public class Quote {

  String stockName;
  int bestBuyPrice;
  int bestSellPrice;

  Quote(String stockName, int bestBuyPrice, int bestSellPrice) {
    this.stockName = stockName;
    this.bestBuyPrice = bestBuyPrice;
    this.bestSellPrice = bestSellPrice;
  }

  void updateQuote(Order newOrder) {

    // Order.direction == true, then BUY, check for maximum price

    if(newOrder.direction && newOrder.price > bestBuyPrice)
      bestBuyPrice = newOrder.price;

    // Order.direction == false, then SELL, check for minimum price

    else if(!newOrder.direction && newOrder.price < bestSellPrice) 
      bestSellPrice = newOrder.price;

    Quote.pushUpdate();
  }

  void pushUpdate() {

    try {

      // Check for Main Quote Sheet Existence

      File quoteSheet = new File("all-quotes.txt");

      if(!quoteSheet.exists())
        quoteSheet.createNewFile();
      
      // Get All Quotes from File

      Scanner quoteScanner = new Scanner(quoteSheet);
      HashMap<String, String> quoteMap = new HashMap<String, String>();

      while(quotoScanner.hasNextLine()) {
        String currentQuote = quoteScanner.nextLine();
        String currentStockName = currentQuote.split(",")[0];
        quoteMap.put(currentStockName, currentQuote);
      }

      quoteScanner.close()
      
      // Replace Updated Quote

      quoteMap.replace(stockName, Quote.toString());

      // Push Updated Quotes into File

      FileWriter quoteWriter = new FileWriter("all-quotes.txt");
      for(String currentQuote : quoteMap.values())
        quoteWriter.write(currentQuote);
      quoteWriter.close();

    }

    catch(IOException e) {
      System.out.println("I/O Exception Occured!");
    }

  }

  String toString() {
    return stockName + "," + bestBuyPrice + "," bestSellPrice;
  }

} 