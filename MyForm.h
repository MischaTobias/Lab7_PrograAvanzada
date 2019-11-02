#pragma once
#include "Lista.h"
#include "Pokemon.h"
#include "Orden.h"

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
	private: System::Windows::Forms::RichTextBox^ rTBListaPokemons;
	private: System::Windows::Forms::Button^ btnOrdenar;
	private: System::Windows::Forms::ComboBox^ cBCriteriosOrdenamiento;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cBMetodoOrdenamiento;
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
			this->rTBListaPokemons = (gcnew System::Windows::Forms::RichTextBox());
			this->btnOrdenar = (gcnew System::Windows::Forms::Button());
			this->cBCriteriosOrdenamiento = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cBMetodoOrdenamiento = (gcnew System::Windows::Forms::ComboBox());
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
			// rTBListaPokemons
			// 
			this->rTBListaPokemons->Location = System::Drawing::Point(316, 28);
			this->rTBListaPokemons->Name = L"rTBListaPokemons";
			this->rTBListaPokemons->Size = System::Drawing::Size(200, 304);
			this->rTBListaPokemons->TabIndex = 1;
			this->rTBListaPokemons->Text = L"";
			// 
			// btnOrdenar
			// 
			this->btnOrdenar->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnOrdenar->Location = System::Drawing::Point(30, 110);
			this->btnOrdenar->Name = L"btnOrdenar";
			this->btnOrdenar->Size = System::Drawing::Size(135, 53);
			this->btnOrdenar->TabIndex = 2;
			this->btnOrdenar->Text = L"Ordenar Lista";
			this->btnOrdenar->UseVisualStyleBackColor = false;
			this->btnOrdenar->Click += gcnew System::EventHandler(this, &MyForm::btnOrdenar_Click);
			// 
			// cBCriteriosOrdenamiento
			// 
			this->cBCriteriosOrdenamiento->FormattingEnabled = true;
			this->cBCriteriosOrdenamiento->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"National Number", L"Generation Number" });
			this->cBCriteriosOrdenamiento->Location = System::Drawing::Point(30, 201);
			this->cBCriteriosOrdenamiento->Name = L"cBCriteriosOrdenamiento";
			this->cBCriteriosOrdenamiento->Size = System::Drawing::Size(135, 21);
			this->cBCriteriosOrdenamiento->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Escoja el criterio de búsqueda:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 242);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Escoja el método de ordenamiento:";
			// 
			// cBMetodoOrdenamiento
			// 
			this->cBMetodoOrdenamiento->FormattingEnabled = true;
			this->cBMetodoOrdenamiento->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Bubble Sort", L"Quick Sort", L"Stupid Sort" });
			this->cBMetodoOrdenamiento->Location = System::Drawing::Point(30, 272);
			this->cBMetodoOrdenamiento->Name = L"cBMetodoOrdenamiento";
			this->cBMetodoOrdenamiento->Size = System::Drawing::Size(135, 21);
			this->cBMetodoOrdenamiento->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(570, 412);
			this->Controls->Add(this->cBMetodoOrdenamiento);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cBCriteriosOrdenamiento);
			this->Controls->Add(this->btnOrdenar);
			this->Controls->Add(this->rTBListaPokemons);
			this->Controls->Add(this->btnSeleccionarArchivo);
			this->Name = L"MyForm";
			this->Text = L"Lab7_Mischa_Tobias_1170919";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Lista* listaPokemons = new Lista();
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
		listaPokemons = new Lista();
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
				newPokemon->tamNombre = GetArreglo(cadaPokemon[2], newPokemon->nombre);
				listaPokemons->Insertar(newPokemon);
			}

			MostrarLista();
		}
		catch (...)
		{
			MessageBox::Show("La dirección indicada no es válida");
		}
	}

	private: System::Void MostrarLista() {
		String^ text = "";
		Pokemon* pokemon = new Pokemon();
		pokemon = listaPokemons->first;
		for (int i = 0; i < listaPokemons->nElementos; i++)
		{
			text += pokemon->genNumber.ToString() + "." + pokemon->nationalNumber.ToString() + "." + GetString(pokemon->nombre, pokemon->tamNombre) + "\n";
			pokemon = pokemon->siguientePokemon;
		}
		rTBListaPokemons->Text = text;
	}

	private: System::String^ GetString(char arreglo[], int m) {
		String^ texto = "";
		for (int i = 0; i < m; i++)
		{
			texto += System::Convert::ToChar(arreglo[i]);
		}
		return texto;
	}

	private: System::Int16 GetArreglo(String^ texto, char arreglo[]) {
		int tam = texto->Length;
		arreglo[texto->Length];
		for (int i = 0; i < texto->Length; i++) {
			arreglo[i] = texto[i];
		}
		return tam;
	}
	private: System::Void btnOrdenar_Click(System::Object^ sender, System::EventArgs^ e) {
		Orden* objOrden = new Orden();
		Pokemon vectPokemon[6];
		static int x = listaPokemons->nElementos;
		for (int i = 0; i < x; i++)
		{
			vectPokemon[i] = *listaPokemons->Quitar();
		}

		switch (cBMetodoOrdenamiento->SelectedIndex)
		{
			case 0://Bubble
				if (cBCriteriosOrdenamiento->SelectedIndex == 0)
				{
					for (int i = 0; i < 6; i++)
					{
						vectPokemon[i] = objOrden->BubbleSort(vectPokemon, 6, false)[i];
					}
				}
				else
				{
					for (int i = 0; i < 6; i++)
					{
						vectPokemon[i] = objOrden->BubbleSort(vectPokemon, 6, true)[i];
					}
				}
				break;
			case 1://Quick
				if (cBCriteriosOrdenamiento->SelectedIndex == 0)
				{
					for (int i = 0; i < 6; i++)
					{
						vectPokemon[i] = objOrden->QuickSort(vectPokemon, 0, 6 - 1, false)[i];
					}
				}
				else
				{
					for (int i = 0; i < 6; i++)
					{
						vectPokemon[i] = objOrden->QuickSort(vectPokemon, 0, 6 - 1, true)[i];
					}
				}
				break;
			case 2://Stupid

				if (cBCriteriosOrdenamiento->SelectedIndex == 0)
				{
					//listaPokemons = &objOrden->BubbleSort(listaPokemons, listaPokemons->nElementos, false);
				}
				else
				{
					//listaPokemons = &objOrden->BubbleSort(listaPokemons, listaPokemons->nElementos, true);
				}
				break;
		}

		for (int i = 5; i >= 0; i--)
		{
			listaPokemons->Insertar(&vectPokemon[i]);
		}
		MostrarLista();
	}
};
}
