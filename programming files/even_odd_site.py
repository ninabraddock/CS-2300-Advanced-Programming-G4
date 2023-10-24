with open("numbers.html", "w") as f:
    # Write header to file
    f.write("<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n")
    f.write("<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n")
    # Iterate through 50 integers
    for i in range(1, 50):
        # Write even numbers
        if i % 2 == 0:
            f.write("<tr><td>{}</td><td></td></tr>\n".format(i))
        # Write odd numbers
        else:
            f.write("<tr><td></td><td>{}</td></tr>\n".format(i))
    f.write("</table>\n</body>\n</html>")

# Read from numbers
with open("numbers.html", "r") as f:
    print(f.read())
    
