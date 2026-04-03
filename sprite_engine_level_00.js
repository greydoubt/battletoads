const sprite = new Sprite(data);

// Access edge by index
const edge0 = sprite.Edge(0);

// Access node by id
const node = sprite.Node("7efdbbe0c4742315");

// Get combined node-edge relationships
const combined = sprite.getCombined();

// Get neighbors of a node
const neighbors = sprite.getNeighbors("7efdbbe0c4742315");
