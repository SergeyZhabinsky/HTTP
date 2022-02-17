package com.zhabinsky.firstlesson

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.EditText
import android.widget.Toast
import com.zhabinsky.firstlesson.R
import com.zhabinsky.firstlesson.data.Start

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val btn = findViewById<Button>(R.id.btn_click)
        val editText = findViewById<EditText>(R.id.editText_showInfo)

        btn.setOnClickListener(object : View.OnClickListener{
            override fun onClick(v: View?) {
                val s : Start
                s.eText
                editText.setText("eeee")
                Toast.makeText(this@MainActivity, "click", Toast.LENGTH_SHORT).show()
            }
        })
    }
}