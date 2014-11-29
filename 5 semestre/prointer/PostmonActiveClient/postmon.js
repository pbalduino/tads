function Postmon(options) {

  var LocalStorage = function() {

    this.insert = function(key, value) {
      var type = typeof(value);
      localStorage[key] = JSON.stringify({type: type, value: type === "object" ? JSON.stringify(value) : value});
    }

    this.read = function(key) {
      var value = localStorage[key];

      if(value === undefined) {
        return undefined;
      }

      var obj = JSON.parse(value);

      return (obj["type"] === "object") ?
             JSON.parse(obj["value"]) :
             obj["value"];
    }

    this.remove = localStorage.removeItem;
  }

  var storage = new LocalStorage();
  var client  = new PostmonClient();

  var timer   = new Timer(5000, storage, client);
}