#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreationForm", false, 145, 137), target("undefined") {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", false, 145, 137), target(target) {

}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& reference)
: target(reference.target) {

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& reference) {
	if (this != &reference) {
		Form::operator=(reference);
		target = reference.target;
	}
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const {
	return target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (getIsSigned() == false) {
		throw SignFalseException();
	}
	if (executor.getGrade() > getExecuteGrade()) {
		throw GradeTooLowException();
	}
	std::ofstream output;
	output.open(getTarget() + "_shrubbery");
	if (output.fail()) {
		throw OutputStreamException();
	}
	std::string tree = 	"                * * \n"
						"           *    *  * \n"
						"      *  *    *     *  * \n"
						"     *     *    *  *    * \n"
						" * *   *    *    *    *   * \n"
						" *     *  *    * * *  *    * \n"
						" *   *     * *#   # *   * \n"
						"  *      #.  #: #  * *    * \n"
						" *   * *  #. ##        * \n"
						"   *        ### \n" 
						"              ## \n"
						"              ##. \n"
						"              .##: \n"
						"              ;### \n"
						"            ,####. \n"
						"           .######.  \n";
	output << tree;
	output.close();
}