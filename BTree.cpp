/*
 * Binary Tree - source file (functions implementation)
 */

#include "BTree.h"


ostream& operator<<(ostream& out, BTree& tree)
{
  tree.print_level_by_level(out);
  return out;
}

ostream& operator<<(ostream& out, Node& node)
{
  out << "( "
      << node.value
      << ", "
      << node.search_cost
      << " )";
  return out;
}

istream& operator>>(istream& in, BTree& tree)
{
	
	vector<int> v;
	for (int n; in >> n;)
	{
		v.push_back(n);
	}
	//int temp = noderoot->value;
	Node* temp = new Node(v[0]);
	tree.set_root(temp);
	tree.update_search_cost();
	for (int i = 1; i < v.size(); i++)
	{
		tree.insert(v[i]);
	}
	
  return in;
}

BTree::BTree(BTree& other)
{
  /*
    complete this copy constructor
    make sure when copying nodes to copy
    - value
    - left and right children
  */
	copy(other.get_root());
}

BTree::BTree(BTree&& other)
{
  /*
    complete this move constructor
  */
	copy(other.get_root());
	slice(other.get_root());
}

BTree& BTree::operator=(BTree& other)
{
  if (this != &other) {
    /*
      complete this assignment operator
      make sure when copying nodes to copy
      - value
      - left and right children
    */
	  slice(get_root());
	  copy(other.get_root());
  }
  return *this;
}

BTree& BTree::operator=(BTree&& other)
{
  if (this != &other) {
    /*
      complete this move assignment operator
    */
	  slice(get_root());
	  copy(other.get_root());
	  slice(other.root);
  }
  return *this;
}

Node* BTree::insert(int obj)
{
  /*
    insert a node into the tree
    - first find where the node should go
    - then modify pointers to connect your new node 
  */
	Node* temp = get_root();
	Node* back = NULL;
	Node* nodein = new Node(obj);
	//nodein->value = obj;
	while (temp != NULL)
	{
		back = temp;
		if (temp->value > nodein->value)
		{
			temp = temp->left;
		}
		else
		{
			temp = temp->right;
		}
	}
	//Determine which side to attach the new node to
	if(back == NULL)
	{
		set_root(nodein);
	}
	else if (back->value > nodein->value)
	{
		back->left = nodein;
	}
	else
	{
		back->right = nodein;
	}
	update_search_cost();
  return nodein;
}

Node* BTree::search(int obj)
{
 
	Node* Target = get_root();
	while (Target != NULL)
	{
		// pass right subtree as new tree 
		if (obj > Target->value)
		{
			Target = Target->right;
		}

		// pass left subtree as new tree 
		else if (obj < Target->value)
		{
			Target = Target->left;
		}
		else if (obj == Target->value)
		{
			return Target;
		}
	}
	return nullptr;
		//return nullptr;
}
  

void BTree::update_search_cost()
{
  /*
    do a BFS of your tree and update the search cost of all nodes
  */
	
	queue<Node*> q;

	if (!root) {
		return;
	}
	root->search_cost = 1;
	for (q.push(root); !q.empty(); q.pop()) {
		const Node * const temp_node = q.front();

		if (temp_node->left) 
		{
			temp_node->left->search_cost = temp_node->search_cost+1;
			q.push(temp_node->left);
		}
		if (temp_node->right) 
		{
			temp_node->right->search_cost = temp_node->search_cost + 1;
			q.push(temp_node->right);
		}
	}

}

void BTree::inorder(ostream& out, const Node& tree)
{
  /*
    print your nodes in infix order

    if our tree looks like 

    4
    2 6
    1 3 5 7

    we should get

    1 2 3 4 5 6 7 
  */
	if (tree.left == nullptr && tree.right == nullptr && tree.value == NULL)
	{
		return;
	}
	if (tree.left != nullptr)
	{
		inorder(out, *tree.left);
	}
	out << tree.value << "[" << tree.search_cost << "]" << " ";
	if (tree.right != nullptr)
	{
		inorder(out, *tree.right);
	}
	return;
}

void BTree::print_level_by_level(ostream& out)
{
	/*
	  print the tree using a BFS

	  output should look like this if we dont have a full tree

	  4
	  2 6
	  1 X 5 7
	  X X X X X X X 9

	  it will be helpfull to do this part iterativly,
	  so do the BFS with the std stack data structure.

	  it may also be helpfull to put the entire tree into a vector
	  (probably google this if you dont know how to do it)
	*/
	if (get_root() == NULL) { return; }
	queue<Node*>q;
	Node* root = get_root();
	q.push(root);

	while (q.empty() == false)
	{
		int nodes = q.size();

		while (nodes > 0)
		{
			Node* node = q.front();
			q.pop();
			if (!node) {
				out << "x" << " ";
			}
			else {
				out << node->value << "[" << node->search_cost << "]" << " ";
				q.push(node->left);
				q.push(node->right);
			}
			nodes--;
		}
		out << endl;
	}
}

void BTree::copy(Node * N)
{
	if (N)
	{
		insert(N->value);
		copy(N->left);
		copy(N->right);
	}
}


void BTree::slice(Node *N)
{
	if (N)
	{
		slice(N->left);
		slice(N->right);
		delete N;
	}
}

double BTree::Average_cost()
{
	queue<Node*> q;

	if (!root) {
		return 0;
	}
	double Node_counter = 1;
	double counter = 1;
	double total;
	for (q.push(root); !q.empty(); q.pop()) {
		const Node * const temp_node = q.front();

		if (temp_node->left) {
			counter += temp_node->left->search_cost;
			Node_counter++;
			q.push(temp_node->left);
		}
		if (temp_node->right) {
			counter += temp_node->right->search_cost;
			Node_counter++;
			q.push(temp_node->right);
		}
	}
	total = counter / Node_counter;
	return  total;
}

double BTree::Total_nodes()
{
	queue<Node*> q;

	if (!root) {
		return 0;
	}
	double Node_counter = 1;
		
	for (q.push(root); !q.empty(); q.pop()) {
		const Node * const temp_node = q.front();

		if (temp_node->left) {
			Node_counter++;
			q.push(temp_node->left);
		}
		if (temp_node->right) {
			Node_counter++;
			q.push(temp_node->right);
		}
	}
	return Node_counter;
}


