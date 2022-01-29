package JavaAst3;

import java.io.*;
import java.util.*;

public class Trade {

  int averagePrice;
  String stockName;
  String buyTradingParty;
  String sellTradingParty;

  Trade(int buyPrice, int sellPrice, String stockName, String buyTradingParty, String sellTradingParty) {
    this.averagePrice = (int) ((buyPrice + sellPrice) / 2);
    this.stockName = stockName;
    this.buyTradingParty = buyTradingParty;
    this.sellTradingParty = sellTradingParty;
  }
}