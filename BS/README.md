Binary Search Algorithms: Overview, When to Use, and Examples
By Karin Kelley
Last updated on Feb 25, 20221012
Binary Search Algorithms: Overview, When to Use, and Examples
Table of Contents
The Linear Search ApproachThe Binary Search ApproachWhen to Use Binary SearchImplementation of a Binary SearchExamples of Binary SearchesView More
Data is only as good as the tools used to process and work with it. When you have mountains of data to wade through, you need the best, most efficient methods of finding precisely what you want. The easiest way to look for a needle in a haystack is to use a magnet. The correct search algorithm is that kind of magnet, helping you find that needle of desired data in the (gigantic, towering) haystack of Big Data!

This article explores the idea of binary search algorithms, including what they are, how they compare to the linear search approach, when to use binary searches, and how to implement them.

Let’s start by looking at binary and linear searches.

Post Graduate Program in Data Analytics
In partnership with Purdue UniversityVIEW COURSEPost Graduate Program in Data Analytics
The Linear Search Approach
A linear, or sequential search, is a way to find an element in a list by looking for the element sequentially until the search succeeds. Of course, there are other, better search algorithms available, but linear search algorithms are easy to set up and conduct, so it’s a decent choice if the element list (or array) is small.

Here’s an example of a linear search. Say you have ten buckets, numbered 1-10, and one of them has a tennis ball. You start by looking into Bucket One and see if the ball is in there. If not, then move on to Bucket Two, and keep going in numerical sequence until you finally find the ball. That’s a linear search approach.

So linear searches are straightforward, and you can launch into one with little to no preparation. That's great, but it's slightly less great if you had 1,000 buckets! So that's why we have binary searches.

The Binary Search Approach
Binary searches are efficient algorithms based on the concept of “divide and conquer” that improves the search by recursively dividing the array in half until you either find the element or the list gets narrowed down to one piece that doesn’t match the needed element.

Binary searches work under the principle of using the sorted information in the array to reduce the time complexity to zero (Log n).
When to Use Binary Search
Would you be surprised to know that we perform binary searches every day of our lives? Binary searches are highly intuitive and frequently pop up in real life. We'll discuss some examples later.

Although binary search algorithms are typically used to find one element in a sorted sequence, they have many other uses. You can apply a binary search to a result, for example.

Say you wanted to determine the minimum square footage of office space needed to fit all a company's employees easily. Then, you can conduct a binary search for that suggested size rather than sequentially checking through all the possible dimensions. Typically, you would estimate maximum and minimum sizes when conducting the binary search, then check a middle value, so you can halve the interval repeatedly until you get your answer. This process saves a lot of time, especially when considering the vast number of possible iterations of office space square foot available!

<h2>for more details</h2>
<a href="https://codeforces.com/blog/entry/96699">Click here</a>
