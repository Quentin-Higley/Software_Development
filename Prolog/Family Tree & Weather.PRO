%     Quentin Higley
%     CS 2130 – 9:30 am
%     Assignment #1
%     Dr. Huson
%     Due: 31.08.19
%     Filename: individualAssignment1
%     Version: 1.0
% ===============================================================
% This program sets up a family tree and tells whether birds are
% happy on a givin day.
% ===============================================================

%Family tree
%declare female facts
female(pamela).
female(liz).
female(ann).
female(patricia).

%declare male facts
male(tom).
male(bob).
male(jim).

%create parents
parent(patricia, jim).
parent(bob, patricia).
parent(bob, ann).
parent(pamela, bob).
parent(tom, bob).
parent(tom, liz).


%find all children of a parent
offspring(Child, Parent) :-
    parent(Parent, Child).

%find all female parents of a child
mother(Parent, Child) :-
    parent(Parent, Child), 
    female(Parent).

%find the parents of the childs parents
grandparent(Grandparent, Child) :-
    parent(Parent, Child),
    parent(Grandparent, Parent).

%find the female children of the parent of the child, exluding the child 
sister(Children, Child) :-
    parent(Parent, Child),
    offspring(Children, Parent),
    female(Children),
    not(Children = Child).

%get all previous parents
ancestor(Ancestor, Child) :- parent(Ancestor, Child).
ancestor(Ancestor, Child) :- parent(Ancestor, Parent), ancestor(Parent, Child).
 
%====================================================================================
%weather program

%declaring days and weather
weather(sunday, fair).
weather(monday, overcast).
weather(tuesday, fair).
weather(wedensday, fair).
weather(thursday, overcast).
weather(friday, rainy).
weather(saturday, overcast).

%setting Skycolor
skyBlue(Day) :- weather(Day, fair).
skyGrey(Day) :- weather(Day, overcast).

%setting active days
birdsActive(Day) :- Day = sunday; Day = tuesday; Day = thursday.

%setting happy birds
birdsHappy(Day) :- birdsActive(Day), skyBlue(Day).