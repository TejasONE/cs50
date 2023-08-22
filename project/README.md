# 	Project’s title = 1. Android calculator application  2. Android database management application

#### Video Demo:  <https://youtu.be/nkJPDW4ltKg>

#### Description:

## Features

- **Interactive Menu Selection:** Users can easily choose items from categories like Main Dishes, Beverages, Desserts, Fast Food, and Chinese cuisine.
- **Real-time Price Calculation:** Instant calculation of the total order cost based on the selected items.
- **User-Friendly Interface:** Intuitive design with spinners and buttons for easy navigation.
- **Efficient Price Retrieval:** Pricing data retrieved from predefined arrays in the app's resources.
- **Smooth Payment Process:** "Proceed to Pay" button provides a quick overview of the order cost before payment.

## Who Is This For?

- **Developers:** Understand the app's architecture, code structure, and Android component usage.
- **Users:** Learn how the app simplifies the ordering process and benefits both customers and staff.
- **Enthusiasts:** Explore the technical aspects of Android app development.

## User Interface

The user interface of the Hotel Management App has been thoughtfully designed to provide an intuitive and seamless experience for users, whether they are customers placing orders or staff members managing them.

### Menu Categories and Selection

The app's main screen features a set of categories, each represented by a spinner and a bold title. Users can interact with these spinners to select their desired items from different menu categories:

- **Main Dishes**
- **Beverages**
- **Desserts**
- **Fast Food**
- **Chinese Cuisine**

Upon selecting a category, a dropdown list appears, displaying the available menu items within that category. Users can easily scroll through and choose the item that appeals to them the most.

### Real-time Price Calculation

As users make their selections from the spinners, the app performs real-time price calculations based on the chosen items. The cumulative cost of the selected items is dynamically displayed on the screen, providing users with an immediate understanding of the total cost of their order.

### "Proceed to Pay" Button

Once users have made their selections, the "Proceed to Pay" button is available for them to finalize their order. Clicking this button triggers the calculation of the total bill. The resulting total is then prominently displayed on the screen, ensuring users are fully informed about their order's cost before proceeding with payment.

### Clear Layout and Intuitive Controls

The layout of the app has been designed with clarity and simplicity in mind. Bold titles and easily recognizable controls guide users through the ordering process. Spinners and buttons are strategically placed for convenient access, allowing users to navigate the app effortlessly.

### Visibility of Total Price

To provide an unobtrusive user experience, the calculated total price is initially hidden. It becomes visible only after users click the "Proceed to Pay" button, ensuring that the focus remains on the menu selections until users are ready to proceed.

## Screenshots

Consider including screenshots of the app's user interface to visually demonstrate the layout, spinners, "Proceed to Pay" button, and the dynamic display of the total price.

## Conclusion

The user interface of the Hotel Management App has been carefully crafted to provide a user-friendly and engaging experience. Whether customers are exploring menu options or staff members are managing orders, the app's interface ensures a seamless and informative interaction for all users.

## Layout

The layout of the Hotel Management App has been meticulously designed to create an organized and visually appealing user interface. The layout ensures ease of navigation, clear presentation of menu categories, and intuitive interaction for both customers and staff members.

### Categorized Display

The main screen of the app presents a categorized display of menu options, each neatly arranged within its own section. The layout structure makes it easy for users to identify and select their desired items from various categories, including Main Dishes, Beverages, Desserts, Fast Food, and Chinese cuisine.

### Spinner Selection

For each menu category, a spinner is provided, displaying a dropdown list of available menu items. Users can interact with these spinners to select their preferred items. The use of spinners simplifies the selection process and ensures a consistent user experience across different categories.

### "Proceed to Pay" Button

Strategically placed at the bottom of the screen, the "Proceed to Pay" button stands out as the final step in the ordering process. Its position ensures easy access while maintaining a clean and uncluttered layout. When clicked, this button triggers the calculation of the total bill, offering users a comprehensive overview of their selections.

### Total Price Display

A dedicated section on the screen displays the dynamically calculated total price of the selected items. Initially hidden to maintain focus on menu choices, the total price becomes visible only after users click the "Proceed to Pay" button. This approach prevents distractions and provides a clear visual cue when users are ready to review the total cost.

### Strategic Use of Text Views

Bold and well-placed text views serve as headings for each menu category, guiding users through their options. The text views are positioned using appropriate constraints, maintaining a consistent and visually balanced layout across different screen sizes.

## Conclusion

The thoughtful layout of the Hotel Management App enhances the user experience by providing a well-organized, easy-to-navigate interface. Through its categorized display, spinner selections, clear headings, and prominent "Proceed to Pay" button, the layout ensures a user-friendly and efficient ordering process.


## Efficient Price Retrieval

The Hotel Management App employs an efficient method for retrieving pricing data, ensuring accurate and up-to-date pricing information for each menu item. This approach simplifies maintenance and ensures consistency in pricing across the app.

### Pricing Data Storage

