# portfolio

- Summarize the project and what problem it was solving.

This project involves reading in text records from a grocery store, analyzing frequency information, and outputting that as well as writing it to a data file. The program takes in a text file of each purchase throughout the day in chronological order, then calculates the frequency of each item. Depending on user input, the program can output the frequency of a single item, the frequency of all items, and/or a histogram of relative frequencies of all items. All frequency information is to be saved to a data file as a backup. 

- What did you do particularly well?

Considering I had no experience with associated containers prior to this project, I think that I did a good job of reading text into an unordered map, while simultaneously calculating and storing frequency. Additionally, I am satisfied with my input validation, which effectively prevents errors that would otherwise occur with improper user input. 

- Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

I could make my code more secure by adding more private variables. The only private variable in my code is the unordered map, but I could have also made the filestreams private. Additionally, I could have made the code more versatile by passing the filename as a parameter to the function that reads the file into a map. This would allow a different input file to be read without having to change the function manually for each file. Finally, I could have developed the GroceryTracker class more, giving it a constructor. 

- Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

  I found implementing the mapped container to be by far the most challenging portion of code to write. Since I had no experience with maps, I needed to learn the concept and the syntax. I read over the section on maps in the textbook, and while that was a useful introduction, it wasn't very catered to the specific use case I needed. I did more independent research on maps, and came across the GeeksForGeeks pages on maps and unordered maps. The code snippets offered by this website were very useful in demonstrating how to iterate through and fill a map. I'll definitely be keeping this website in mind for future coding concerns. 

- What skills from this project will be particularly transferable to other projects or course work?

  I definitely think that using containers--particularly map containers--is a useful and transferable skill. Additionally, although this wasn't the first project for this course to involve multiple files, it was certainly good practice to get used to dividing up my program into class declaration, definitions, and main. One issue that I ran into during this project that I will keep in mind for the future is that I suspected one of my member function calls was malfunctioning, since it seemed to output in a never-ending loop. I kept adjusting the function, to no avail. Finally, I went back to main and adjusted where it was actually getting called, which I only then realized was part of a poorly written loop. I'll transfer this troubleshooting knowledge to future projects and course work.

- How did you make this program maintainable, readable, and adaptable?

  I added in-line comments to all code as I was writing it. Once I was done, I added more detailed descriptions above my functions to ensure readability. I saved this for last since serveral of my functions underwent significant change from what I had originally planned for them. Additionally, maintaining separate but well-documented files did wonders for the readability of my code. 

