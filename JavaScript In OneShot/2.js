// Initializing an object named course with properties: title, desc, and rating
let course = {
    title: "math",
    desc: "project",
    rating: 5
};

// Logging the type of course object
console.log(typeof(course)); // Output: object

// HOW TO ACCESS PROPERTIES OF AN OBJECT IN JS

// Using the dot operator to access and modify the desc property
course.desc = "new desc";

// Using the bracket notation to access and modify the title property
course['title'] = "new title";

// Logging the updated course object
console.log(course); // Output: { title: 'new title', desc: 'new desc', rating: 5 }
