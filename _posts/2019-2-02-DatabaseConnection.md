---
title: "Database Connection and Firing Stance 1/02/2019"
date: 2019-2-1
excerpt_separator: <!--more-->
categories:
  - General
tags:
  - Game Development
  - Unity
---

## Database Connection Design
After developing a simple player inventory class and UI, I decided to add randomised or predetermined items to it to test its functionality. Originally, similar to the previous turn based project, I had intended to randomly generate weapons and items for the player to pick up. However during this process I realised that this system would require a large amount of depth and complexity to work as I had intended (to generate unique weapons) otherwise the items would feel to plain and generic. As such I decided to follow a similar approach to other titles in the genre that have been previously mentioned, and add a set list of weapons and items. Although this might take a lot longer to design, the end result will be more effective than the alternative. To do this I decided to store all the information required inside a database.  
The database currently contains two tables, weapons and items. The weapon table contains simple information such as: name, damage, damage range, spread, rate of fire, max ammo, mag size, range, crit chance and the file path for the relevant sprite. The Item table contains similar fields like name, type and image path but also contains a string value for the effect. Effects will be denoted as a string of characters, the 1st being the modifier (+,-,/,*) which will store the operation that will be performed. The 2nd and 3rd characters will show the stat that will be changed by the item (e.g hp, sp), and finally the 4th and 5th will be two digits showing the magnitude of the effect. The effect this will have will change based on the item type that is stored in a different field.  
<html>
  <img src="https://jjrwalker.github.io/assets/images/database.jpg" alt="Database">
</html>
## Database Connection Implementation
To get data from the database I am using a plugin called SQLite along with some basic SQL commands in a new class called DataAccessor. This class currently has one public method called GetDataFromTable, which returns an object and takes the Type of the data we want to get plus an int id (the key we want to get). This then uses a dictionary (each type of data is assigned an int) and a switch statement to determine which steps to take going forward. I decided to use this approach, even though I currently only have two types of data, as it is easily expandable and will be more efficient than if statements when it is expanded upon.  
<html>
  <img src="https://jjrwalker.github.io/assets/images/Databasecode.jpg" alt="Database Code">
</html>
## Firing Stance
Along with this I also implemented a standing fire frame for the player sprite, as it looked a little unnatural to have the gun rotate in their hand during the idle frame. This frame will flip based on the angle between the player’s up vector and the current position of the reticle, I already had some similar code for getting the dot product of two vectors so I just reused that.  
<html>
<iframe src="https://media.giphy.com/media/2rAF0ItSn7VYTHPBCr/source.mp4" width="640" height="450" frameBorder="0" class="giphy-embed" allowFullScreen></iframe><p><a href="https://giphy.com/gifs/2rAF0ItSn7VYTHPBCr"></a></p>
</html>
