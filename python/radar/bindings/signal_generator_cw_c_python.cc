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
/* BINDTOOL_HEADER_FILE(signal_generator_cw_c.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(619c99987d30d35f7bc8050c85cb5f3c)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <radar/signal_generator_cw_c.h>
// pydoc.h is automatically generated in the build directory
#include <signal_generator_cw_c_pydoc.h>

void bind_signal_generator_cw_c(py::module& m)
{

    using signal_generator_cw_c = gr::radar::signal_generator_cw_c;


    py::class_<signal_generator_cw_c,
               gr::block,
               gr::basic_block,
               std::shared_ptr<signal_generator_cw_c>>(
        m, "signal_generator_cw_c", D(signal_generator_cw_c))

        .def(py::init(&signal_generator_cw_c::make),
             py::arg("packet_len"),
             py::arg("samp_rate"),
             py::arg("frequency"),
             py::arg("amplitude"),
             py::arg("len_key") = "packet_len",
             D(signal_generator_cw_c, make))


        ;
}
