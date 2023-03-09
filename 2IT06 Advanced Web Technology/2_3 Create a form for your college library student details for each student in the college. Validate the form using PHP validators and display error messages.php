<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>2 - 3</title>
    <style>
        body{
            background-image:url("https://media.timeout.com/images/103550470/image.jpg");
            background-size:cover;
        }
        div{
            margin-top:10%;
            width:35%;
            background:white;
            padding:30px;
            opacity: 0.85;
            border-radius:30px;
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
    $A=$B=$C="";
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
    if (!preg_match("[0-9]{3}[A-Z]{2}[0-9]{3}",$_POST["phone"]))
    {
        $C='ID is invalid';
    }
}
?>
    <center>
    <div>
    <h1> Library Student Details Form </h1>
    <table>
        <FORM action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>" method="post">
        <tr>
            <td><label for="id">ID Number:</label></td>
            <td><input type="text" id="id" name="id" placeholder="21IT001" required></td>
            <td><span class="error">*<?php echo $C?></span></td>
        </tr>
        <tr>
            <td><label for="name">First Name:</label></td>
            <td><input type="text" id="fname1" name="fname" required></td>
            <td><span class="error">*</span></td>
        </tr>
        <tr>
            <td><label for="lname">Last Name:</label></td>
            <td><input type="text" id="lname" name="lname" required></td>
            <td><span class="error">*</span></td>
        </tr>
        <tr>
            <td><label for="email">Email:</label></td>
            <td><input type="text" id="email1" name="email" required></td>
            <td><span class="error">*<?php echo $A?></span></td>
        </tr>
        <tr>
            <td><label for="gender">Gender:</label></td>
            <td>
                <input type="radio" id="male" name="gender" required>Male
                <input type="radio" id="female" name="gender" required>Female
            </td>
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