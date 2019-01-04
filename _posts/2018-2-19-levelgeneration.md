---
title: "Level Generation 19/02/2018"
date: 2018-2-19
excerpt_separator: <!--more-->
categories:
  - General
tags:
  - Game Development
  - Unity
  - Roguelike
  - turnbased
---

## Design  
The method for procedual generation that I have used is firstly generate a 2D array of cube objects, secondly spawn 2 objectives (Player and Boss spawns) and finally connect the 2 and generate rooms allong the way. At the center of these rooms I will create a monster spawner, that will spawn a series of monsters from the games database (More detail on that later). Later on I will be creating a script (or including a method in the same script) that will generate filler rooms where random party members will have a chance to spawn.

## Implementation  
How I decided to implement this was to firstly choose a random position on the 2D array to spawn using Random.Range(Between 0 and 39) and from that get a boss spawn (39 - player position x and z). After this I then would then create a 1 cube border around the spawn using the position minus or plus 1 in each axis. Then I used multiple if and else if statements to check if the boss spawn is above, below, left or right of the player spawn and then change the two variables up and right to either 1 or -1. A negative means the opposite of the named direction, e.g. if it is -1 up then the direction it is indicating would be down. I then add the up and right variables to the current x and z variables respectivly.

Then I enter a while loop, which repeats until the current x and z equal the boss x and z. In this loop I run another method called SpawnRoom() which creates a corridor by lowering the currently selected cube and adding either the up or right variables, this repeats a random number of times. After spawning a corridor the method then uses the same method to spawn a room of random dimentions. When the current x and z variables are equal to the center of this room a monster spawner is created.

The final result looks like this

<html>
  <img src="https://jjrwalker.github.io/assets/images/LevelGeneration.jpg" alt="Level Generation">
</html>
