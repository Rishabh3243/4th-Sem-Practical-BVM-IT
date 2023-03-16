<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>1_2 Program</title>
</head>
<body>
<center>

<form method="post" action="">
<h1> FORM </h1><br>
  Name: <input type="text" name="fname1" placeholder="<?php echo $_POST['fname']?>"><br><br>
  Phone: <input type="text" name="phone1" placeholder="<?php echo $_POST['phone']?>"><br><br>
  Email: <input type="text" name="email1" placeholder="<?php echo $_POST['email']?>"><br><br>
  <input type="submit" name="submit12">
</form>
</center>
</body>
</html>