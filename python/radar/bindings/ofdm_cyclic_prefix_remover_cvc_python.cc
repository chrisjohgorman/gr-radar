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
/* BINDTOOL_HEADER_FILE(ofdm_cyclic_prefix_remover_cvc.h) */
/* BINDTOOL_HEADER_FILE_HASH(6b95f2e5af199e3eec6e727d65a8a504)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/radar/ofdm_cyclic_prefix_remover_cvc.h>
// pydoc.h is automatically generated in the build directory
#include <ofdm_cyclic_prefix_remover_cvc_pydoc.h>

void bind_ofdm_cyclic_prefix_remover_cvc(py::module& m)
{

    using ofdm_cyclic_prefix_remover_cvc = ::gr::radar::ofdm_cyclic_prefix_remover_cvc;


    py::class_<ofdm_cyclic_prefix_remover_cvc,
               gr::tagged_stream_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<ofdm_cyclic_prefix_remover_cvc>>(
        m, "ofdm_cyclic_prefix_remover_cvc", D(ofdm_cyclic_prefix_remover_cvc))

        .def(py::init(&ofdm_cyclic_prefix_remover_cvc::make),
             py::arg("fft_len"),
             py::arg("cp_len"),
             py::arg("len_key") = "packet_len",
             D(ofdm_cyclic_prefix_remover_cvc, make))


        ;
}
