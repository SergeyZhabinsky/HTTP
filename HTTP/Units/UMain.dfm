object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 202
  ClientWidth = 958
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 144
    Width = 958
    Height = 58
    Align = alBottom
    Caption = 'Panel1'
    TabOrder = 0
    object Button1: TButton
      Left = 24
      Top = 16
      Width = 121
      Height = 33
      Caption = 'Button1'
      TabOrder = 0
      OnClick = Button1Click
    end
  end
  object CppWebBrowser1: TCppWebBrowser
    Left = 249
    Top = 0
    Width = 23
    Height = 144
    Align = alClient
    TabOrder = 1
    ExplicitWidth = 128
    ControlData = {
      4C00000061020000E20E00000000000000000000000000000000000000000000
      000000004C000000000000000000000001000000E0D057007335CF11AE690800
      2B2E126208000000000000004C0000000114020000000000C000000000000046
      8000000000000000000000000000000000000000000000000000000000000000
      00000000000000000100000000000000000000000000000000000000}
  end
  object Memo1: TMemo
    Left = 0
    Top = 0
    Width = 249
    Height = 144
    Align = alLeft
    Lines.Strings = (
      'Memo1')
    TabOrder = 2
  end
  object StringGrid1: TStringGrid
    Left = 272
    Top = 0
    Width = 686
    Height = 144
    Align = alRight
    ColCount = 6
    FixedCols = 0
    RowCount = 50
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goColSizing]
    TabOrder = 3
    ExplicitLeft = 278
    ExplicitTop = -6
    ColWidths = (
      64
      64
      64
      64
      64
      64)
    RowHeights = (
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24)
  end
end
