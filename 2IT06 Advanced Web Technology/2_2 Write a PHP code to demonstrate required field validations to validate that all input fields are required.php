<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>2 - 2</title>
    <style>
        body{
            background-image:url("https://images6.alphacoders.com/309/309983.jpg");
            background-size:cover;
        }
        h1{
            margin-top:10%;
        }
        td{
            padding:5px;
            border-radius:5%;
            font-weight: bold;
            /*border:3px solid;*/
        }
        .error{
            color:red;
            border: 0px solid;
        }
    </style>
</head>
<body>
<?php
    error_reporting(0);
    $A="";
    $B="";
if(isset($_POST["submit"]))
{
    if (!filter_var($_POST["email"],FILTER_VALIDATE_EMAIL))
    {
        $A='Email is invalid';
    }
    if (!preg_match("[0-9]{5}-[0-9]{5}",$_POST["phone"]))
    {
        $B='Mobile Number is INVALID';
    }
}
?>
    <center>
    <div>
    <h1> Registration Form </h1>
    <table>
        <FORM action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>" method="post">
        <tr>
            <td><label for="name">Name:</label></td>
            <td><input type="text" id="fname1" name="fname" required></td>
            <td><span class="error">*</span></td>
        </tr>
        <tr>
            <td><label for="password">Password:</label></td>
            <td><input type="number" id="password" name="password" required></td>
            <td><span class="error">*</span></td>
        </tr>
        <tr>
            <td><label for="email">Email:</label></td>
            <td><input type="text" id="email1" name="email" required></td>
            <td><span class="error">*<?php echo $A?></span></td>
        </tr>
        <tr>
            <td><label for="Pin-code">Pin Code:</label></td>
            <td><input type="number" id="pin-code" name="pin-code" required></td>
            <td><span class="error">*</span></td>
        </tr>
        <tr>
            <td><label for="mobile">Moblie No:</label></td>
            <td><input type="tel" id="phone" name="phone" placeholder="12345-67890" required></td>
            <td><span class="error">*<?php echo $B?></span></td>
        </tr>
        <tr>
            <td colspan="2"><center><button type="submit" name="submit" value="Submit">Submit</button></center></td>
        </tr>
        </FORM>
    </table>
    </div>
    </center>
</body>
</html>