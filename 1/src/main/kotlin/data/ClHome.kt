package com.zhabinsky.firstlesson.data

import kotlin.reflect.typeOf

data class ClHome( val floorCount : Int = 2, val colour : String = "Yellow"  )
//data class Weather(var town : String = "ANY", var temperature : Int = 10)

//class Start(val eText: EditText) {
class Start() {
    var homes : ArrayList<ClHome> = arrayListOf()

    init {
        homes.add( ClHome(floorCount = 3, "White") )
        homes.add( ClHome(floorCount = 4, "Yellow") )
        homes.add( ClHome(floorCount = 7, "Green") )
    }




    fun setValue( _nClass : Int, _field : String, _value : String ) : Boolean{
        var bRetValue = true

        if(_nClass.toInt() <= homes.size-1){

            if(_field.equals("floorCount", true) ){
                homes[_nClass] = homes[_nClass].copy( floorCount = _value.toInt() )
            }else if(_field.equals("colour", true) ){
                homes[_nClass] = homes[_nClass].copy( colour = _value )
            }else bRetValue = false

        }
        else bRetValue = false

        return bRetValue
    }


    fun getArray(){
        for(x in homes)
            println( "Значение = " + x.floorCount + "(" + x.colour + ")")
    }
}