<?php
    function generateString(){
        $input = "";
        $symbols = ["a", "b"];
        for($i=0; $i<10; $i++){
            $input .= $symbols[rand(0,1)];
        }
        return $input;
    }
    echo "\n GENERATED STRING => ".generateString();
    
    $q0 = 0; $q1= 1;
    $final_state = $q0; 
    $current_state = $q0;
    $input = str_split(generateString());
    foreach ($input as $key => $symbol) {
        if($symbol=='a' && $current_state==$q0){
            $current_state = $q1;
        }
        elseif($symbol=='b' && $current_state==$q0){
            $current_state = $q0;
        }
        elseif($symbol=='b' && $current_state==$q1){
            $current_state = $q1;
        }
        elseif($symbol=='a' && $current_state==$q1){
            $current_state = $q0;
        }
    }
   
    if($current_state === $final_state){
        echo "<br/> ACCEPTED";
    }else{
        echo "<br /> REJECTED";
    }




?>
