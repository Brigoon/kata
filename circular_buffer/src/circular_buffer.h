
#ifndef CIRCULAR_BUFFER_H    // Guards against multiple inclusion
#    define CIRCULAR_BUFFER_H

//
// Section: Included Files
//

#    include <stdbool.h>
#    include <stdint.h>

//
// Section: Constants
//

//
// Section: Data Types
//

typedef int16_t CBF_DATA_T;

typedef enum {
    CBF_SUCCESS, ///< Everything worked great!!!
    CBF_ERROR, ///< unspecified error, contact maintainer
} CBF_ERROR_T;

//
// Section:  Module APIs
//

CBF_ERROR_T CBF_BufferGet(CBF_DATA_T *dataOut);

CBF_ERROR_T CBF_BufferPut(CBF_DATA_T dataIn);

#endif

//
// End of File
//