The app stores pricing data for each menu item within predefined arrays, which are conveniently organized in the app's resources. These arrays are designed to match the order of menu items displayed to users. By keeping pricing data separate from the user interface and logic, the app maintains a clean and organized structure.

### Resource Utilization

Using predefined arrays stored in resources allows the app to efficiently retrieve pricing data when needed. The separation of data from code makes it easy to update prices without modifying the core logic of the app. This approach streamlines maintenance and enables quick adjustments to pricing based on changing factors.

### Dynamic Access

As users interact with the spinners and make selections, the app dynamically retrieves the corresponding price from the appropriate array. This dynamic access ensures that the displayed prices are always accurate and aligned with the user's selections.

### Benefits

Efficient price retrieval offers several benefits:

- **Scalability:** The app can handle an expanding menu without requiring changes to the codebase.
- **Maintenance:** Price updates can be made independently of the app's logic.
- **Accuracy:** Users receive accurate and real-time pricing information.

## Code Example

Here's an example of how the app retrieves pricing data for a menu category:

```java
// Retrieve the selected positions from the spinners
int mainDishPosition = mainDishesSpinner.getSelectedItemPosition();

// Retrieve the prices based on the selected positions
int mainDishPrice = Integer.parseInt(mainDishPrices[mainDishPosition]);


## Working of the Hotel Management App

The Hotel Management App offers a seamless and intuitive experience for customers to select menu items and calculate their total order cost. Here's how the app works step by step:

1. **Menu Selection:**
   - When users launch the app, they are presented with a screen featuring different menu categories: Main Dishes, Beverages, Desserts, Fast Food, and Chinese cuisine.
   - Each category is accompanied by a spinner, displaying a dropdown list of menu items within that category.
   - Users can interact with these spinners to select their desired items. The selected items are visually highlighted within the spinners.

2. **Real-time Price Calculation:**
   - As users make selections from the spinners, the app dynamically calculates the total order cost based on the selected items.
   - The calculated total remains hidden until users click the "Proceed to Pay" button.

3. **"Proceed to Pay" Button:**
   - Placed at the bottom of the screen, the "Proceed to Pay" button becomes active once users have made their selections.
   - Clicking this button triggers the calculation of the total order cost, considering the prices of the selected items from each category.

4. **Total Price Display:**
   - Upon clicking the "Proceed to Pay" button, the app calculates the total cost of the selected items.
   - The calculated total price is then prominently displayed on the screen, ensuring users are well-informed about the cost of their order before proceeding with payment.

5. **Efficient Price Retrieval:**
   - The app efficiently retrieves pricing data from predefined arrays stored in the app's resources.
   - When users make selections, the app accesses the appropriate array based on the selected item's position within the spinner.

6. **Benefits of Efficient Price Retrieval:**
   - This approach allows for scalable and easy-to-maintain pricing data.
   - Prices can be updated without modifying the app's core logic, ensuring accuracy and consistency in pricing.

## Conclusion

The Hotel Management App simplifies the process of ordering food items by providing an intuitive user interface, dynamic price calculation, and efficient price retrieval. By enabling users to easily select their preferred menu items and offering real-time price insights, the app enhances the dining experience for both customers and staff.


Java code:

package com.example.hotelmanagement;

import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.Spinner;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity
{
    private Spinner mainDishesSpinner, beveragesSpinner, dessertsSpinner, fastFoodSpinner, chineseSpinner;
    private TextView totalPriceTextView;
    private Button proceedButton;

    // Define the price arrays for each category
    private String[] mainDishPrices;
    private String[] beveragePrices;
    private String[] dessertPrices;
    private String[] fastFoodPrices;
    private String[] chinesePrices;

    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Initialize the spinners
        mainDishesSpinner = findViewById(R.id.Main_dishes);
        beveragesSpinner = findViewById(R.id.beverages);
        dessertsSpinner = findViewById(R.id.desserts);
        fastFoodSpinner = findViewById(R.id.fastFood);
        chineseSpinner = findViewById(R.id.chinese);

        // Initialize the total price TextView
        totalPriceTextView = findViewById(R.id.total_price);

        // Initialize the "Proceed to Pay" button
        proceedButton = findViewById(R.id.proceed_button);
        proceedButton.setOnClickListener(new View.OnClickListener()
        {
            @Override
            public void onClick(View v)
            {
                // Calculate the total price based on the selected options
                int totalPrice = calculateTotalPrice();
                // Display the total price
                totalPriceTextView.setText(String.valueOf(totalPrice));
                totalPriceTextView.setVisibility(View.VISIBLE);
            }
        });

        // Create adapters for the spinners using the string arrays
        ArrayAdapter<CharSequence> mainDishesAdapter = ArrayAdapter.createFromResource(
                this,
                R.array.mainDishes,
                android.R.layout.simple_spinner_item
        );

        ArrayAdapter<CharSequence> beveragesAdapter = ArrayAdapter.createFromResource(
                this,
                R.array.beverages,
                android.R.layout.simple_spinner_item
        );

        ArrayAdapter<CharSequence> dessertsAdapter = ArrayAdapter.createFromResource(
                this,
                R.array.desserts,
                android.R.layout.simple_spinner_item
        );

        ArrayAdapter<CharSequence> fastFoodAdapter = ArrayAdapter.createFromResource(
                this,
                R.array.fastFood,
                android.R.layout.simple_spinner_item
        );

        ArrayAdapter<CharSequence> chineseAdapter = ArrayAdapter.createFromResource(
                this,
                R.array.chinese,
                android.R.layout.simple_spinner_item
        );

        // Set the layout for the dropdown lists
        mainDishesAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        beveragesAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        dessertsAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        fastFoodAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        chineseAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);

        // Apply the adapters to the spinners
        mainDishesSpinner.setAdapter(mainDishesAdapter);
        beveragesSpinner.setAdapter(beveragesAdapter);
        dessertsSpinner.setAdapter(dessertsAdapter);
        fastFoodSpinner.setAdapter(fastFoodAdapter);
        chineseSpinner.setAdapter(chineseAdapter);

        // Retrieve the price arrays from resources
        mainDishPrices = getResources().getStringArray(R.array.mainDishPrices);
        beveragePrices = getResources().getStringArray(R.array.beveragesPrices);
        dessertPrices = getResources().getStringArray(R.array.dessertsPrices);
        fastFoodPrices = getResources().getStringArray(R.array.fastFoodPrices);
        chinesePrices = getResources().getStringArray(R.array.chinesePrices);

        totalPriceTextView.setVisibility(View.GONE);
    }

    private int calculateTotalPrice()
    {
        int totalPrice = 0;

        // Retrieve the selected positions from each spinner
        int mainDishPosition = mainDishesSpinner.getSelectedItemPosition();
        int beveragePosition = beveragesSpinner.getSelectedItemPosition();
        int dessertPosition = dessertsSpinner.getSelectedItemPosition();
        int fastFoodPosition = fastFoodSpinner.getSelectedItemPosition();
        int chinesePosition = chineseSpinner.getSelectedItemPosition();

        // Retrieve the prices based on the selected positions
        int mainDishPrice = Integer.parseInt(mainDishPrices[mainDishPosition]);
        int beveragePrice = Integer.parseInt(beveragePrices[beveragePosition]);
        int dessertPrice = Integer.parseInt(dessertPrices[dessertPosition]);
        int fastFoodPrice = Integer.parseInt(fastFoodPrices[fastFoodPosition]);
        int chinesePrice = Integer.parseInt(chinesePrices[chinesePosition]);

        // Calculate the total price
        totalPrice = mainDishPrice + beveragePrice + dessertPrice + fastFoodPrice + chinesePrice;

        return totalPrice;
    }
}

XML code:

<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <TextView
        android:id="@+id/textView"
        android:layout_width="135dp"
        android:layout_height="25dp"
        android:text="Main Dishes"
        android:textStyle="bold"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.036"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.022" />

    <TextView
        android:id="@+id/textView2"
        android:layout_width="135dp"
        android:layout_height="25dp"
        android:text="Beverages"
        android:textStyle="bold"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.036"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.175" />

    <TextView
        android:id="@+id/textView3"
        android:layout_width="135dp"
        android:layout_height="25dp"
        android:text="Desserts"
        android:textStyle="bold"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.036"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.322" />

    <TextView
        android:id="@+id/textView4"
        android:layout_width="135dp"
        android:layout_height="25dp"
        android:text="Fast Food"
        android:textStyle="bold"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.036"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.47" />

    <Spinner
        android:id="@+id/Main_dishes"
        android:layout_width="247dp"
        android:layout_height="24dp"
        app:layout_constraintBottom_toTopOf="@+id/beverages"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.06"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.338" />

    <Spinner
        android:id="@+id/beverages"
        android:layout_width="247dp"
        android:layout_height="24dp"
        app:layout_constraintBottom_toTopOf="@+id/desserts"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.06"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.635" />

    <Spinner
        android:id="@+id/desserts"
        android:layout_width="247dp"
        android:layout_height="24dp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.06"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.356" />

    <Spinner
        android:id="@+id/fastFood"
        android:layout_width="247dp"
        android:layout_height="24dp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.06"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.504" />

    <Spinner
        android:id="@+id/chinese"
        android:layout_width="247dp"
        android:layout_height="24dp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.06"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.653" />

    <TextView
        android:id="@+id/textView5"
        android:layout_width="135dp"
        android:layout_height="25dp"
        android:text="Chinese"
        android:textStyle="bold"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.036"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.618" />

    <TextView
        android:id="@+id/total_price"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:gravity="center_horizontal"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.498"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.768" />

    <Button
        android:id="@+id/proceed_button"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Proceed to Pay"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.871" />

</androidx.constraintlayout.widget.ConstraintLayout>






