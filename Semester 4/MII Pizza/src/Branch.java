public class Branch {
    String branchName;
    String location;
    String country;
    String pizzaVariety1;
    String pizzaVariety2;
    String pizzaVariety3;

    public void setBranchDetails(String name, String loc, String ctry, String var1, String var2, String var3) {
        branchName = name;
        location = loc;
        country = ctry;
        pizzaVariety1 = var1;
        pizzaVariety2 = var2;
        pizzaVariety3 = var3;
    }

    public void showBranchDetails() {
        System.out.println("Branch: " + branchName + ", Location: " + location + ", Country: " + country);
        System.out.println("Pizza Varieties: " + pizzaVariety1 + ", " + pizzaVariety2 + ", " + pizzaVariety3);
    }
}