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
/* BINDTOOL_HEADER_FILE(split_fsk_cc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(e7005f2dc4013dde40e98107203e74ef)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/radar/split_fsk_cc.h>
// pydoc.h is automatically generated in the build directory
#include <split_fsk_cc_pydoc.h>

void bind_split_fsk_cc(py::module& m)
{

    using split_fsk_cc = ::gr::radar::split_fsk_cc;


    py::class_<split_fsk_cc,
               gr::tagged_stream_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<split_fsk_cc>>(m, "split_fsk_cc", D(split_fsk_cc))

        .def(py::init(&split_fsk_cc::make),
             py::arg("samp_per_freq"),
             py::arg("samp_discard"),
             py::arg("len_key") = "packet_len",
             D(split_fsk_cc, make))


        ;
}
