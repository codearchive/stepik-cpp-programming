#include <iostream>

using namespace std;

struct Expression
{
	virtual double evaluate() const = 0;
	virtual ~Expression() { cout << "Expression::dtor()" << endl; };
};

struct Number : Expression
{
	Number(double value)
		: value(value)
	{}
	~Number() { cout << "Number::dtor()" << endl; };
	double evaluate() const { return value; }

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
		cout << "BinaryOperation::dtor()" << endl; 
	};

	double evaluate() const { return result; }

private:
	Expression const * left;
	Expression const * right;
	char op;
	double result;
};

int main()
{
	Expression *a = new BinaryOperation(new Number(1), '/', new Number(2));
	Expression *b = new BinaryOperation(new Number(5), '+', a);
	std::cout << b->evaluate() << std::endl;
	delete b;
	return 0;
}
