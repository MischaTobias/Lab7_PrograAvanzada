#pragma once
#include "Lista.h"
#include "Pokemon.h"

namespace Lab7MischaTobias1170919 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSeleccionarArchivo;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnSeleccionarArchivo = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// btnSeleccionarArchivo
			// 
			this->btnSeleccionarArchivo->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnSeleccionarArchivo->Location = System::Drawing::Point(30, 28);
			this->btnSeleccionarArchivo->Name = L"btnSeleccionarArchivo";
			this->btnSeleccionarArchivo->Size = System::Drawing::Size(135, 53);
			this->btnSeleccionarArchivo->TabIndex = 0;
			this->btnSeleccionarArchivo->Text = L"Seleccionar Archivo";
			this->btnSeleccionarArchivo->UseVisualStyleBackColor = false;
			this->btnSeleccionarArchivo->Click += gcnew System::EventHandler(this, &MyForm::btnSeleccionarArchivo_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"-";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(570, 412);
			this->Controls->Add(this->btnSeleccionarArchivo);
			this->Name = L"MyForm";
			this->Text = L"Lab7_Mischa_Tobias_1170919";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSeleccionarArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->InitialDirectory = "...\repos\Lab7_Mischa_Tobias_1170919";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FileName = "NombresPokemon";
		openFileDialog1->ShowDialog();
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ ruta = openFileDialog1->FileName;	
		Lista* listaPokemons = new Lista();
		try
		{
			StreamReader^ streamReader = gcnew StreamReader(ruta);
			String^ contenidoArchivo = streamReader->ReadToEnd();
			array<String^>^ arregloPokemons = contenidoArchivo->Split(',');	
			array<String^>^ cadaPokemon;
			for (int i = 0; i < arregloPokemons->Length; i++)
			{
				Pokemon* newPokemon = new Pokemon();
				cadaPokemon = arregloPokemons[i]->Split('.');
				newPokemon->genNumber = System::Convert::ToInt16(cadaPokemon[0]);
				newPokemon->nationalNumber = System::Convert::ToInt16(cadaPokemon[1]);
				GetArreglo(cadaPokemon[2], newPokemon->nombre);
				listaPokemons->Insertar(newPokemon);
			}

			MessageBox::Show("Todo bien, todo correcto");
		}
		catch (...)
		{
			MessageBox::Show("La dirección indicada no es válida");
		}
	}

	private: System::Void GetArreglo(String^ texto, char arreglo[]) {
		arreglo[texto->Length];
		for (int i = 0; i < texto->Length; i++) {
			arreglo[i] = texto[i];
		}
	}
	};
}
