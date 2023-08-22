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


        mainDishesSpinner = findViewById(R.id.Main_dishes);
        beveragesSpinner = findViewById(R.id.beverages);
        dessertsSpinner = findViewById(R.id.desserts);
        fastFoodSpinner = findViewById(R.id.fastFood);
        chineseSpinner = findViewById(R.id.chinese);


        totalPriceTextView = findViewById(R.id.total_price);


        proceedButton = findViewById(R.id.proceed_button);
        proceedButton.setOnClickListener(new View.OnClickListener()
        {
            @Override
            public void onClick(View v)
            {

                int totalPrice = calculateTotalPrice();

                totalPriceTextView.setText(String.valueOf(totalPrice));
                totalPriceTextView.setVisibility(View.VISIBLE);
            }
        });

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

        mainDishesAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        beveragesAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        dessertsAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        fastFoodAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        chineseAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);

        mainDishesSpinner.setAdapter(mainDishesAdapter);
        beveragesSpinner.setAdapter(beveragesAdapter);
        dessertsSpinner.setAdapter(dessertsAdapter);
        fastFoodSpinner.setAdapter(fastFoodAdapter);
        chineseSpinner.setAdapter(chineseAdapter);

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

        int mainDishPosition = mainDishesSpinner.getSelectedItemPosition();
        int beveragePosition = beveragesSpinner.getSelectedItemPosition();
        int dessertPosition = dessertsSpinner.getSelectedItemPosition();
        int fastFoodPosition = fastFoodSpinner.getSelectedItemPosition();
        int chinesePosition = chineseSpinner.getSelectedItemPosition();


        int mainDishPrice = Integer.parseInt(mainDishPrices[mainDishPosition]);
        int beveragePrice = Integer.parseInt(beveragePrices[beveragePosition]);
        int dessertPrice = Integer.parseInt(dessertPrices[dessertPosition]);
        int fastFoodPrice = Integer.parseInt(fastFoodPrices[fastFoodPosition]);
        int chinesePrice = Integer.parseInt(chinesePrices[chinesePosition]);

        totalPrice = mainDishPrice + beveragePrice + dessertPrice + fastFoodPrice + chinesePrice;

        return totalPrice;
    }
}