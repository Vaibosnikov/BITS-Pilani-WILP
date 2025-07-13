# Bank Account Simulation - Design & Validation

## Design and Implementation

- **Encapsulation & OOP**: The `BankAccount` class encapsulates account data and operations. All logic is non-static and instance-based.
- **Constructors**: Both default and parameterized constructors are provided to initialize instances.
- **Method Overloading**: `deposit` is overloaded to optionally accept a deposit source.
- **Withdrawal Logic**: Prevents withdrawal if insufficient balance or invalid amount.
- **Transfer Logic**: Simulates operator-like transfer between accounts, with balance checks.
- **Neat Display**: `printDetails` neatly prints account information.
- **No Hardcoded Test Values**: All tests and demonstrations are performed in `Main.java`.

## Validation (Test Results)

**Sample Output:**
```
1000.0 deposited successfully.
500.0 deposited successfully from Cash Deposit.
2000.0 withdrawn successfully.
1000.0 transferred to Account No.: 102
---- Account Details ----
Account Holder : Alice
Account Number : 101
Balance        : 4500.0
-------------------------
---- Account Details ----
Account Holder : Bob
Account Number : 102
Balance        : 4000.0
-------------------------
Insufficient balance. Withdrawal failed.
Insufficient balance. Transfer failed.
---- Account Details ----
Account Holder : Unknown
Account Number : 0
Balance        : 0.0
-------------------------
```

- All method calls and balance checks work as intended.
- Overloaded methods and constructors are validated.
- Edge cases (insufficient balance, negative amounts) are handled gracefully.

## Conclusion

The solution demonstrates good OOP practices, method overloading, encapsulation, and operator logic in Java. All requirements have been fulfilled as per the assignment instructions.