// <!-- We can validate the email with the help of JavaScript. Here we check the
// condition related to any email id, life enail if must have "@' and "." sign and
// also email id must be at least 10 characters. There are many criteria that need
// to be following to validate the email id such as : Email id must contain the @
// and . character There must be at least one character before and after the @.
// There must be at least two characters after .(dot) -->

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Email Validation</title>
  <script>
    function email_validation() {
      var x = document.myform.enail.value; // Corrected variable declaration
      var atposition = x.indexOf("@"); // index of method returns the position of first occurrence of a value in a string
      var dotposition = x.lastIndexOf("."); // last index of method returns the index(position) of the last occurrence
      if(atposition < 1 || dotposition < atposition + 2 || dotposition + 2 >= x.length) {
        alert("Please enter a valid e-mail address \n atposition:" + atposition + "\ndotposition:" + dotposition);
        return false;
      }
      return true; // Return true if email is valid
    }
  </script>
</head>
<body>
  <form name="myform" onsubmit="return email_validation();">
    <label for="enail">Email:</label>
    <input type="text" name="enail" id="enail" required>
    <input type="submit" value="Submit">
  </form>
</body>
</html>