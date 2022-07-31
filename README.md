# Software-Engineering
Software Component Cataloguing Software (SCCS)
----------------------------------------------------------
- Now-a-days everything is linked with Technology. People are highly dependent on software (projects) to perform any task easily. 
- The problem is that it is difficult to develop big projects in less time.
- A developer need to develop everything from scratch and he may need to do so many modifications to satisfy user requirements. This problem is mainly faced by the people who are developing projects in companies.
- The main objective of SCCS is to provide a platform to the users from where they can use the components that are available and can complete big projects in less time.
--------------------------------------------------------------------
Developed in: C++ ( STL and Basic File Concepts)
------------------------------------------------------------
main.cpp (main file)
------------------------------------------------------------
Input: User ( Existing User/ New User) / Cataloguer 
- Based on the category choosen , if he/she is existing user/ cataloguer we will authenticate and accordingly we will display various functionalities available for him/her.
- If it is a new user then we will create an account and display various functionalities availabe to the user
- Appropriate methods in cataloguer.h, component.h and User.h will be called according to his/her choice.
- Default values taken for Cataloguer (username=admin and password=admin)
-------------------------------------------------------------
Component.h
-------------------------------------------------------------
- Every component is associated with one or more keywords and categories
- Components are maintained in compList and we have used list of pointers to store corresponding index component keywords and categories in keywordList and categoryList.
- By default I have taken some components and keywords and categories as I am not using database in this application.
- An user / cataloguer can search for a component using keyword/category. We will traverse the keywordList/categoryList and wherever the keyword/category is matching then we will print component corresponding to the index.
- display() is used to display all components available in SCCS along with keywords and categories associated to a component.
- addComponent(), associateKeyword(), associateCategory(),deleteComponent() is used by cataloguer.
- Values taken for User( user=user and password=user)
--------------------------------------------------------------
User.h
--------------------------------------------------------------
- User can raise a query and I have stored queries raised by user in query.txt file using some basic file operations.
- display() is used by cataloguer and authenticate is to authenticate username and password given by the user.
--------------------------------------------------------------
Cataloguer.h (Admin) 
--------------------------------------------------------------
Cataloguer has full control over the system and he can perform following operations :
- View Component catalogue by calling display() in component.h
- Search component by keyword / category.
- Add new component along with keyword and category.
- Associate keyword to a component
- Associate category to a component
- Delete Component 
- View Queries raised by users (Get data from query.txt) file.
- List of Users
------------------------------------------------------------------------
Future scope: 
- This is the basic implementation which gives overview about SCCS. We can add database, frontend, Backend Validations etc.
------------------------------------------------------------------------
