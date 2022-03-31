package com.zhabinsky.firstlesson.data

import android.widget.EditText

data class ClHome( val floorCount : Int = 2, val colour : String = "Yellow"  )

class Start(val eText: EditText) {
    init {
        var cHM: ArrayList<ClHome>

        cHM = ArrayList()
        cHM.add(ClHome(floorCount = 3, "White"))
        cHM.add(ClHome(floorCount = 6, "White"))
    }
}