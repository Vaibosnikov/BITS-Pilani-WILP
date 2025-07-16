public class Sales {
    String branchName;
    String date;
    String employeeName;
    String appUsed;
    double totalAmount;

    public void setSalesDetails(String b, String d, String e, String app, double amt) {
        branchName = b;
        date = d;
        employeeName = e;
        appUsed = app;
        totalAmount = amt;
    }

    public void showSalesDetails() {
        System.out.println("Sales for branch: " + branchName + " on " + date);
        System.out.println("Employee: " + employeeName + ", Home Delivery App: " + appUsed);
        System.out.println("Total Amount: " + totalAmount);
    }
}