/* 
 *  main function
 */

#include "BTree.h"
#include <fstream>


BTree read_file(string file_name)
{
  BTree tree;
  /*
    open the file and use the input operator (operator>>)
    to construct a new tree
  */
  ifstream in(file_name);
  in >> tree;

    
  return tree;
}


int main()
{
	// 1l
	cout << "Tree 1l" << endl;
	BTree tree1(read_file("1l"));	 // copy/move constructor test
	// in order traversal
	cout << "Inorder traversal" << endl;
	tree1.inorder(cout, *(tree1.get_root()));
	cout << endl << endl;
	// level by level
	cout << "Print level by level" << endl;
	tree1.print_level_by_level(cout);
	cout << endl;
	// Average cost test
	cout << "Average Cost: ";
	cout << tree1.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree1.Total_nodes() << endl << endl;
	
	// file output
	ofstream out("out1l");
	out << "Inorder traversal" << endl;
	tree1.inorder(out, *(tree1.get_root()));
	out << endl << endl;
	// level by level
	out << "Print level by level" << endl;
	tree1.print_level_by_level(out);
	out << endl;
	// Average cost test
	out << "Average Cost: ";
	out << tree1.Average_cost() << endl;
	// Total nodes test
	out << "Total nodes: ";
	out << tree1.Total_nodes() << endl;
	out.close();

	// 1r //////////////////////////////////////////////////////////////////////////
	cout << "Tree 1r" << endl;
	BTree tree2 = read_file("1r"); // copy/move assignment test
	// in order traversal
	cout << "Inorder traversal" << endl;
	tree2.inorder(cout, *(tree2.get_root()));
	cout << endl << endl;
	// level by level
	cout << "Print level by level" << endl;
	tree2.print_level_by_level(cout);
	cout << endl;
	// Average cost test
	cout << "Average Cost: ";
	cout << tree2.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree2.Total_nodes() << endl << endl;

	// file output
	ofstream out1r("out1r");
	out1r << "Inorder traversal" << endl;
	tree2.inorder(out1r, *(tree2.get_root()));
	out1r << endl << endl;
	// level by level
	out1r << "Print level by level" << endl;
	tree2.print_level_by_level(out1r);
	out1r << endl;
	// Average cost test
	out1r << "Average Cost: ";
	out1r << tree2.Average_cost() << endl;
	// Total nodes test
	out1r << "Total nodes: ";
	out1r << tree2.Total_nodes() << endl;
	out1r.close();

	// 1p //////////////////////////////////////////////////////////////////////////
	cout << "Tree 1p" << endl;
	BTree tree3 = read_file("1p");
	// in order traversal
	cout << "Inorder traversal" << endl;
	tree3.inorder(cout, *(tree3.get_root()));
	cout << endl << endl;
	// level by level
	cout << "Print level by level" << endl;
	tree3.print_level_by_level(cout);
	cout << endl;
	// Average cost test
	cout << "Average Cost: ";
	cout << tree3.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree3.Total_nodes() << endl << endl;

	// file output
	ofstream out1p("out1p");
	out1p << "Inorder traversal" << endl;
	tree3.inorder(out1p, *(tree3.get_root()));
	out1p << endl << endl;
	// level by level
	out1p << "Print level by level" << endl;
	tree3.print_level_by_level(out1p);
	out1p << endl;
	// Average cost test
	out1p << "Average Cost: ";
	out1p << tree3.Average_cost() << endl;
	// Total nodes test
	out1p << "Total nodes: ";
	out1p << tree3.Total_nodes() << endl;
	out1p.close();
	
	// 2l //////////////////////////////////////////////////////////////////////////
	cout << "Tree 2l" << endl;
	BTree tree4 = read_file("2l");
	// in order traversal
	cout << "Inorder traversal" << endl;
	tree4.inorder(cout, *(tree4.get_root()));
	cout << endl << endl;
	// level by level
	cout << "Print level by level" << endl;
	tree4.print_level_by_level(cout);
	cout << endl;
	// Average cost test
	cout << "Average Cost: ";
	cout << tree4.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree4.Total_nodes() << endl << endl;

	// file output
	ofstream out2l("out2l");
	out2l << "Inorder traversal" << endl;
	tree4.inorder(out2l, *(tree4.get_root()));
	out2l << endl << endl;
	// level by level
	out2l << "Print level by level" << endl;
	tree4.print_level_by_level(out2l);
	out2l << endl;
	// Average cost test
	out2l << "Average Cost: ";
	out2l << tree4.Average_cost() << endl;
	// Total nodes test
	out2l << "Total nodes: ";
	out2l << tree4.Total_nodes() << endl;
	out2l.close();

	// 2r //////////////////////////////////////////////////////////////////////////
	cout << "Tree 2r" << endl;
	BTree tree5 = read_file("2r");
	// in order traversal
	cout << "Inorder traversal" << endl;
	tree5.inorder(cout, *(tree5.get_root()));
	cout << endl << endl;
	// level by level
	cout << "Print level by level" << endl;
	tree5.print_level_by_level(cout);
	cout << endl;
	// Average cost test
	cout << "Average Cost: ";
	cout << tree5.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree5.Total_nodes() << endl << endl;

	// file output
	ofstream out2r("out2r");
	out2r << "Inorder traversal" << endl;
	tree5.inorder(out2r, *(tree5.get_root()));
	out2r << endl << endl;
	// level by level
	out2r << "Print level by level" << endl;
	tree5.print_level_by_level(out2r);
	out2r << endl;
	// Average cost test
	out2r << "Average Cost: ";
	out2r << tree5.Average_cost() << endl;
	// Total nodes test
	out2r << "Total nodes: ";
	out2r << tree5.Total_nodes() << endl;
	out2r.close();

	// 2p //////////////////////////////////////////////////////////////////////////
	cout << "Tree 2p" << endl;
	BTree tree6 = read_file("2p");
	// in order traversal
	cout << "Inorder traversal" << endl;
	tree6.inorder(cout, *(tree6.get_root()));
	cout << endl << endl;
	// level by level
	cout << "Print level by level" << endl;
	tree6.print_level_by_level(cout);
	cout << endl;
	// Average cost test
	cout << "Average Cost: ";
	cout << tree6.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree6.Total_nodes() << endl << endl;

	// file output
	ofstream out2p("out2p");
	out2p << "Inorder traversal" << endl;
	tree6.inorder(out2p, *(tree6.get_root()));
	out2p << endl << endl;
	// level by level
	out2p << "Print level by level" << endl;
	tree6.print_level_by_level(out2p);
	out2p << endl;
	// Average cost test
	out2p << "Average Cost: ";
	out2p << tree6.Average_cost() << endl;
	// Total nodes test
	out2p << "Total nodes: ";
	out2p << tree6.Total_nodes() << endl;
	out2p.close();

	// 3l //////////////////////////////////////////////////////////////////////////
	cout << "Tree 3l" << endl;
	BTree tree7 = read_file("3l");
	// in order traversal
	cout << "Inorder traversal" << endl;
	tree7.inorder(cout, *(tree7.get_root()));
	cout << endl << endl;
	// level by level
	cout << "Print level by level" << endl;
	tree7.print_level_by_level(cout);
	cout << endl;
	// Average cost test
	cout << "Average Cost: ";
	cout << tree7.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree7.Total_nodes() << endl << endl;

	// file output
	ofstream out3l("out3l");
	out3l << "Inorder traversal" << endl;
	tree7.inorder(out3l, *(tree7.get_root()));
	out3l << endl << endl;
	// level by level
	out3l << "Print level by level" << endl;
	tree7.print_level_by_level(out3l);
	out3l << endl;
	// Average cost test
	out3l << "Average Cost: ";
	out3l << tree7.Average_cost() << endl;
	// Total nodes test
	out3l << "Total nodes: ";
	out3l << tree7.Total_nodes() << endl;
	out3l.close();

	// 3r //////////////////////////////////////////////////////////////////////////
	cout << "Tree 3r" << endl;
	BTree tree8 = read_file("3r");
	// in order traversal
	cout << "Inorder traversal" << endl;
	tree8.inorder(cout, *(tree8.get_root()));
	cout << endl << endl;
	// level by level
	cout << "Print level by level" << endl;
	tree8.print_level_by_level(cout);
	cout << endl;
	// Average cost test
	cout << "Average Cost: ";
	cout << tree8.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree8.Total_nodes() << endl << endl;

	// file output
	ofstream out3r("out3r");
	out3r << "Inorder traversal" << endl;
	tree8.inorder(out3r, *(tree8.get_root()));
	out3r << endl << endl;
	// level by level
	out3r << "Print level by level" << endl;
	tree8.print_level_by_level(out3r);
	out3r << endl;
	// Average cost test
	out3r << "Average Cost: ";
	out3r << tree8.Average_cost() << endl;
	// Total nodes test
	out3r << "Total nodes: ";
	out3r << tree8.Total_nodes() << endl;
	out3r.close();

	// 3p //////////////////////////////////////////////////////////////////////////
	cout << "Tree 3p" << endl;
	BTree tree9 = read_file("3p");
	// in order traversal
	cout << "Inorder traversal" << endl;
	tree9.inorder(cout, *(tree9.get_root()));
	cout << endl << endl;
	// level by level
	cout << "Print level by level" << endl;
	tree9.print_level_by_level(cout);
	cout << endl;
	// Average cost test
	cout << "Average Cost: ";
	cout << tree9.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree9.Total_nodes() << endl << endl;

	// file output
	ofstream out3p("out3p");
	out3p << "Inorder traversal" << endl;
	tree9.inorder(out3p, *(tree9.get_root()));
	out3p << endl << endl;
	// level by level
	out3p << "Print level by level" << endl;
	tree9.print_level_by_level(out3p);
	out3p << endl;
	// Average cost test
	out3p << "Average Cost: ";
	out3p << tree9.Average_cost() << endl;
	// Total nodes test
	out3p << "Total nodes: ";
	out3p << tree9.Total_nodes() << endl;
	out3p.close();

	// 4l //////////////////////////////////////////////////////////////////////////
	cout << "Tree 4l" << endl;
	BTree tree10 = read_file("4l");
	// in order traversal
	cout << "Inorder traversal" << endl;
	tree10.inorder(cout, *(tree10.get_root()));
	cout << endl << endl;
	// level by level
	cout << "Print level by level" << endl;
	tree10.print_level_by_level(cout);
	cout << endl;
	// Average cost test
	cout << "Average Cost: ";
	cout << tree10.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree10.Total_nodes() << endl << endl;

	// file output
	ofstream out4l("out4l");
	out4l << "Inorder traversal" << endl;
	tree10.inorder(out4l, *(tree10.get_root()));
	out4l << endl << endl;
	// level by level
	out4l << "Print level by level" << endl;
	tree10.print_level_by_level(out4l);
	out4l << endl;
	// Average cost test
	out4l << "Average Cost: ";
	out4l << tree10.Average_cost() << endl;
	// Total nodes test
	out4l << "Total nodes: ";
	out4l << tree10.Total_nodes() << endl;
	out4l.close();
	
	// 4r //////////////////////////////////////////////////////////////////////////
	cout << "Tree 4r" << endl;
	BTree tree11 = read_file("4r");
	// in order traversal
	cout << "Inorder traversal" << endl;
	tree11.inorder(cout, *(tree11.get_root()));
	cout << endl << endl;
	// level by level
	cout << "Print level by level" << endl;
	tree11.print_level_by_level(cout);
	cout << endl;
	// Average cost test
	cout << "Average Cost: ";
	cout << tree11.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree11.Total_nodes() << endl << endl;

	// file output
	ofstream out4r("out4r");
	out4r << "Inorder traversal" << endl;
	tree11.inorder(out4r, *(tree11.get_root()));
	out4r << endl << endl;
	// level by level
	out4r << "Print level by level" << endl;
	tree11.print_level_by_level(out4r);
	out4r << endl;
	// Average cost test
	out4r << "Average Cost: ";
	out4r << tree11.Average_cost() << endl;
	// Total nodes test
	out4r << "Total nodes: ";
	out4r << tree11.Total_nodes() << endl;
	out4r.close();
	
	// 4p //////////////////////////////////////////////////////////////////////////
	cout << "Tree 4p" << endl;
	BTree tree12 = read_file("4p");
	// in order traversal
	cout << "Inorder traversal" << endl;
	tree12.inorder(cout, *(tree12.get_root()));
	cout << endl << endl;
	// level by level
	cout << "Print level by level" << endl;
	tree12.print_level_by_level(cout);
	cout << endl;
	// Average cost test
	cout << "Average Cost: ";
	cout << tree12.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree12.Total_nodes() << endl << endl;

	// file output
	ofstream out4p("out4p");
	out4p << "Inorder traversal" << endl;
	tree12.inorder(out4p, *(tree12.get_root()));
	out4p << endl << endl;
	// level by level
	out4p << "Print level by level" << endl;
	tree12.print_level_by_level(out4p);
	out4p << endl;
	// Average cost test
	out4p << "Average Cost: ";
	out4p << tree12.Average_cost() << endl;
	// Total nodes test
	out4p << "Total nodes: ";
	out4p << tree12.Total_nodes() << endl;
	out4p.close();
	
	// 5l //////////////////////////////////////////////////////////////////////////
	cout << "Tree 5l" << endl;
	BTree tree13 = read_file("5l");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree13.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree13.Total_nodes() << endl << endl;

	// file output
	ofstream out5l("out5l");
	out5l << "Inorder traversal" << endl;
	tree13.inorder(out5l, *(tree13.get_root()));
	out5l << endl << endl;
	// Average cost test
	out5l << "Average Cost: ";
	out5l << tree13.Average_cost() << endl;
	// Total nodes test
	out5l << "Total nodes: ";
	out5l << tree13.Total_nodes() << endl;
	out5l.close();

	// 5r //////////////////////////////////////////////////////////////////////////
	cout << "Tree 5r" << endl;
	BTree tree14 = read_file("5r");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree14.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree14.Total_nodes() << endl << endl;

	// file output
	ofstream out5r("out5r");
	out5r << "Inorder traversal" << endl;
	tree14.inorder(out5r, *(tree14.get_root()));
	out5r << endl << endl;
	// Average cost test
	out5r << "Average Cost: ";
	out5r << tree14.Average_cost() << endl;
	// Total nodes test
	out5r << "Total nodes: ";
	out5r << tree14.Total_nodes() << endl;
	out5r.close();

	// 5p //////////////////////////////////////////////////////////////////////////
	cout << "Tree 5p" << endl;
	BTree tree15 = read_file("5p");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree15.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree15.Total_nodes() << endl << endl;

	// file output
	ofstream out5p("out5p");
	out5p << "Inorder traversal" << endl;
	tree15.inorder(out5p, *(tree15.get_root()));
	out5p << endl << endl;
	// Average cost test
	out5p << "Average Cost: ";
	out5p << tree15.Average_cost() << endl;
	// Total nodes test
	out5p << "Total nodes: ";
	out5p << tree15.Total_nodes() << endl;
	out5p.close();

	// 6l //////////////////////////////////////////////////////////////////////////
	cout << "Tree 6l" << endl;
	BTree tree16 = read_file("6l");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree16.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree16.Total_nodes() << endl << endl;

	// file output
	ofstream out6l("out6l");
	out6l << "Inorder traversal" << endl;
	tree16.inorder(out6l, *(tree16.get_root()));
	out6l << endl << endl;
	// Average cost test
	out6l << "Average Cost: ";
	out6l << tree16.Average_cost() << endl;
	// Total nodes test
	out6l << "Total nodes: ";
	out6l << tree16.Total_nodes() << endl;
	out6l.close();

	// 6r //////////////////////////////////////////////////////////////////////////
	cout << "Tree 6r" << endl;
	BTree tree17 = read_file("6r");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree17.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree17.Total_nodes() << endl << endl;

	// file output
	ofstream out6r("out6r");
	out6r << "Inorder traversal" << endl;
	tree17.inorder(out6r, *(tree17.get_root()));
	out6r << endl << endl;
	// Average cost test
	out6r << "Average Cost: ";
	out6r << tree17.Average_cost() << endl;
	// Total nodes test
	out6r << "Total nodes: ";
	out6r << tree17.Total_nodes() << endl;
	out6r.close();

	// 6p //////////////////////////////////////////////////////////////////////////
	cout << "Tree 6p" << endl;
	BTree tree18 = read_file("6p");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree18.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree18.Total_nodes() << endl << endl;

	// file output
	ofstream out6p("out6p");
	out6p << "Inorder traversal" << endl;
	tree18.inorder(out6p, *(tree18.get_root()));
	out6p << endl << endl;
	// Average cost test
	out6p << "Average Cost: ";
	out6p << tree18.Average_cost() << endl;
	// Total nodes test
	out6p << "Total nodes: ";
	out6p << tree18.Total_nodes() << endl;
	out6p.close();

	// 7l //////////////////////////////////////////////////////////////////////////
	cout << "Tree 7l" << endl;
	BTree tree19 = read_file("7l");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree19.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree19.Total_nodes() << endl << endl;

	// file output
	ofstream out7l("out7l");
	out7l << "Inorder traversal" << endl;
	tree19.inorder(out7l, *(tree19.get_root()));
	out7l << endl << endl;
	// Average cost test
	out7l << "Average Cost: ";
	out7l << tree19.Average_cost() << endl;
	// Total nodes test
	out7l << "Total nodes: ";
	out7l << tree19.Total_nodes() << endl;
	out7l.close();

	// 7r //////////////////////////////////////////////////////////////////////////
	cout << "Tree 7r" << endl;
	BTree tree20 = read_file("7r");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree20.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree20.Total_nodes() << endl << endl;

	// file output
	ofstream out7r("out5r");
	out7r << "Inorder traversal" << endl;
	tree20.inorder(out7r, *(tree20.get_root()));
	out7r << endl << endl;
	// Average cost test
	out7r << "Average Cost: ";
	out7r << tree20.Average_cost() << endl;
	// Total nodes test
	out7r << "Total nodes: ";
	out7r << tree20.Total_nodes() << endl;
	out7r.close();

	// 7p //////////////////////////////////////////////////////////////////////////
	cout << "Tree 7p" << endl;
	BTree tree21 = read_file("7p");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree21.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree21.Total_nodes() << endl << endl;

	// file output
	ofstream out7p("out7p");
	out7p << "Inorder traversal" << endl;
	tree21.inorder(out7p, *(tree21.get_root()));
	out7p << endl << endl;
	// Average cost test
	out7p << "Average Cost: ";
	out7p << tree21.Average_cost() << endl;
	// Total nodes test
	out7p << "Total nodes: ";
	out7p << tree21.Total_nodes() << endl;
	out7p.close();

	// 8l //////////////////////////////////////////////////////////////////////////
	cout << "Tree 8l" << endl;
	BTree tree22 = read_file("8l");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree22.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree22.Total_nodes() << endl << endl;

	// file output
	ofstream out8l("out8l");
	out8l << "Inorder traversal" << endl;
	tree22.inorder(out8l, *(tree22.get_root()));
	out8l << endl << endl;
	// Average cost test
	out8l << "Average Cost: ";
	out8l << tree22.Average_cost() << endl;
	// Total nodes test
	out8l << "Total nodes: ";
	out8l << tree22.Total_nodes() << endl;
	out8l.close();

	// 8r //////////////////////////////////////////////////////////////////////////
	cout << "Tree 8r" << endl;
	BTree tree23 = read_file("8r");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree23.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree23.Total_nodes() << endl << endl;

	// file output
	ofstream out8r("out8r");
	out8r << "Inorder traversal" << endl;
	tree23.inorder(out8r, *(tree23.get_root()));
	out8r << endl << endl;
	// Average cost test
	out8r << "Average Cost: ";
	out8r << tree23.Average_cost() << endl;
	// Total nodes test
	out8r << "Total nodes: ";
	out8r << tree23.Total_nodes() << endl;
	out8r.close();

	// 8p //////////////////////////////////////////////////////////////////////////
	cout << "Tree 8p" << endl;
	BTree tree24 = read_file("8p");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree24.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree24.Total_nodes() << endl << endl;

	// file output
	ofstream out8p("out8p");
	out8p << "Inorder traversal" << endl;
	tree24.inorder(out8p, *(tree24.get_root()));
	out8p << endl << endl;
	// Average cost test
	out8p << "Average Cost: ";
	out8p << tree24.Average_cost() << endl;
	// Total nodes test
	out8p << "Total nodes: ";
	out8p << tree24.Total_nodes() << endl;
	out8p.close();

	// 9l //////////////////////////////////////////////////////////////////////////
	cout << "Tree 9l" << endl;
	BTree tree25 = read_file("9l");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree25.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree25.Total_nodes() << endl << endl;

	// file output
	ofstream out9l("out9l");
	out9l << "Inorder traversal" << endl;
	tree25.inorder(out9l, *(tree25.get_root()));
	out9l << endl << endl;
	// Average cost test
	out9l << "Average Cost: ";
	out9l << tree25.Average_cost() << endl;
	// Total nodes test
	out9l << "Total nodes: ";
	out9l << tree25.Total_nodes() << endl;
	out9l.close();

	// 9r //////////////////////////////////////////////////////////////////////////
	cout << "Tree 9r" << endl;
	BTree tree26 = read_file("9r");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree26.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree26.Total_nodes() << endl << endl;

	// file output
	ofstream out9r("out9r");
	out9r << "Inorder traversal" << endl;
	tree26.inorder(out9r, *(tree26.get_root()));
	out9r << endl << endl;
	// Average cost test
	out9r << "Average Cost: ";
	out9r << tree26.Average_cost() << endl;
	// Total nodes test
	out9r << "Total nodes: ";
	out9r << tree26.Total_nodes() << endl;
	out9r.close();

	// 9p //////////////////////////////////////////////////////////////////////////
	cout << "Tree 9p" << endl;
	BTree tree27 = read_file("9p");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree27.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree27.Total_nodes() << endl << endl;

	// file output
	ofstream out9p("out9p");
	out9p << "Inorder traversal" << endl;
	tree27.inorder(out9p, *(tree27.get_root()));
	out9p << endl << endl;
	// Average cost test
	out9p << "Average Cost: ";
	out9p << tree27.Average_cost() << endl;
	// Total nodes test
	out9p << "Total nodes: ";
	out9p << tree27.Total_nodes() << endl;
	out9p.close();

	// 10l //////////////////////////////////////////////////////////////////////////
	cout << "Tree 10l" << endl;
	BTree tree28 = read_file("10l");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree28.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree28.Total_nodes() << endl << endl;

	// file output
	ofstream out10l("out10l");
	out10l << "Inorder traversal" << endl;
	tree28.inorder(out10l, *(tree28.get_root()));
	out10l << endl << endl;
	// Average cost test
	out10l << "Average Cost: ";
	out10l << tree28.Average_cost() << endl;
	// Total nodes test
	out10l << "Total nodes: ";
	out10l << tree28.Total_nodes() << endl;
	out10l.close();

	// 10r //////////////////////////////////////////////////////////////////////////
	cout << "Tree 10r" << endl;
	BTree tree29 = read_file("10r");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree29.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree29.Total_nodes() << endl << endl;

	// file output
	ofstream out10r("out10r");
	out10r << "Inorder traversal" << endl;
	tree29.inorder(out10r, *(tree29.get_root()));
	out10r << endl << endl;
	// Average cost test
	out10r << "Average Cost: ";
	out10r << tree29.Average_cost() << endl;
	// Total nodes test
	out10r << "Total nodes: ";
	out10r << tree29.Total_nodes() << endl;
	out10r.close();

	// 10p //////////////////////////////////////////////////////////////////////////
	cout << "Tree 10p" << endl;
	BTree tree30 = read_file("10p");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree30.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree30.Total_nodes() << endl << endl;

	// file output
	ofstream out10p("out10p");
	out10p << "Inorder traversal" << endl;
	tree30.inorder(out10p, *(tree30.get_root()));
	out10p << endl << endl;
	// Average cost test
	out10p<< "Average Cost: ";
	out10p << tree30.Average_cost() << endl;
	// Total nodes test
	out10p << "Total nodes: ";
	out10p << tree30.Total_nodes() << endl;
	out10p.close();

	// 11l //////////////////////////////////////////////////////////////////////////
	cout << "Tree 11l" << endl;
	BTree tree31 = read_file("11l");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree31.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree31.Total_nodes() << endl << endl;

	// file output
	ofstream out11l("out11l");
	out11l << "Inorder traversal" << endl;
	tree31.inorder(out11l, *(tree31.get_root()));
	out11l << endl << endl;
	// Average cost test
	out11l << "Average Cost: ";
	out11l << tree31.Average_cost() << endl;
	// Total nodes test
	out11l << "Total nodes: ";
	out11l << tree31.Total_nodes() << endl;
	out11l.close();

	// 11r //////////////////////////////////////////////////////////////////////////
	cout << "Tree 11r" << endl;
	BTree tree32 = read_file("11r");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree32.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree32.Total_nodes() << endl << endl;

	// file output
	ofstream out11r("out11r");
	out11r << "Inorder traversal" << endl;
	tree32.inorder(out11r, *(tree32.get_root()));
	out11r << endl << endl;
	// Average cost test
	out11r << "Average Cost: ";
	out11r << tree32.Average_cost() << endl;
	// Total nodes test
	out11r << "Total nodes: ";
	out11r << tree32.Total_nodes() << endl;
	out11r.close();

	// 11p //////////////////////////////////////////////////////////////////////////
	cout << "Tree 11p" << endl;
	BTree tree33 = read_file("11p");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree33.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree33.Total_nodes() << endl << endl;

	// file output
	ofstream out11p("out11p");
	out11p << "Inorder traversal" << endl;
	tree33.inorder(out11p, *(tree33.get_root()));
	out11p << endl << endl;
	// Average cost test
	out11p << "Average Cost: ";
	out11p << tree33.Average_cost() << endl;
	// Total nodes test
	out11p << "Total nodes: ";
	out11p << tree33.Total_nodes() << endl;
	out11p.close();

	// 12l //////////////////////////////////////////////////////////////////////////
	cout << "Tree 12l" << endl;
	BTree tree34 = read_file("12l");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree34.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree34.Total_nodes() << endl << endl;

	// file output
	ofstream out12l("out12l");
	out12l << "Inorder traversal" << endl;
	tree34.inorder(out12l, *(tree34.get_root()));
	out12l << endl << endl;
	// Average cost test
	out12l << "Average Cost: ";
	out12l << tree34.Average_cost() << endl;
	// Total nodes test
	out12l << "Total nodes: ";
	out12l << tree34.Total_nodes() << endl;
	out12l.close();

	// 12r //////////////////////////////////////////////////////////////////////////
	cout << "Tree 12r" << endl;
	BTree tree35 = read_file("12r");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree35.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree35.Total_nodes() << endl << endl;

	// file output
	ofstream out12r("out12r");
	out12r << "Inorder traversal" << endl;
	tree35.inorder(out12r, *(tree35.get_root()));
	out12r << endl << endl;
	// Average cost test
	out12r << "Average Cost: ";
	out12r << tree35.Average_cost() << endl;
	// Total nodes test
	out12r << "Total nodes: ";
	out12r << tree35.Total_nodes() << endl;
	out12r.close();

	// 12p //////////////////////////////////////////////////////////////////////////
	cout << "Tree 12p" << endl;
	BTree tree36 = read_file("12p");
	// Average cost test
	cout << "Average Cost: ";
	cout << tree36.Average_cost() << endl;
	// Total nodes test
	cout << "Total nodes: ";
	cout << tree36.Total_nodes() << endl << endl;

	// file output
	ofstream out12p("out12p");
	out12p << "Inorder traversal" << endl;
	tree36.inorder(out12p, *(tree36.get_root()));
	out12p << endl << endl;
	// Average cost test
	out12p << "Average Cost: ";
	out12p << tree36.Average_cost() << endl;
	// Total nodes test
	out12p << "Total nodes: ";
	out12p << tree36.Total_nodes() << endl<<endl;
	out12p.close();
	
	//Search test
	cout << "Search function test on tree 4l: ";
	cout << *(tree10.search(3)) << endl ;
	
	
}

