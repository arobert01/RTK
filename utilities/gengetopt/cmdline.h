/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.4
 *  https://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE PACKAGE
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#ifdef PACKAGE_NAME
#define CMDLINE_PARSER_PACKAGE_NAME PACKAGE_NAME
#else
#define CMDLINE_PARSER_PACKAGE_NAME PACKAGE
#endif
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *detailed_help_help; /**< @brief Print help, including all details and hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  char * input_arg;	/**< @brief input file (default std input).  */
  char * input_orig;	/**< @brief input file (default std input) original value given at command line.  */
  const char *input_help; /**< @brief input file (default std input) help description.  */
  char * func_name_arg;	/**< @brief name of generated function (default='cmdline_parser').  */
  char * func_name_orig;	/**< @brief name of generated function original value given at command line.  */
  const char *func_name_help; /**< @brief name of generated function help description.  */
  char * arg_struct_name_arg;	/**< @brief name of generated args info struct (default='gengetopt_args_info').  */
  char * arg_struct_name_orig;	/**< @brief name of generated args info struct original value given at command line.  */
  const char *arg_struct_name_help; /**< @brief name of generated args info struct help description.  */
  char * file_name_arg;	/**< @brief name of generated file (default='cmdline').  */
  char * file_name_orig;	/**< @brief name of generated file original value given at command line.  */
  const char *file_name_help; /**< @brief name of generated file help description.  */
  char * output_dir_arg;	/**< @brief output directory.  */
  char * output_dir_orig;	/**< @brief output directory original value given at command line.  */
  const char *output_dir_help; /**< @brief output directory help description.  */
  char * header_output_dir_arg;	/**< @brief header output directory.  */
  char * header_output_dir_orig;	/**< @brief header output directory original value given at command line.  */
  const char *header_output_dir_help; /**< @brief header output directory help description.  */
  char * src_output_dir_arg;	/**< @brief source output directory.  */
  char * src_output_dir_orig;	/**< @brief source output directory original value given at command line.  */
  const char *src_output_dir_help; /**< @brief source output directory help description.  */
  char * c_extension_arg;	/**< @brief extension of c file (default='c').  */
  char * c_extension_orig;	/**< @brief extension of c file original value given at command line.  */
  const char *c_extension_help; /**< @brief extension of c file help description.  */
  char * header_extension_arg;	/**< @brief extension of header file (default='h').  */
  char * header_extension_orig;	/**< @brief extension of header file original value given at command line.  */
  const char *header_extension_help; /**< @brief extension of header file help description.  */
  const char *long_help_help; /**< @brief long usage line in help help description.  */
  const char *default_optional_help; /**< @brief by default, an option is considered optional if not specified otherwise help description.  */
  char * unamed_opts_arg;	/**< @brief accept options without names (e.g., file names) (default='FILES').  */
  char * unamed_opts_orig;	/**< @brief accept options without names (e.g., file names) original value given at command line.  */
  const char *unamed_opts_help; /**< @brief accept options without names (e.g., file names) help description.  */
  const char *conf_parser_help; /**< @brief generate a config file parser help description.  */
  const char *string_parser_help; /**< @brief generate a string parser (the string contains the command line) help description.  */
  const char *include_getopt_help; /**< @brief adds the code for getopt_long in the generated C file help description.  */
  const char *no_handle_help_help; /**< @brief do not handle --help|-h automatically help description.  */
  const char *no_help_help; /**< @brief do not add --help|-h automatically help description.  */
  const char *no_handle_version_help; /**< @brief do not handle --version|-V automatically help description.  */
  const char *no_version_help; /**< @brief do not add --version|-V automatically help description.  */
  const char *no_handle_error_help; /**< @brief do not exit on errors help description.  */
  char * show_required_arg;	/**< @brief in the output of help will specify which options are mandatory, by using the optional passed string (default='(mandatory)').  */
  char * show_required_orig;	/**< @brief in the output of help will specify which options are mandatory, by using the optional passed string original value given at command line.  */
  const char *show_required_help; /**< @brief in the output of help will specify which options are mandatory, by using the optional passed string help description.  */
  int gen_version_flag;	/**< @brief put gengetopt version in the generated file (default=on).  */
  const char *gen_version_help; /**< @brief put gengetopt version in the generated file help description.  */
  char * set_package_arg;	/**< @brief set the package name (override package defined in the .ggo file).  */
  char * set_package_orig;	/**< @brief set the package name (override package defined in the .ggo file) original value given at command line.  */
  const char *set_package_help; /**< @brief set the package name (override package defined in the .ggo file) help description.  */
  char * set_version_arg;	/**< @brief set the version number (override version defined in the .ggo file).  */
  char * set_version_orig;	/**< @brief set the version number (override version defined in the .ggo file) original value given at command line.  */
  const char *set_version_help; /**< @brief set the version number (override version defined in the .ggo file) help description.  */
  const char *show_help_help; /**< @brief show the output of --help instead of generating code help description.  */
  const char *show_full_help_help; /**< @brief show the output of --full-help (i.e., including hidden options) instead of generating code help description.  */
  const char *show_detailed_help_help; /**< @brief show the output of --detailed-help (i.e., including details and hidden options) instead of generating code help description.  */
  const char *show_version_help; /**< @brief show the output of --version instead of generating code help description.  */

  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int detailed_help_given ;	/**< @brief Whether detailed-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int input_given ;	/**< @brief Whether input was given.  */
  unsigned int func_name_given ;	/**< @brief Whether func-name was given.  */
  unsigned int arg_struct_name_given ;	/**< @brief Whether arg-struct-name was given.  */
  unsigned int file_name_given ;	/**< @brief Whether file-name was given.  */
  unsigned int output_dir_given ;	/**< @brief Whether output-dir was given.  */
  unsigned int header_output_dir_given ;	/**< @brief Whether header-output-dir was given.  */
  unsigned int src_output_dir_given ;	/**< @brief Whether src-output-dir was given.  */
  unsigned int c_extension_given ;	/**< @brief Whether c-extension was given.  */
  unsigned int header_extension_given ;	/**< @brief Whether header-extension was given.  */
  unsigned int long_help_given ;	/**< @brief Whether long-help was given.  */
  unsigned int default_optional_given ;	/**< @brief Whether default-optional was given.  */
  unsigned int unamed_opts_given ;	/**< @brief Whether unamed-opts was given.  */
  unsigned int conf_parser_given ;	/**< @brief Whether conf-parser was given.  */
  unsigned int string_parser_given ;	/**< @brief Whether string-parser was given.  */
  unsigned int include_getopt_given ;	/**< @brief Whether include-getopt was given.  */
  unsigned int no_handle_help_given ;	/**< @brief Whether no-handle-help was given.  */
  unsigned int no_help_given ;	/**< @brief Whether no-help was given.  */
  unsigned int no_handle_version_given ;	/**< @brief Whether no-handle-version was given.  */
  unsigned int no_version_given ;	/**< @brief Whether no-version was given.  */
  unsigned int no_handle_error_given ;	/**< @brief Whether no-handle-error was given.  */
  unsigned int show_required_given ;	/**< @brief Whether show-required was given.  */
  unsigned int gen_version_given ;	/**< @brief Whether gen-version was given.  */
  unsigned int set_package_given ;	/**< @brief Whether set-package was given.  */
  unsigned int set_version_given ;	/**< @brief Whether set-version was given.  */
  unsigned int show_help_given ;	/**< @brief Whether show-help was given.  */
  unsigned int show_full_help_given ;	/**< @brief Whether show-full-help was given.  */
  unsigned int show_detailed_help_given ;	/**< @brief Whether show-detailed-help was given.  */
  unsigned int show_version_given ;	/**< @brief Whether show-version was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];
/** @brief all the lines making the detailed help output (including hidden options and details) */
extern const char *gengetopt_args_info_detailed_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the detailed help (including hidden options and details)
 */
void cmdline_parser_print_detailed_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * The string parser (interprets the passed string as a command line)
 * @param cmdline the command line stirng
 * @param args_info the structure where option information will be stored
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_string (const char *cmdline, struct gengetopt_args_info *args_info,
  const char *prog_name);
/**
 * The string parser (version with additional parameters - deprecated)
 * @param cmdline the command line stirng
 * @param args_info the structure where option information will be stored
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_string_ext() instead
 */
int cmdline_parser_string2 (const char *cmdline, struct gengetopt_args_info *args_info,
  const char *prog_name,
  int override, int initialize, int check_required);
/**
 * The string parser (version with additional parameters)
 * @param cmdline the command line stirng
 * @param args_info the structure where option information will be stored
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_string_ext (const char *cmdline, struct gengetopt_args_info *args_info,
  const char *prog_name,
  struct cmdline_parser_params *params);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
