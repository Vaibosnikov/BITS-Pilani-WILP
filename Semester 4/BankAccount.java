public class BankAccount {
    // Instance variables
    private String accountHolderName;
    private int accountNumber;
    private double balance;

    // Default constructor
    public BankAccount() {
        this.accountHolderName = "Unknown";
        this.accountNumber = 0;
        this.balance = 0.0;
    }

    // Parameterized constructor
    public BankAccount(String accountHolderName, int accountNumber, double balance) {
        this.accountHolderName = accountHolderName;
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    // Deposit method
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println(amount + " deposited successfully.");
        } else {
            System.out.println("Deposit amount must be positive.");
        }
    }

    // Overloaded deposit with source
    public void deposit(double amount, String source) {
        if (amount > 0) {
            balance += amount;
            System.out.println(amount + " deposited successfully from " + source + ".");
        } else {
            System.out.println("Deposit amount must be positive.");
        }
    }

    // Withdrawal method
    public void withdraw(double amount) {
        if (amount <= 0) {
            System.out.println("Withdrawal amount must be positive.");
        } else if (amount > balance) {
            System.out.println("Insufficient balance. Withdrawal failed.");
        } else {
            balance -= amount;
            System.out.println(amount + " withdrawn successfully.");
        }
    }

    // Transfer method (operator simulation)
    public void transferTo(BankAccount target, double amount) {
        if (amount <= 0) {
            System.out.println("Transfer amount must be positive.");
        } else if (amount > balance) {
            System.out.println("Insufficient balance. Transfer failed.");
        } else {
            this.balance -= amount;
            target.balance += amount;
            System.out.println(amount + " transferred to Account No.: " + target.accountNumber);
        }
    }

    // Display account details
    public void printDetails() {
        System.out.println("---- Account Details ----");
        System.out.println("Account Holder : " + accountHolderName);
        System.out.println("Account Number : " + accountNumber);
        System.out.println("Balance        : " + balance);
        System.out.println("-------------------------");
    }
}