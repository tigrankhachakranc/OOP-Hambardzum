#ifndef COURSE_PROJECT_SRC_APPLICATION_HPP
#define COURSE_PROJECT_SRC_APPLICATION_HPP

#include "cli/controller/command_controller.hpp"
#include "logic/director.hpp"
#include "model/document.hpp"

class Application {
public:
    static Application& instance();
    void run();

    logic::Director getDirector() const;
    model::Document getDocument() const; // reference or not??
    /// TODO: getters for document, etc..

private:
    Application();

private:
    logic::Director director_;
    cli::Controller controller_;
    model::Document doc_;
}; // class Application

#endif // COURSE_PROJECT_SRC_APPLICATION_HPP