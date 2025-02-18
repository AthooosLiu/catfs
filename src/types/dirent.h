#ifndef CATFS_DIRENT_H
#define CATFS_DIRENT_H

#include "inode.h"
#include <string>

namespace catfs
{
  namespace types
  {

    class Dirent
    {
    public:
      std::string name;
      InodeID pino;
      Inode inode;
    };

  } // namespace types
} // namespace catfs
#endif