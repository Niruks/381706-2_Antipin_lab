#pragma once

class String
{
protected:
  char* str;
  int count;
public:
  String();
  String(const char* _str);
  String(const String& _str);
  ~String();
  String& operator=(const String& _str);
  bool operator==(const String& _str) const;
  bool operator<(const String& _str) const;
  bool operator>(const String& _str) const;
  char& operator[](const int pos) const;
  char* GetArrChar();
};