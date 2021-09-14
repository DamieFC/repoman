#ifndef _GIT_H
#define _GIT_H

int git_clone(char repo_url[]);
int git_pull();
int git_status();
int git_push(int is_signed_commit);

#endif //_GIT_H
