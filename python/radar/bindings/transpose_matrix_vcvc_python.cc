/*
 * Copyright 2023 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(transpose_matrix_vcvc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(bad07b06ad8a08d63307f9e48b66b374)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/radar/transpose_matrix_vcvc.h>
// pydoc.h is automatically generated in the build directory
#include <transpose_matrix_vcvc_pydoc.h>

void bind_transpose_matrix_vcvc(py::module& m)
{

    using transpose_matrix_vcvc = ::gr::radar::transpose_matrix_vcvc;


    py::class_<transpose_matrix_vcvc,
               gr::tagged_stream_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<transpose_matrix_vcvc>>(
        m, "transpose_matrix_vcvc", D(transpose_matrix_vcvc))

        .def(py::init(&transpose_matrix_vcvc::make),
             py::arg("vlen_in"),
             py::arg("vlen_out"),
             py::arg("len_key") = "packet_len",
             D(transpose_matrix_vcvc, make))


        ;
}
