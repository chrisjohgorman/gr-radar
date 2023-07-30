/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <pybind11/pybind11.h>

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <numpy/arrayobject.h>

namespace py = pybind11;

// Headers for binding functions
/**************************************/
// The following comment block is used for
// gr_modtool to insert function prototypes
// Please do not delete
/**************************************/
// BINDING_FUNCTION_PROTOTYPES(
    void crop_matrix_vcvc(py::module m);
    void estimator_cw(py::module m);
    void estimator_fmcw(py::module m);
    void estimator_fsk(py::module m);
    void estimator_ofdm(py::module m);
    void estimator_rcs(py::module m);
    void estimator_sync_pulse_c(py::module m);
    void find_max_peak_c(py::module m);
    void msg_gate(py::module m);
    void msg_manipulator(py::module m);
    void ofdm_cyclic_prefix_remover_cvc(py::module m);
    void ofdm_divide_vcvc(py::module m);
    void os_cfar_2d_vc(py::module m);
    void os_cfar_c(py::module m);
    void print_results(py::module m);
    void qtgui_scatter_plot(py::module m);
    void qtgui_spectrogram_plot(py::module m);
    void qtgui_time_plot(py::module m);
    void signal_generator_cw_c(py::module m);
    void signal_generator_fmcw_c(py::module m);
    void signal_generator_fsk_c(py::module m);
    void signal_generator_sync_pulse_c(py::module m);
    void split_cc(py::module m);
    void split_fsk_cc(py::module m);
    void static_target_simulator_cc(py::module m);
    void tracking_singletarget(py::module m);
    void transpose_matrix_vcvc(py::module m);
    void trigger_command(py::module m);
    void ts_fft_cc(py::module m);
    void usrp_echotimer_cc(py::module m);
// ) END BINDING_FUNCTION_PROTOTYPES


// We need this hack because import_array() returns NULL
// for newer Python versions.
// This function is also necessary because it ensures access to the C API
// and removes a warning.
void* init_numpy()
{
    import_array();
    return NULL;
}

PYBIND11_MODULE(radar_python, m)
{
    // Initialize the numpy C API
    // (otherwise we will see segmentation faults)
    init_numpy();

    // Allow access to base block methods
    py::module::import("gnuradio.gr");

    /**************************************/
    // The following comment block is used for
    // gr_modtool to insert binding function calls
    // Please do not delete
    /**************************************/
    // BINDING_FUNCTION_CALLS(
	crop_matrix_vcvc(m);
	estimator_cw(m);
	estimator_fmcw(m);
	estimator_fsk(m);
	estimator_ofdm(m);
	estimator_rcs(m);
	estimator_sync_pulse_c(m);
	find_max_peak_c(m);
	msg_gate(m);
	msg_manipulator(m);
	ofdm_cyclic_prefix_remover_cvc(m);
	ofdm_divide_vcvc(m);
	os_cfar_2d_vc(m);
	os_cfar_c(m);
	print_results(m);
	qtgui_scatter_plot(m);
	qtgui_spectrogram_plot(m);
	qtgui_time_plot(m);
	signal_generator_cw_c(m);
	signal_generator_fmcw_c(m);
	signal_generator_fsk_c(m);
	signal_generator_sync_pulse_c(m);
	split_cc(m);
	split_fsk_cc(m);
	static_target_simulator_cc(m);
	tracking_singletarget(m);
	transpose_matrix_vcvc(m);
	trigger_command(m);
	ts_fft_cc(m);
	usrp_echotimer_cc(m);
    // ) END BINDING_FUNCTION_CALLS
}
