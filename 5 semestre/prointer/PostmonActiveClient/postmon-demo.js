var storage = new LocalStorage();

if(!storage.read("demo.isRunning")) {
  alert("Let's write something on the local storage");

  storage.insert("demo.isRunning", true);
  storage.insert("demo.text", "It works!");
  storage.insert("demo.object", {"key": "value", another_key: "bacon"});
  storage.insert("demo.float", 3.14);
  storage.insert("demo.integer", 42);

  window.location.reload();

} else {
  alert("Value of stored value is '" + storage.read("demo.text") + "'");

  console.log(storage.read("demo.object"),
              storage.read("demo.isRunning"),
              storage.read("demo.text"),
              storage.read("demo.float"),
              storage.read("demo.integer"));

  storage.remove("demo.object");
  storage.remove("demo.float");
  storage.remove("demo.integer");
  storage.remove("demo.isRunning");
  storage.remove("demo.text");
}