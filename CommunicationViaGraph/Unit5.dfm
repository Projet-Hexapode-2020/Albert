object Form5: TForm5
  Left = 0
  Top = 0
  Caption = 'Form5'
  ClientHeight = 168
  ClientWidth = 322
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 24
    Width = 282
    Height = 22
    Caption = 'Veuillez choisir votre mode '
    Font.Charset = ANSI_CHARSET
    Font.Color = clSilver
    Font.Height = -19
    Font.Name = 'San Diego'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object CheckBox1: TCheckBox
    Left = 120
    Top = 80
    Width = 97
    Height = 17
    Caption = 'Confort'
    TabOrder = 0
    OnClick = CheckBox1Click
  end
  object CheckBox2: TCheckBox
    Left = 120
    Top = 103
    Width = 97
    Height = 17
    Caption = 'Sport'
    TabOrder = 1
    OnClick = CheckBox2Click
  end
  object CheckBox3: TCheckBox
    Left = 120
    Top = 126
    Width = 97
    Height = 17
    Caption = 'Sport+'
    TabOrder = 2
    OnClick = CheckBox3Click
  end
end
