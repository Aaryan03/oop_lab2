/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

float v;

float Vol_shape(int cs) // calculating volume of cube
{
	v = (cs*cs*cs);
	return v;
}

float Vol_shape(float rs) // calculating volume of sphere
{
	v = (4/3) * (3.14 * rs * rs * rs);
	return v;
}

float Vol_shape(int rc , int hc) // calculating volume of cylinder
{
	v = (3.14 * rc *rc * hc);
	return v;
}

float Vol_shape(float rc, float hc) // calculating volume of cone
{
	v = (3.14 * rc * rc *hc)/3;
	return v;
}

int main()
{
	
	float radius_sphere;
	int radius_cylinder, height_cylinder;
	float radius_cone , height_cone;
	int cube_side;
	float vol_cube, vol_sphere,vol_cylinder, vol_cone, vol_total ;
	int ch;

	do
	{	
		cout<<"1. Volume of Cube."<<endl;
		cout<<"2. Volume of Sphere."<<endl;
		cout<<"3. Volume of Cylinder." <<endl;
		cout<<"4. Volume of Cone."<<endl;
		cout<<"5. Exit "<<endl;
		cout<< "Enter your choice: ";
		cin >> ch;
		

		switch (ch)
		{
			case 1: cout << " Enter the side of the cube: ";
			        cin >> cube_side;
			        cout << endl;
			        
			        vol_cube = Vol_shape(cube_side); 
			        cout << "The volume of cube is: "<< vol_cube <<endl;
			        
			        break; 
			
			case 2: cout << " Enter the radius of the sphere: ";
			        cin >> radius_sphere;
			        cout<< endl;
			        
			        vol_sphere =  Vol_shape(radius_sphere); 
			        cout << "The volume of Sphere is: " <<vol_sphere <<endl; 
			        
			        break;
			
			case 3: cout << "Enter the radius of the cylinder: ";
			        cin >> radius_cylinder; 
			        cout << endl;
			        
			        cout << "Enter the height of the cylinder: ";
			        cin >> height_cylinder;
			        cout << endl; 
			        
			        vol_cylinder = Vol_shape(radius_cylinder, height_cylinder); 
			        cout << "The volume of Cylinder is: " << vol_cylinder <<endl;
			        
			        break;
			
			case 4: cout << "Enter the radius of the cone: ";
			        cin >> radius_cone; 
			        cout << endl;
			        
			        cout << "Enter the height of the cone: ";
			        cin >> height_cone;
			        cout << endl; 
			        
			        vol_cone = Vol_shape(radius_cone, height_cone); 
			        cout << "The volume of Cone is: " << vol_cone <<endl;
			        
			        break;
			        
			case 5: cout <<"Thank you! ";
			        break;
		}
	}while(ch!=5);
	
	vol_total = vol_cube + vol_sphere + vol_cylinder + vol_cone; 
	
	cout << "The total volume of all shapes is: " << vol_total <<endl;
	
}

