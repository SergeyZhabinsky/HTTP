package com.zhabinsky.firstlesson.data

data class ClHome( val floorCount : Int = 2, val colour : String = "Yellow"  )
//data class Weather(var town : String = "ANY", var temperature : Int = 10)

//class Start(val eText: EditText) {
class Start() {
    var homes : ArrayList<ClHome> = arrayListOf()

    init {
//        var homes : ArrayList<ClHome> = arrayListOf(ClHome())
        homes.add( ClHome(floorCount = 3, "White") )
        homes.add( ClHome(floorCount = 4, "Yellow") )
        homes.add( ClHome(floorCount = 7, "Green") )
    }


    fun getArray(){
        for(x in homes)
            println( "Значение = " + x.floorCount + "(" + x.colour + ")")

        homes[1] = homes[1].copy( floorCount = 10 )
        for(x in homes)
            println( "Значение = " + x.floorCount + "(" + x.colour + ")")
    }
}