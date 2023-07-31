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
/* BINDTOOL_HEADER_FILE(static_target_simulator_cc.h) */
/* BINDTOOL_HEADER_FILE_HASH(f35e6617e29a8e533370a13e678d434e)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/radar/static_target_simulator_cc.h>
// pydoc.h is automatically generated in the build directory
#include <static_target_simulator_cc_pydoc.h>

void bind_static_target_simulator_cc(py::module& m)
{

    using static_target_simulator_cc = ::gr::radar::static_target_simulator_cc;


    py::class_<static_target_simulator_cc,
               gr::tagged_stream_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<static_target_simulator_cc>>(
        m, "static_target_simulator_cc", D(static_target_simulator_cc))

        .def(py::init(&static_target_simulator_cc::make),
             py::arg("range"),
             py::arg("velocity"),
             py::arg("rcs"),
             py::arg("azimuth"),
             py::arg("position_rx"),
             py::arg("samp_rate"),
             py::arg("center_freq"),
             py::arg("self_coupling_db"),
             py::arg("rndm_phaseshift") = true,
             py::arg("self_coupling") = true,
             py::arg("len_key") = "packet_len",
             D(static_target_simulator_cc, make))


        .def("setup_targets",
             &static_target_simulator_cc::setup_targets,
             py::arg("range"),
             py::arg("velocity"),
             py::arg("rcs"),
             py::arg("azimuth"),
             py::arg("position_rx"),
             py::arg("samp_rate"),
             py::arg("center_freq"),
             py::arg("self_coupling_db"),
             py::arg("rndm_phaseshift"),
             py::arg("self_coupling"),
             D(static_target_simulator_cc, setup_targets))

        ;
}
