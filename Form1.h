#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Listadodepacientes;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo_de_visita;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hora_del_turno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre_del_paciente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Razon_de_la_visita;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sexo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Edad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estatus_de_la_visita;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hora_de_llegada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Duracion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Habitacion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tiempo_total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Notas;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Listadodepacientes = (gcnew System::Windows::Forms::DataGridView());
			this->Tipo_de_visita = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hora_del_turno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre_del_paciente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Razon_de_la_visita = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sexo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Edad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estatus_de_la_visita = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hora_de_llegada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Duracion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Habitacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tiempo_total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Notas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Listadodepacientes))->BeginInit();
			this->SuspendLayout();
			// 
			// Listadodepacientes
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Listadodepacientes->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->Listadodepacientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Listadodepacientes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->Tipo_de_visita,
					this->Hora_del_turno, this->Nombre_del_paciente, this->Razon_de_la_visita, this->Sexo, this->Edad, this->Estatus_de_la_visita,
					this->Hora_de_llegada, this->Duracion, this->Habitacion, this->Estatus, this->Tiempo_total, this->Notas
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->Listadodepacientes->DefaultCellStyle = dataGridViewCellStyle2;
			this->Listadodepacientes->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Listadodepacientes->Location = System::Drawing::Point(0, 231);
			this->Listadodepacientes->Name = L"Listadodepacientes";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Listadodepacientes->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->Listadodepacientes->Size = System::Drawing::Size(1734, 696);
			this->Listadodepacientes->TabIndex = 0;
			// 
			// Tipo_de_visita
			// 
			this->Tipo_de_visita->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Tipo_de_visita->HeaderText = L"Tipo de visita";
			this->Tipo_de_visita->MinimumWidth = 50;
			this->Tipo_de_visita->Name = L"Tipo_de_visita";
			this->Tipo_de_visita->Width = 87;
			// 
			// Hora_del_turno
			// 
			this->Hora_del_turno->HeaderText = L"Hora del turno";
			this->Hora_del_turno->Name = L"Hora_del_turno";
			// 
			// Nombre_del_paciente
			// 
			this->Nombre_del_paciente->HeaderText = L"Nombre del paciente";
			this->Nombre_del_paciente->Name = L"Nombre_del_paciente";
			this->Nombre_del_paciente->Width = 300;
			// 
			// Razon_de_la_visita
			// 
			this->Razon_de_la_visita->HeaderText = L"Razon de la visita";
			this->Razon_de_la_visita->Name = L"Razon_de_la_visita";
			this->Razon_de_la_visita->Width = 300;
			// 
			// Sexo
			// 
			this->Sexo->HeaderText = L"Sexo";
			this->Sexo->Name = L"Sexo";
			// 
			// Edad
			// 
			this->Edad->HeaderText = L"Edad";
			this->Edad->Name = L"Edad";
			// 
			// Estatus_de_la_visita
			// 
			this->Estatus_de_la_visita->HeaderText = L"Estatus de la visita";
			this->Estatus_de_la_visita->Name = L"Estatus_de_la_visita";
			// 
			// Hora_de_llegada
			// 
			this->Hora_de_llegada->HeaderText = L"Hora de llegada";
			this->Hora_de_llegada->Name = L"Hora_de_llegada";
			// 
			// Duracion
			// 
			this->Duracion->HeaderText = L"Duracion";
			this->Duracion->Name = L"Duracion";
			// 
			// Habitacion
			// 
			this->Habitacion->HeaderText = L"Habitacion";
			this->Habitacion->Name = L"Habitacion";
			// 
			// Estatus
			// 
			this->Estatus->HeaderText = L"Estatus";
			this->Estatus->Name = L"Estatus";
			// 
			// Tiempo_total
			// 
			this->Tiempo_total->HeaderText = L"Tiempo Total";
			this->Tiempo_total->Name = L"Tiempo_total";
			// 
			// Notas
			// 
			this->Notas->HeaderText = L"Notas";
			this->Notas->Name = L"Notas";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1734, 927);
			this->Controls->Add(this->Listadodepacientes);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Listadodepacientes))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
