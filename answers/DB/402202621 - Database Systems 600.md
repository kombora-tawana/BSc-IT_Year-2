# DBS 600 - Assignment Prep

## Question 1

> 1.1 Functional dependency is a very important concept in the normalization of database tables. It is divided into, transitive dependency, partial dependency and full functional dependency. With the aid of examples, illustrate transitive dependency and fully functional dependency. **(8)**

A transitive dependency is when the value of a column can be determined by the value of another column which in turn depends on a another column. This creates a chain of dependencies. A fully-functional dependency is when a column's value is determined by every other column in the table, to have a fully-functional dependency the depenedent column can't have a a subet-set of columns that can determine it.

> 1.2 In drawing entity-relationship (ER) diagrams, an entity set can be classified as either a strong entity set or a weak entity set. Using an ER diagram example, illustrate the two. **(7)**

1. Strong-Entity set: a set that doesn't depend on other entities to exist. It is independent.
2. Weak-Entity set: a set that depends on another entity to exist.

## QUESTION 2

> 2.1 A view can be created from 1 or more database tables. If one of the tables is dropped, analyse and conclude if the view will be retained. **(4)**

A view is created from one or more tables. Views are updated when
***
> 2.2 A view can be created from 1 or more database tables. If one of the tables is dropped, analyse and conclude if the view will be retained. **(6)**

```elaborate
Hadoop is good for big data pre-processing because it can handle large amounts of data.
Hadoop can process data in parallel across multiple computers, making it faster.
Hadoop is free to use, which makes it cost-effective.
Hadoop is flexible and can be used with many different data formats and programming languages.

Hadoop and SPSS are different software tools used for different purposes. Hadoop is for storing and processing big data in a distributed and scalable way, while SPSS is for analyzing structured data in smaller datasets. Hadoop is better for big data pre-processing due to its scalability and parallel processing, while SPSS is better for statistical analysis of smaller datasets. They can be used together for some tasks, with Hadoop handling large datasets and SPSS analyzing smaller subsets of data.
 ```

## QUESTION 3

> 3.1 From the above scenario, identify all entity sets. **(5)**
***
> 3.2 For each of the entity sets identified, suggest all possible attributes and indicate which of those attributes are primary keys. **(5)**
***
> 3.3 Draw an ER diagram for the above scenario. **(10)**
***
> 3.4 Given that each student that enrolls for a course is either a contact student or a distance learning student, extend your ER diagram to illustrate specialization and generalization concepts. **(6)**
***
> 3.5 Given that some of the lecturers are also students in the same institution, extend your ER diagram to show this overlapping constraint. **(4)**
