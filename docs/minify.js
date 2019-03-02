const fs = require("fs");
const file = fs.readFileSync("styles.css").toString();

const result = file.replace(/( |\n|\t)/g, "");
fs.writeFileSync("styles.min.css", result);
