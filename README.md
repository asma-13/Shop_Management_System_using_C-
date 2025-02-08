# 🛒 Shop Management System

A simple **C++ console-based** shop management system that allows users to purchase items and calculate the total bill dynamically.

---

## 📌 Features

- ✅ Displays a **price menu** with available products.
- ✅ Allows users to **select and purchase** multiple items.
- ✅ Calculates the **total cost** of the selected items.
- ✅ Provides a **summary** of purchases at the end.
- ✅ Ensures a **user-friendly interface** with interactive prompts.

---

## 🖥️ Technologies Used

- **C++**
- **Standard Input/Output (cin, cout)**
- **Basic Control Structures (Loops, If-Else)**
- **Inline Function for Calculation**

---

## 📜 How to Run the Program?

1. **Clone the Repository** (or download the file)
   ```bash
   git clone https://github.com/your-username/Shop-Management-System.git
   cd Shop-Management-System
   ```
2. **Compile the C++ File**  
   Using g++ (for GCC users):
   ```bash
   g++ ShopManagementSystem.cpp -o ShopManagementSystem
   ```
   Using Microsoft Visual C++ Compiler:
   ```bash
   cl ShopManagementSystem.cpp
   ```
3. **Run the Executable**
   ```bash
   ./ShopManagementSystem
   ```

---

## 📝 Usage

1. The program starts by displaying a **menu** of products with their prices.
2. The user can enter a **number corresponding to a product** to add it to the cart.
3. The program prompts the user to enter the **quantity** for each selected product.
4. The user can continue adding items or enter **0 to finish shopping**.
5. The program then **displays the purchase summary** and calculates the **total amount**.

---

## 🛍️ Available Products

| Product  | Price (per unit) |
|----------|----------------|
| 📚 Book | Rs.1200 |
| 👕 T-Shirt | Rs.1500 |
| 👖 Pant | Rs.2200 |
| 👟 Shoes | Rs.2500 |
| 🎒 Bag | Rs.3000 |

---

## ⚡ Example Output

```
============PRICE MENU============

1. Book    (per item price = Rs.1200)
2. T-shirt (per item price = Rs.1500)
3. Pant    (per item price = Rs.2200)
4. Shoes   (per pair price = Rs.2500)
5. Bag     (per item price = Rs.3000)
0. Exit the program

Enter any number to select a product or 0 to stop buying: 2

        You have selected T-shirt.
        Enter Quantity: 3
        3 T-Shirts done!

Enter any number to select another product or 0 to stop buying: 5

        You have selected Bag.
        Enter Quantity: 1
        1 Bag done!

Enter any number to select another product or 0 to stop buying: 0

0==================PURCHASE DETAILS==========================

You have purchased 3 T-shirts (Price = Rs.4500)
You have purchased 1 Bag (Price = Rs.3000)
Total: Rs.7500

----------THANK YOU & COME AGAIN------------
```

---

## 🛠️ Future Enhancements

- 📌 Add **inventory management** (stock availability).
- 📌 Improve **error handling** (e.g., invalid inputs).
- 📌 Store **purchase records** in a file.
- 📌 Add a **GUI version** using a framework like Qt.

---

## 🤝 Contribution

Want to improve this project? Feel free to **fork, contribute, and submit pull requests**! 🚀

---

## 📩 Contact

📧 Email: [your-email@example.com](mailto:iasma.channa@gmail.com)  
🔗 GitHub: [your-github-profile](https://github.com/asma-13)<br>
🔗 LinkedIn: [your-linkedin-profile](https://linkedin.com/in/iasmachanna)

