class Material
{
private:
	int numMaterial;
	char material_name[40];
	int priceMaterial;
public:
	void Material::Search();
	void Material::Add();
	void Material::Del();
};

void Material::Search()
{
	system("cls");
	ifstream in("Material.txt");
	cout << endl << endl;
	cout << "  Material" << setw(10) << "Nunber" << setw(10) << "price" << endl;
	while (in >> material_name >> numMaterial >> priceMaterial)
	{
		cout << "  " << material_name << "   " << setw(10) << numMaterial << setw(10) << priceMaterial << endl;
	}
	in.close();
	
}

void Material::Add()
{
	system("cls");
	char flag = 'y';
	int Check;
	do
	{
		
		cout << "输入材料名，数量，价格" << endl;
		cin >> material_name >> numMaterial >> priceMaterial;
		Check = check(material_name);
		if (Check==1)
		{

			ofstream out("Material.txt", ios::app);
			out << number << "  " << dish_name << "  " << price << "  " << endl;
			out.close();
			cout << "是否继续是(y)否(n)" << endl;
			cin >> flag;
		}
		else
		{
			cout << "材料已存在！" << endl;
			cout << "是否重新继续是(y)否(n)" << endl;
			cin >> flag;
		}
	} while (flag == 'y');
}

void Material::Del()
{
	system("cls");
	char flag = 'y'
	int Check;
	char newname[40];
	do
	{

		cout << "输入材料名" << endl;
		cin >> newname;
		Check = check(newname);
		if (Check == 0)
		{
			ifstream in("Menus.txt");
			ofstream out("Material1.txt",ios::trunc)
			while (in >> number >> dish_name >> price)
			{
				if (newname !== dish_name)
				{
					
					out << number << "  " << dish_name << "  " << price << "  " << endl;
				}
			}
			in.close();
			out.close();
			ifstream in("Material1.txt");
			ofstream out("Material.txt", ios::trunc);
			while (in >> number >> dish_name >> price)
			{
				out << number << "  " << dish_name << "  " << price << "  " << endl;
			}
			in.close();
			out.close();
			
		}
	} while (flag == 'y');
}

int check(char Name[40])
{
	int numCheck = 1;
	ifstream in("Material.txt"); 
	while (in >> material_name >> numMaterial >> priceMaterial)
	{
		if (char Name[40]== char material_name[40])
		{
			numCheck = 0;break
		}
		else {
			numCheck = 1;
		}
	}
	return numCheck;
}

class Dishes
{
private:
	int sums;
	int numDish;
	int priceDish;
	char dish_name[30];
public:

};

class Customer
{
private:
	int desk;
	char dishes_Customer[20];
	char write_evaluate[200];
	int total;
public:

};