/*
 * Copyright (c) 2017, 2018 All rights reserved.
 * See LICENSE.txt for full details.
 *
 *  Created:     19 Jun 2017
 *  Author:      Matthew P. Grosvenor
 *  Description:
 *  Definition of the file read/write interface using the exactio abstract I/O
 *  interface.
 */

#ifndef EXACTIO_FILE_H_
#define EXACTIO_FILE_H_

#include "exactio_stream.h"

typedef struct  {
    char* filename;
    uint64_t read_buff_size;
    uint64_t write_buff_size;
    uint64_t on_mod;
} file_args_t;

NEW_IOSTREAM_DECLARE(file, file_args_t);

#endif /* EXACTIO_FILE_H_ */
