#include <iostream>

using namespace std;

struct Number;
struct BinaryOperation;

struct Visitor 
{
	virtual void visitNumber(Number const * number) = 0;
	virtual void visitBinaryOperation(BinaryOperation const * operation) = 0;
	virtual ~Visitor() { }
};

struct Expression
{
	virtual double evaluate() const = 0;
	virtual void visit(Visitor * vistitor) const = 0;
	virtual ~Expression() { }
};

struct Number : Expression
{
	Number(double value) 
		: value(value)
	{ }
	double evaluate() const { return value; }
	double get_value() const { return value; }
	void visit(Visitor * visitor) const { visitor->visitNumber(this); }

private:
	double value;
};

struct BinaryOperation : Expression
{
	BinaryOperation(Expression const * left, char op, Expression const * right)
		: left(left), op(op), right(right)
	{
		switch (this->op)
		{
		case '+':
			this->result = this->left->evaluate() + this->right->evaluate();
			break;
		case '-':
			this->result = this->left->evaluate() + this->right->evaluate();
			break;
		case '*':
			this->result = this->left->evaluate() * this->right->evaluate();
			break;
		case '/':
			this->result = this->left->evaluate() / this->right->evaluate();
			break;
		default:
			cout << "Error! operator is not correct";
			break;
		}
	}
	~BinaryOperation()
	{
		delete this->left;
		delete this->right;
	};
	Expression const * get_left() const { return left; }
	Expression const * get_right() const { return right; }
	double evaluate() const { return result; }
	char get_op() const { return op; }
	void visit(Visitor * visitor) const { visitor->visitBinaryOperation(this); }

private:
	Expression const * left;
	Expression const * right;
	char op;
	double result;
};

struct PrintVisitor : Visitor 
{
	void visitNumber(Number const * number)
	{
		cout << number->get_value();
	}

	void visitBinaryOperation(BinaryOperation const * bop)
	{
		cout << "(";
		bop->get_left()->visit(this);
		cout << bop->get_op();
		bop->get_right()->visit(this);
		cout << ")";
	}
};

int main()
{
	Expression *a = new BinaryOperation(new Number(1), '/', new Number(2));
	Expression *b = new BinaryOperation(new Number(5), '+', a);
	PrintVisitor visitor;
	b->visit(&visitor);
	delete b;
	return 0;
}