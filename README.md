# Text-based RPG Game
 > Authors: [Aszet07](https://github.com/aszet07) [jSwAggy01](https://github.com/jSwAggy01) [CaptainPig-gy](https://github.com/CaptainPig-gy)

## Technical Summary
This project utilized the continuous integration method of Github Actions. The work was divided among all three of us in which we all played an important role in the development:
- Jeff: Programming lead
- Alex: Technical lead
- Jason (me): Design/documentation lead

We were all involved in the programming process; however, each of us spent the majority of our time on the areas we were best at and let our weaknesses be complemented by each others strengths.

Along with Github Actions, we also used the Github Projects Kanban board to serve as a marker for our progress and as a backlog for issues that needed to be addressed and resolved.

## Phase I - Introduction
**Problem definition**: How to make a game that can be experienced as an interactive story, tailored towards the player's decisions.

Description:
- We decided upon creating a game because the concept of text-based video game sounded like a fun/interesting idea for a project, seeing as how video games are one of the fields software developers may enter.
- The game will be taking user input from a series of scripted options (via a terminal) and outputting a situation tailored towards that input/decision. This will continue until the player meets his/her doom or successfully chooses the right choices and gets to the ending/final situation of the game.
- The game will also be programmed in C++.
- As far as data structures, we might be using trees where the root node represents the start of the game, and the other nodes represent decisions/outcomes. Leaves will represent good or bad endings.
- Likewise, the features to be implemented are: choices presented via text through a terminal, outcomes telling the player whether or not the decision they made was a desirable one, a companion to accompany the player through this role-playing adventure, and immersive gameplay.

## Inheritance Diagram

![UML diagram for class inheritance ](https://github.com/jSwAggy01/Text-based-RPG-Game/blob/main/UML%20Final%20Project_1.jpg?raw=true)
 
## Phase II - Questions
- What design pattern(s) did you use?:

>       We used scrum to organize the team.

- Why did you pick this pattern? And what feature did you implement with it?
     
 >      Scrum is a good way to organize and pace a project. We used sprint meetings and sprint cycles to share and work on ideas.
 >      Epics and user stories helped to break down the big task of making a game to actionable tasks.
 >      We also made a UML diagram to break down the objects and interactions.
 
- How did the design pattern help you write better code?
     
 >     Sprint meetings gave us time to get together and discuss issues and solutions to problems. 
 >     Tasks that we made from the epics and user stories were manageable for the short timeframe that we have. 
 >     Our UML chart was a good skeleton to show how objects and functions would interact before we started writing. 
 >     The Kanban informed the group on what tasks were in progress and what had to be done, it helped to show the progress we were making during the sprint cycle.

## Final Project Output
<img src="https://user-images.githubusercontent.com/100899925/180346974-6af2206d-1c19-45dd-8e95-a65bd18a4420.png" height="500" width="1000" >
 
## Installation/Usage!
- Requirements: 
  - Install and enable the following:
    - C/C++ by Microsoft C/C++ Extension Pack by Microsoft C/C++ 
    - Themes by Microsoft CMake Tools by Microsoft 
    - YAML by Red Hat 
    - Better C++ Syntax by Jeff Hykin 
  - (AND make sure you are running the redhat compiler kit in your IDE)
- The way to install this game is to download the files from the repository via .zip and in an IDE, run the commands:
  - cmake .
  - make
  - Note: For certain cases, you may need to delete the CMake cache file in order for Make to run correctly (only if you get an error)
  - From there, you can open up any terminal that your computer has, and change directories so that you're in that downloaded folder. Run ./bin/finalProject and the game will be executed :)

## Testing
- For starters, we implemented code coverage software from lab 6 and modified it so that it could analyze how much lines of code our unit tests were covering in the class files
- The Final Project was tested and validated with the Google Test Suite.
- Each function of the test helped validate the code for each of the Character Classes.

- Google Testing was an important step in the final project as it tested the "combat and defense" system of the game before any story or combat was implemented.
- These tests insured that the code will work when the final deliverable of the game was implemented.
- In the scope for this final project, team members only needed to implement the working  code and no errors were given as it was already tested.

## Conclusion
Overall, this project demonstrated our ability as a team to adapt and adjust based on our strengths and shortcomings, our technical proficiency in the technologies and practices utilized, and our determination, commitment and perseverance to deliver a working prototype despite the unprecedented loss of a team member.
