object Form5: TForm5
  Left = 0
  Top = 0
  Caption = 'Mode de pilotage'
  ClientHeight = 210
  ClientWidth = 444
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
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
  object Button1: TButton
    Left = 40
    Top = 160
    Width = 241
    Height = 42
    Caption = 'Je veux controller mon hexapode '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clSilver
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = Button1Click
  end
  object RadioButton1: TRadioButton
    Left = 223
    Top = 80
    Width = 113
    Height = 17
    Caption = 'Confort'
    TabOrder = 4
  end
  object RadioButton2: TRadioButton
    Left = 223
    Top = 103
    Width = 113
    Height = 17
    Caption = 'Sport'
    TabOrder = 5
  end
  object RadioButton3: TRadioButton
    Left = 223
    Top = 126
    Width = 113
    Height = 17
    Caption = 'Sport+'
    TabOrder = 6
  end
end
