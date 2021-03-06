/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

#pragma pack(push,1)

/* Secondary System Descroption Table "SSDT" */
typedef struct acpi_ssdt {
    acpi_header_t header;
    uint8_t       definition_block[];
} acpi_ssdt_t;

#pragma pack(pop)
