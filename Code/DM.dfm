object fDM: TfDM
  OldCreateOrder = False
  Left = 527
  Top = 314
  Height = 248
  Width = 219
  object TPhonebook: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1058#1077#1083#1077#1092#1086#1085#1085#1099#1081'_'#1089#1087#1088#1072#1074#1086#1095#1085#1080#1082
    Left = 32
    Top = 56
    object TPhonebook_: TAutoIncField
      FieldName = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1094#1080#1086#1085#1085#1099#1081'_'#1085#1086#1084#1077#1088
      ReadOnly = True
    end
    object TPhonebookDSDesigner: TWideStringField
      FieldName = #1060#1072#1084#1080#1083#1080#1103
    end
    object TPhonebookDSDesigner2: TWideStringField
      FieldName = #1048#1084#1103
    end
    object TPhonebookDSDesigner3: TWideStringField
      FieldName = #1054#1090#1095#1077#1089#1090#1074#1086
    end
    object TPhonebook_2: TWideStringField
      FieldName = #1052#1086#1073#1080#1083#1100#1085#1099#1081'_'#1090#1077#1083#1077#1092#1086#1085
      Size = 15
    end
    object TPhonebookDSDesigner4: TWideStringField
      FieldName = #1043#1086#1088#1086#1076
    end
    object TPhonebookDSDesigner5: TWideStringField
      FieldName = #1059#1083#1080#1094#1072
    end
    object TPhonebookDSDesigner6: TWideStringField
      FieldName = #1044#1086#1084
      Size = 10
    end
    object TPhonebookDSDesigner7: TWideStringField
      FieldName = #1050#1086#1088#1087#1091#1089
      Size = 10
    end
    object TPhonebookDSDesigner8: TWideStringField
      FieldName = #1050#1074#1072#1088#1090#1080#1088#1072
      Size = 10
    end
    object TPhonebook_3: TWideStringField
      FieldName = #1044#1086#1084#1072#1096#1085#1080#1081'_'#1090#1077#1083#1077#1092#1086#1085
      Size = 15
    end
    object TPhonebookDSDesigner9: TWideStringField
      FieldName = #1054#1088#1075#1072#1085#1080#1079#1072#1094#1080#1103
      Size = 45
    end
    object TPhonebookDSDesigner10: TWideStringField
      FieldName = #1044#1086#1083#1078#1085#1086#1089#1090#1100
      Size = 35
    end
    object TPhonebook_4: TWideStringField
      FieldName = #1056#1072#1073#1086#1095#1080#1081'_'#1090#1077#1083#1077#1092#1086#1085
      Size = 15
    end
  end
  object DSPhonebook: TDataSource
    DataSet = TPhonebook
    Left = 32
    Top = 104
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    DataSource = DSPhonebook
    Parameters = <>
    SQL.Strings = (
      'Select * From '#1058#1077#1083#1077#1092#1086#1085#1085#1099#1081'_'#1089#1087#1088#1072#1074#1086#1095#1085#1080#1082';')
    Left = 96
    Top = 56
    object ADOQuery1_: TAutoIncField
      FieldName = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1094#1080#1086#1085#1085#1099#1081'_'#1085#1086#1084#1077#1088
      ReadOnly = True
      Visible = False
    end
    object ADOQuery1DSDesigner: TWideStringField
      DisplayWidth = 21
      FieldName = #1060#1072#1084#1080#1083#1080#1103
    end
    object ADOQuery1DSDesigner2: TWideStringField
      DisplayWidth = 19
      FieldName = #1048#1084#1103
    end
    object ADOQuery1DSDesigner3: TWideStringField
      DisplayWidth = 21
      FieldName = #1054#1090#1095#1077#1089#1090#1074#1086
    end
    object ADOQuery1_2: TWideStringField
      DisplayWidth = 22
      FieldName = #1052#1086#1073#1080#1083#1100#1085#1099#1081'_'#1090#1077#1083#1077#1092#1086#1085
      Size = 15
    end
    object ADOQuery1DSDesigner4: TWideStringField
      FieldName = #1043#1086#1088#1086#1076
      Visible = False
    end
    object ADOQuery1DSDesigner5: TWideStringField
      FieldName = #1059#1083#1080#1094#1072
      Visible = False
    end
    object ADOQuery1DSDesigner6: TWideStringField
      FieldName = #1044#1086#1084
      Visible = False
      Size = 10
    end
    object ADOQuery1DSDesigner7: TWideStringField
      FieldName = #1050#1086#1088#1087#1091#1089
      Visible = False
      Size = 10
    end
    object ADOQuery1DSDesigner8: TWideStringField
      FieldName = #1050#1074#1072#1088#1090#1080#1088#1072
      Visible = False
      Size = 10
    end
    object ADOQuery1_3: TWideStringField
      DisplayWidth = 21
      FieldName = #1044#1086#1084#1072#1096#1085#1080#1081'_'#1090#1077#1083#1077#1092#1086#1085
      Size = 15
    end
    object ADOQuery1DSDesigner9: TWideStringField
      FieldName = #1054#1088#1075#1072#1085#1080#1079#1072#1094#1080#1103
      Visible = False
      Size = 45
    end
    object ADOQuery1DSDesigner10: TWideStringField
      FieldName = #1044#1086#1083#1078#1085#1086#1089#1090#1100
      Visible = False
      Size = 35
    end
    object ADOQuery1_4: TWideStringField
      DisplayWidth = 18
      FieldName = #1056#1072#1073#1086#1095#1080#1081'_'#1090#1077#1083#1077#1092#1086#1085
      Size = 15
    end
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    OnDataChange = DataSource1DataChange
    Left = 96
    Top = 104
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=Phonebook.mdb;Persi' +
      'st Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 32
    Top = 16
  end
end
