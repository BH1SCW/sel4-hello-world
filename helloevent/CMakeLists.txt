#
# Copyright 2018, Data61, CSIRO (ABN 41 687 119 230)
#
# SPDX-License-Identifier: BSD-2-Clause
#

cmake_minimum_required(VERSION 3.7.2)

project(helloevent C)
includeGlobalComponents()

DeclareCAmkESComponent(Emitter SOURCES components/Emitter/src/main.c)
DeclareCAmkESComponent(Consumer SOURCES components/Consumer/src/main.c)
# DeclareCAmkESComponent(Echo SOURCES components/Echo/src/echo.c)

DeclareCAmkESRootserver(helloevent.camkes)
# add_simulate_test([=[wait_for "After the client"]=])
