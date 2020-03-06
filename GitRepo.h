#ifndef GITREPO_H
#define GITREPO_H

#include <string>
#include "git2.h"

class GitRepo
{
public:
    GitRepo(const std::string &path);
    ~GitRepo();

    int Status();
    std::string GetPath() const;
    bool IsValid() const;

private:
    git_repository *mRepo;
    std::string mPath;
    bool mIsValid;
};

#endif // GITREPO_H
