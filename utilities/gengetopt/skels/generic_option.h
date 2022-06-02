/*
 * File automatically generated by
 * gengen 1.2 by Lorenzo Bettini
 * https://www.gnu.org/software/gengen
 */

#ifndef GENERIC_OPTION_GEN_CLASS_H
#define GENERIC_OPTION_GEN_CLASS_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;

class generic_option_gen_class
{
 protected:
  string arg_type;
  string default_value;
  string final_instructions;
  string gen_else;
  string group_var_name;
  bool has_short_option;
  string long_option;
  bool multiple;
  string option_comment;
  bool option_has_group;
  bool option_has_mode;
  bool option_has_type;
  string option_var_name;
  string possible_values;
  string short_option;
  string structure;

 public:
  generic_option_gen_class() :
    has_short_option (false), multiple (false), option_has_group (false), option_has_mode (false), option_has_type (false)
  {
  }

  generic_option_gen_class(const string &_arg_type, const string &_default_value, const string &_final_instructions, const string &_gen_else, const string &_group_var_name, bool _has_short_option, const string &_long_option, bool _multiple, const string &_option_comment, bool _option_has_group, bool _option_has_mode, bool _option_has_type, const string &_option_var_name, const string &_possible_values, const string &_short_option, const string &_structure) :
    arg_type (_arg_type), default_value (_default_value), final_instructions (_final_instructions), gen_else (_gen_else), group_var_name (_group_var_name), has_short_option (_has_short_option), long_option (_long_option), multiple (_multiple), option_comment (_option_comment), option_has_group (_option_has_group), option_has_mode (_option_has_mode), option_has_type (_option_has_type), option_var_name (_option_var_name), possible_values (_possible_values), short_option (_short_option), structure (_structure)
  {
  }

  static void
  generate_string(const string &s, ostream &stream, unsigned int indent)
  {
    if (!indent || s.find('\n') == string::npos)
      {
        stream << s;
        return;
      }

    string::size_type pos;
    string::size_type start = 0;
    string ind (indent, ' ');
    while ( (pos=s.find('\n', start)) != string::npos)
      {
        stream << s.substr (start, (pos+1)-start);
        start = pos+1;
        if (start+1 <= s.size ())
          stream << ind;
      }
    if (start+1 <= s.size ())
      stream << s.substr (start);
  }

  void set_arg_type(const string &_arg_type)
  {
    arg_type = _arg_type;
  }

  void set_default_value(const string &_default_value)
  {
    default_value = _default_value;
  }

  void set_final_instructions(const string &_final_instructions)
  {
    final_instructions = _final_instructions;
  }

  void set_gen_else(const string &_gen_else)
  {
    gen_else = _gen_else;
  }

  void set_group_var_name(const string &_group_var_name)
  {
    group_var_name = _group_var_name;
  }

  void set_has_short_option(bool _has_short_option)
  {
    has_short_option = _has_short_option;
  }

  void set_long_option(const string &_long_option)
  {
    long_option = _long_option;
  }

  void set_multiple(bool _multiple)
  {
    multiple = _multiple;
  }

  void set_option_comment(const string &_option_comment)
  {
    option_comment = _option_comment;
  }

  void set_option_has_group(bool _option_has_group)
  {
    option_has_group = _option_has_group;
  }

  void set_option_has_mode(bool _option_has_mode)
  {
    option_has_mode = _option_has_mode;
  }

  void set_option_has_type(bool _option_has_type)
  {
    option_has_type = _option_has_type;
  }

  void set_option_var_name(const string &_option_var_name)
  {
    option_var_name = _option_var_name;
  }

  void set_possible_values(const string &_possible_values)
  {
    possible_values = _possible_values;
  }

  void set_short_option(const string &_short_option)
  {
    short_option = _short_option;
  }

  void set_structure(const string &_structure)
  {
    structure = _structure;
  }

  void generate_generic_option(ostream &stream, unsigned int indent = 0);

};

#endif // GENERIC_OPTION_GEN_CLASS_H
