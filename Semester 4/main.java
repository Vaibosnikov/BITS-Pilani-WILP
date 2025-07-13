public class main {
    public static void main(String[] args) {
        // Create accounts using parameterized constructor
        BankAccount a1 = new BankAccount("Alice", 101, 5000);
        BankAccount a2 = new BankAccount("Bob", 102, 3000);

        // Demonstrate deposit methods
        a1.deposit(1000);
        a1.deposit(500, "Cash Deposit");

        // Demonstrate withdrawal
        a1.withdraw(2000);

        // Demonstrate transfer
        a1.transferTo(a2, 1000);

        // Display details
        a1.printDetails();
        a2.printDetails();

        // Demonstrate insufficient withdrawal and transfer
        a1.withdraw(10000); // Should fail
        a1.transferTo(a2, 10000); // Should fail

        // Demonstrate default constructor
        BankAccount a3 = new BankAccount();
        a3.printDetails();
    }
}