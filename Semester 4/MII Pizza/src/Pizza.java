public class Pizza {
    String name;
    String type; // "Automatic" or "Handmade"
    String toppings;

    public void setPizzaDetails(String n, String t, String top) {
        name = n;
        type = t;
        toppings = top;
    }

    public void showPizzaDetails() {
        System.out.println("Pizza: " + name + ", Type: " + type + ", Toppings: " + toppings);
    }
}