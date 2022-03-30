<?php
    
    if(isset($_POST['input'])){
    $input = $_POST['input'];
    $q0 = 0; $q1= 1;
    $final_state = $q0; 
    $current_state = $q0;
    $input = str_split($input);
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
}

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="./DFA_EVEN_NO_OF_A_MANUAL.php" method="post">
        <input type="text" name="input">
        <input type="submit" value="CHECK">
    </form>
</body>
</html>