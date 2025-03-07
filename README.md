# Exception_Handling
```markdown
# Contents
- **Aim**
- **Software Used**
- **Theory**
- **Definition**
- **Key Concepts**
- **Algorithms**
- **Conclusion**

## Aim:
To use exception handling in C++.

## Software Used:
VS Code

## Theory:

### Definition:
In C++, exception handling is a mechanism that provides a way to manage errors and exceptional situations in a structured manner. The primary components involved in exception handling are:

### Key Concepts:

1. **Exception:** An event that disrupts the normal flow of a program. In C++, exceptions are typically represented as objects derived from the `std::exception` class.
   
2. **Throwing an Exception:** Use the `throw` keyword to signal that an error has occurred. This transfers control to a nearby `catch` block.

3. **Catching an Exception:** Use `try` blocks to enclose code that may throw exceptions. Corresponding `catch` blocks handle specific types of exceptions.
   
   ```cpp
   try {
       // Code that might throw an exception
   } catch (const ExceptionType& e) {
       // Handle the exception
   }
   ```

4. **Multiple Catch Blocks:** You can have multiple `catch` blocks to handle different exception types, allowing for more specific error handling.
   
   ```cpp
   try {
       // Code that may throw
   } catch (const std::runtime_error& e) {
       // Handle runtime errors
   } catch (const std::exception& e) {
       // Handle all other exceptions
   }
   ```

5. **Catch-All Handler:** A catch-all handler (`catch (...)`) can be used to catch any exception that wasn’t previously caught.

   ```cpp
   catch (...) {
       // Handle any exception
   }
   ```

6. **Custom Exceptions:** You can define your own exception classes by inheriting from `std::exception`, allowing for more meaningful error information.
   
   ```cpp
   class MyException : public std::exception {
   public:
       const char* what() const noexcept override {
           return "My custom exception occurred!";
       }
   };
   ```

## Algorithms:

### Age Validation Algorithm:
1. **Start.**
2. Initialize a variable `age` to store the user's input.
3. Prompt the user to "Enter your age:".
4. Read the user's input into the variable `age`.
5. **Try the following:**
   - Check if `age` is less than 0:
     - If true, throw an exception indicating an invalid age.
   - Check if `age` is less than 18:
     - If true, throw an exception indicating that the user is below 18.
   - If both checks are false, print "Accepted".
6. **Catch any exceptions:**
   - If the exception indicates an invalid age (less than 0), print "Invalid age".
   - If the exception indicates age below 18, print "You are below 18".
7. **End.**

### Zero-Division Error Algorithm:
1. **Start.**
2. Declare variables `n1`, `n2`, and `ans` to store the two numbers and the result.
3. Prompt the user to "Enter the values of numbers 1 and 2:".
4. Read the user's input into the variables `n1` and `n2`.
5. **Try the following:**
   - Check if `n2` is equal to 0:
     - If true, throw an exception with the value of `n2`.
   - If the check is false, calculate `ans` as `n1 / n2`.
   - Print the result as "The answer is [result]".
6. **Catch any exceptions:**
   - If an exception occurs, print "ERROR: Division by [number]".
7. **End.**

## Conclusion:
We learned to use exception handling blocks in C++ in this experiment.
