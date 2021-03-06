#pragma once

// I just want the struct for the save data.
#include "stdafx.h"
#include "Emu/Memory/vm.h"
#include "Emu/Cell/Modules/cellSaveData.h"

#include <QDialog>
#include <QTableWidget>

//Used to display the information of a savedata.
class save_data_info_dialog :public QDialog
{
	Q_OBJECT

public:
	explicit save_data_info_dialog(const SaveDataEntry& save, QWidget* parent = nullptr);
private:
	void UpdateData();

	SaveDataEntry m_entry;
	QTableWidget* m_list;
};
