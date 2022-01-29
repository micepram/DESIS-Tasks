package JavaAst3;

public class Order {

  String stockName;
  int price;
  String tradingParty;
  boolean direction;
  String type;

  Order(String stockName, int price, String tradingParty, boolean direction, String type) {
    this.stockName = stockName;
    this.price = price;
    this.tradingParty = tradingParty;
    this.direction = direction;
    this.type = type;
  }

  String toString() {
    return stockName + " " + price + " " + tradingParty + " " + direction + " " + type;
  }
}