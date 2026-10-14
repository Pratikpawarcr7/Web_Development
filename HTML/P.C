##########################################################################################################################
#
#  https://github.com/thapatechnical/HTMLCourse/tree/main/starter_file_html_course_thapatechnical
#
###########################################################################################################################

HTML :-
     Q1). Interview Answer: <picture> Tag in HTML

Answer:
The <picture> tag in HTML is used to display different images based on screen size, device, or image format. It helps create responsive images for websites.

Example:

<picture>
    <source media="(max-width: 600px)" srcset="mobile.jpg">
    <source media="(max-width: 1200px)" srcset="tablet.jpg">
    <img src="desktop.jpg" alt="Example Image">
</picture>

Simple Interview Line:

“The <picture> tag is used to provide different images for different screen sizes or devices, making images responsive.”

==========================================================================================================================================

==========================================================================================================================================

Q2). HTML <figure> Tag — Interview Answer

The <figure> tag in HTML is used to display self-contained content, such as an image, diagram, chart, or code example.

It is commonly used with the <figcaption> tag to provide a caption or description.

Example:

<figure>
    <img src="flower.jpg" alt="Flower">
    <figcaption>Beautiful Flower</figcaption>
</figure>

Interview answer in simple words:

“The <figure> tag is used to group an image or other self-contained content with its caption. The <figcaption> tag is used to provide the caption.”

==========================================================================================================================================

==========================================================================================================================================

HTML <audio> Tag — Interview Answer

The <audio> tag in HTML is used to add and play audio files on a webpage.

Example:
<audio controls>
    <source src="song.mp3" type="audio/mpeg">
</audio>
Interview Answer:

“The <audio> tag is used to embed and play audio files in an HTML webpage. The controls attribute provides play, pause, volume, and other controls.”

Common Attributes:
controls → Shows audio controls
autoplay → Starts audio automatically
loop → Repeats the audio
muted → Starts audio without sound

==========================================================================================================================================

==========================================================================================================================================

The <form> tag in HTML is used to collect user input and send that data to a server.

Example
<form action="/submit" method="post">

    <label>Name:</label>
    <input type="text" name="name">

    <label>Email:</label>
    <input type="email" name="email">

    <input type="submit" value="Submit">

</form>
Interview Answer

“The <form> tag is used to create a form in HTML for collecting user information such as name, email, password, and other data. The form data can be submitted to a server for processing.”

Important Attributes
action → Specifies where the form data should be sent.
method → Specifies how the data is sent, commonly GET or POST.
name → Gives a name to a form or form control.

Easy to remember:
<form> → Collect user data → Submit data → Server.

==========================================================================================================================================Order And UnOrder List
==========================================================================================================================================

rdered List and Unordered List in HTML
In HTML, we use lists to display a group of related items in a structured format.
1. Ordered List (<ol>)
An Ordered List displays items in a specific order using numbers or letters.
Example:

<!DOCTYPE html>
<html>
<body>

<h3>Programming Languages</h3>

<ol>
    <li>C</li>
    <li>C++</li>
    <li>Java</li>
    <li>Python</li>
</ol>

</body>
</html>



Output:
Programming Languages
1. C
2. C++
3. Java
4. Python

- <ol> — Defines an ordered list.
- <li> — Defines each list item.
Types of Ordered Lists
Use the type attribute to change the numbering style.
<ol type="1">  <!-- 1, 2, 3 -->
<ol type="A">  <!-- A, B, C -->
<ol type="a">  <!-- a, b, c -->
<ol type="I">  <!-- I, II, III -->
<ol type="i">  <!-- i, ii, iii -->


2. Unordered List (<ul>)
An Unordered List displays items using bullet points instead of numbers.
Example:

<!DOCTYPE html>
<html>
<body>

<h3>Web Technologies</h3>

<ul>
    <li>HTML</li>
    <li>CSS</li>
    <li>JavaScript</li>
    <li>React</li>
</ul>

</body>
</html>



Output:
Web Technologies
• HTML
• CSS
• JavaScript
• React

- <ul> — Defines an unordered list.
- <li> — Defines each list item.
Types of Unordered Lists
Use CSS to change the bullet style.
<ul style="list-style-type: disc;">
<ul style="list-style-type: circle;">
<ul style="list-style-type: square;">
<ul style="list-style-type: none;">


3. Difference between Ordered and Unordered Lists
|-----------------------------------|-------------------------------------------|
|	Ordered List		    |	Unordered List				|
|-----------------------------------|-------------------------------------------|
| Uses the <ol> tag		    | 	Uses the <ul> tag			|
|				    |						|
| Displays numbers or letters	    | 	Displays bullet points			|
|				    |						|
| Used when order matters	    | 	Used when order does not matter		|
|                                   |						|
| Example: Steps to install 	    | 	Example: List of subjects		|
| software                          |						|
---------------------------------------------------------------------------------
4. Interview Question

Q: What is the difference between <ol> and <ul> in HTML?

Answer: An ordered list (<ol>) displays items in a numbered or lettered sequence, whereas an unordered list (<ul>) displays items using bullet points. Both use the <li> tag to define list items.

Memory trick:
- OL = Ordered = Numbers
- UL = Unordered = Bullets

