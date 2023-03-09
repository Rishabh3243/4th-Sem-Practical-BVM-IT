<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

</body>
</html>
<?php
ini_set('display_errors','off');
$n = rand (1,5);
switch($n)
{
    case 1:
        $image_file="https://images.hdqwalls.com/wallpapers/bthumb/colorado-mountains-4k.jpg";
        break;
    case 2:
        $image_file="https://images.hdqwalls.com/wallpapers/bthumb/green-road-nature-4k-a6.jpg";
        break;
    case 3:
        $image_file="https://images.hdqwalls.com/wallpapers/bthumb/landscape-storm-rays-sea-clouds-cave-fantasy-8k-o9.jpg";
        break;
    case 4:
        $image_file="https://images.hdqwalls.com/wallpapers/bthumb/mountains-landscape-dark-nature-4k-i0.jpg";
        break;
    case 5:
        $image_file="https://images.hdqwalls.com/wallpapers/bthumb/4k-landscape-mountains-countryside-5k-40.jpg";
        break;

    
}
echo "<center><br><h1>Random Image :</h1><br> <img src=$image_file/></center>";
?>