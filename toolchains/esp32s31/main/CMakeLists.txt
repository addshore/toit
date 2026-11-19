set(toit_main_sources "toit.c")
if(CONFIG_TOIT_USB_CONSOLE)
    list(APPEND toit_main_sources "usb_console.c")
endif()

idf_component_register(SRCS ${toit_main_sources}
                       INCLUDE_DIRS ""
                       PRIV_REQUIRES esp_hw_support esp_ringbuf esp_system)
if(CONFIG_TOIT_USB_CONSOLE)
    target_link_libraries(${COMPONENT_LIB} INTERFACE "-Wl,--wrap=_write_r")
endif()
