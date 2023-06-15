#pragma once
#include<string>
#include <tuple>
#include <map>
#define COMMAND std::map<std::string, int8_t>
#define COMMAND_PROTOTYPE std::tuple<std::string, std::string, std::string>

const std::map<std::string, int> BuilInLabels
{
    {"DISPLAY", 0x01C8},
    {"DECODE_DISPLAY", 0x01E9},
    {"MELODY_1", 0x05B0},
    {"MELODY_2", 0x05BA},
    {"ORGAN", 0x04FC},
    {"STOPWATCH", 0x0481},
    {"FIX_SLEEP", 0x0429},
    {"SLEEP", 0x0430},
    {"MULT", 0x04E1},
    {"DETECT_KEYS", 0x0429},
    {"SCAN_KEYBOARD", 0x014B},
};

const COMMAND_PROTOTYPE Prototypes[]
{
    {"ADD" , "reg", ""},
    {"ADI", "d8", ""},
    {"ADC", "reg", ""},
    {"ACI", "d8", ""},
    {"ANA", "reg", ""},
    {"ANI", "d8", ""},
    {"CALL", "d16", ""},
    {"CZ", "d16", ""},
    {"�NZ", "d16", ""},
    {"�P", "d16", ""},
    {"�M", "d16", ""},
    {"CC", "d16", ""},
    {"CNC", "d16", ""},
    {"CPE", "d16", ""},
    {"CPO", "d16", ""},
    {"CMA", "", ""},
    {"CMC", "", "" },
    {"CMP" , "reg", ""},
    {"CPI", "d8", ""},
    {"DAA", "", "" },
    {"DAD", "reg", ""},
    {"DCR", "reg", "" },
    {"DCX", "reg", ""},
    {"DI", "", "" },
    {"EI", "", "" },
    {"HLT", "", "" },
    {"IN", "d8", ""},
    {"INR", "reg", "" },
    {"INX", "reg", ""},
    {"JMP", "d16", "" },
    {"JZ", "d16", ""},
    {"JNZ", "d16", ""},
    {"JP", "d16", ""},
    {"JM", "d16", ""},
    {"JC", "d16", ""},
    {"JNC", "d16", ""},
    {"JPE", "d16", ""},
    {"JPO", "d16", ""},
    {"LDA", "d16", ""},
    {"LDAX", "reg", ""},
    {"LHLD", "d16", ""},
    {"LXI", "reg", "d16"},
    {"MOV", "reg", "reg"},
    {"MVI", "reg", "d8"},
    {"NOP", "", "" },
    {"ORA", "reg", ""},
    {"ORI", "d8", ""},
    {"OUT", "d8", ""},
    {"PCHL", "", "" },
    {"POP", "reg", ""},
    {"PUSH", "reg", ""},
    {"RAL", "", "" },
    {"RAR", "", "" },
    {"RLC", "", "" },
    {"RRC", "", "" },
    {"RIM", "", "" },
    {"RET", "", "" },
    {"RZ", "", "" },
    {"RNZ", "", "" },
    {"RP", "", "" },
    {"RM", "", "" },
    {"RC", "", "" },
    {"RNC", "", "" },
    {"RPE", "", "" },
    {"RPO", "", "" },
    {"RST0", "", "" },
    {"RST1", "", "" },
    {"RST2", "", "" },
    {"RST3", "", "" },
    {"RST4", "", "" },
    {"RST5", "", "" },
    {"RST6", "", "" },
    {"RST7", "", "" },
    {"SIM", "", "" },
    {"SPHL", "", "" },
    {"SHLD", "d16", ""},
    {"STA", "d16", ""},
    {"STAX", "reg", ""},
    {"STC", "", "" },
    {"SUB", "reg", ""},
    {"SUI", "d8", ""},
    {"SBB", "reg", ""},
    {"SBI", "d8", ""},
    {"XCHG", "", "" },
    {"XTHL", "", "" },
    {"XRA", "reg", ""},
    {"XRI", "d8", ""}
};

const COMMAND ISA =
{
    {"ADD_A", 0x87 },
    {"ADD_B", 0x80},
    {"ADD_C", 0x81},
    {"ADD_D", 0x82},
    {"ADD_E", 0x83},
    {"ADD_H", 0x84},
    {"ADD_L", 0x85},
    {"ADD_M", 0x86},
    {"ADI_d8", 0xC6},
    {"ADC_A", 0x8F},
    {"ADC_B", 0x88},
    {"ADC_C", 0x89},
    {"ADC_D", 0x8A},
    {"ADC_E", 0x8B},
    {"ADC_H", 0x8C},
    {"ADC_L", 0x8D},
    {"ADC_M", 0x8E},
    {"ACI_d8", 0xCE},
    {"ANA_A", 0xA7},
    {"ANA_B", 0xA0},
    {"ANA_C", 0xA1},
    {"ANA_D", 0xA2},
    {"ANA_E", 0xA3},
    {"ANA_H", 0xA4},
    {"ANA_L", 0xA5},
    {"ANA_M", 0xA6},
    {"ANI_d8", 0xE6},
    {"CALL_d16", 0xCD},
    {"CZ_d16", 0xCC},
    {"�NZ_d16", 0xC4},
    {"�P_d16", 0xF4},
    {"�M_d16", 0xFC},
    {"CC_d16", 0xDC},
    {"CNC_d16", 0xD4},
    {"CPE_d16", 0xEC},
    {"CPO_d16", 0xE4},
    {"CMA", 0x2F},
    {"CMC", 0x3F},
    {"CMP_A", 0xBF},
    {"CMP_B", 0xB8},
    {"CMP_C", 0xB9},
    {"CMP_D", 0xBA},
    {"CMP_E", 0xBB},
    {"CMP_H", 0xBC},
    {"CMP_L", 0xBD},
    {"CMP_M", 0xBE},
    {"CPI_d8", 0xFE},
    {"DAA", 0x27},
    {"DAD_B", 0x09},
    {"DAD_D", 0x19},
    {"DAD_H", 0x29},
    {"DAD_SP", 0x39},
    {"DCR_A", 0x3D},
    {"DCR_B", 0x05},
    {"DCR_C", 0x0D},
    {"DCR_D", 0x15},
    {"DCR_E", 0x1D},
    {"DCR_H", 0x25},
    {"DCR_L", 0x2D},
    {"DCR_M", 0x35},
    {"DCX_B", 0x0B},
    {"DCX_D", 0x1B},
    {"DCX_H", 0x2B},
    {"DCX_SP", 0x3B},
    {"DI", 0xF3},
    {"EI", 0xFB},
    {"HLT", 0x76},
    {"IN_d8", 0xDB},
    {"INR_A", 0x3C},
    {"INR_B", 0x04},
    {"INR_C", 0x0C},
    {"INR_D", 0x14},
    {"INR_E", 0x1C},
    {"INR_H", 0x24},
    {"INR_L", 0x2C},
    {"INR_M", 0x34},
    {"INX_B", 0x03},
    {"INX_D", 0x13},
    {"INX_H", 0x23},
    {"INX_SP", 0x33},
    {"JMP_d16", 0xC3},
    {"JZ_d16", 0xCA},
    {"JNZ_d16", 0xC2},
    {"JP_d16", 0xF2},
    {"JM_d16", 0xFA},
    {"JC_d16", 0xDA},
    {"JNC_d16", 0xD2},
    {"JPE_d16", 0xEA},
    {"JPO_d16", 0xE2},
    {"LDA_d16", 0x3A},
    {"LDAX_B", 0x0A},
    {"LDAX_D", 0x1A},
    {"LHLD_d16", 0x2A},
    {"LXI_B_d16", 0x01},
    {"LXI_D_d16", 0x11},
    {"LXI_H_d16", 0x21},
    {"LXI_SP_d16", 0x31},
    {"MOV_A_A", 0x7F},
    {"MOV_A_B", 0x78},
    {"MOV_A_C", 0x79},
    {"MOV_A_D", 0x7A},
    {"MOV_A_E", 0x7B},
    {"MOV_A_H", 0x7C},
    {"MOV_A_L", 0x7D},
    {"MOV_A_M", 0x7E},
    {"MOV_B_A", 0x47},
    {"MOV_B_B", 0x40},
    {"MOV_B_C", 0x41},
    {"MOV_B_D", 0x42},
    {"MOV_B_E", 0x43},
    {"MOV_B_H", 0x44},
    {"MOV_B_L", 0x45},
    {"MOV_B_M", 0x46},
    {"MOV_C_A", 0x4F},
    {"MOV_C_B", 0x48},
    {"MOV_C_C", 0x49},
    {"MOV_C_D", 0x4A},
    {"MOV_C_E", 0x4B},
    {"MOV_C_H", 0x4C},
    {"MOV_C_L", 0x4D},
    {"MOV_C_M", 0x4E},
    {"MOV_D_A", 0x57},
    {"MOV_D_B", 0x50},
    {"MOV_D_C", 0x51},
    {"MOV_D_D", 0x52},
    {"MOV_D_E", 0x53},
    {"MOV_D_H", 0x54},
    {"MOV_D_L", 0x55},
    {"MOV_D_M", 0x56},
    {"MOV_E_A", 0x5F},
    {"MOV_E_B", 0x58},
    {"MOV_E_C", 0x59},
    {"MOV_E_D", 0x5A},
    {"MOV_E_E", 0x5B},
    {"MOV_E_H", 0x5C},
    {"MOV_E_L", 0x5D},
    {"MOV_E_M", 0x5E},
    {"MOV_H_A", 0x67},
    {"MOV_H_B", 0x60},
    {"MOV_H_C", 0x61},
    {"MOV_H_D", 0x62},
    {"MOV_H_E", 0x63},
    {"MOV_H_H", 0x64},
    {"MOV_H_L", 0x65},
    {"MOV_H_M", 0x66},
    {"MOV_L_A", 0x6F},
    {"MOV_L_B", 0x68},
    {"MOV_L_C", 0x69},
    {"MOV_L_D", 0x6A},
    {"MOV_L_E", 0x6B},
    {"MOV_L_H", 0x6C},
    {"MOV_L_L", 0x6D},
    {"MOV_L_M", 0x6E},
    {"MOV_M_A", 0x77},
    {"MOV_M_B", 0x70},
    {"MOV_M_C", 0x71},
    {"MOV_M_D", 0x72},
    {"MOV_M_E", 0x73},
    {"MOV_M_H", 0x74},
    {"MOV_M_L", 0x75},
    {"MVI_A_d8", 0x3E},
    {"MVI_B_d8", 0x06},
    {"MVI_C_d8", 0x0E},
    {"MVI_D_d8", 0x16},
    {"MVI_E_d8", 0x1E},
    {"MVI_H_d8", 0x26},
    {"MVI_L_d8", 0x2E},
    {"MVI_M_d8", 0x36},
    {"NOP", 0x00},
    {"ORA_A", 0xB7},
    {"ORA_B", 0xB0},
    {"ORA_C", 0xB1},
    {"ORA_D", 0xB2},
    {"ORA_E", 0xB3},
    {"ORA_H", 0xB4},
    {"ORA_L", 0xB5},
    {"ORA_M", 0xB6},
    {"ORI_d8", 0xF6},
    {"OUT_d8", 0xD3},
    {"PCHL", 0xE9},
    {"POP_B", 0xC1},
    {"POP_D", 0xD1},
    {"POP_H", 0xE1},
    {"POP_PSW", 0xF1},
    {"PUSH_B", 0xC5},
    {"PUSH_D", 0xD5},
    {"PUSH_H", 0xE5},
    {"PUSH_PSW", 0xF5},
    {"RAL", 0x17},
    {"RAR", 0x1F},
    {"RLC", 0x07},
    {"RRC", 0x0F},
    {"RIM", 0x20},
    {"RET", 0xC9},
    {"RZ", 0xC8},
    {"RNZ", 0xC0},
    {"RP", 0xF0},
    {"RM", 0xF8},
    {"RC", 0xD8},
    {"RNC", 0xD0},
    {"RPE", 0xE8},
    {"RPO", 0xE0},
    {"RST0", 0xC7},
    {"RST1", 0xCF},
    {"RST2", 0xD7},
    {"RST3", 0xDF},
    {"RST4", 0xE7},
    {"RST5", 0xEF},
    {"RST6", 0xF7},
    {"RST7", 0xFF},
    {"SIM", 0x30},
    {"SPHL", 0xF9},
    {"SHLD_d16", 0x22},
    {"STA_d16", 0x32},
    {"STAX_B", 0x02},
    {"STAX_D", 0x12},
    {"STC", 0x37},
    {"SUB_A", 0x97},
    {"SUB_B", 0x90},
    {"SUB_C", 0x91},
    {"SUB_D", 0x92},
    {"SUB_E", 0x93},
    {"SUB_H", 0x94},
    {"SUB_L", 0x95},
    {"SUB_M", 0x96},
    {"SUI_d8", 0xD6},
    {"SBB_A", 0x9F},
    {"SBB_B", 0x98},
    {"SBB_C", 0x99},
    {"SBB_D", 0x9A},
    {"SBB_E", 0x9B},
    {"SBB_H", 0x9C},
    {"SBB_L", 0x9D},
    {"SBB_M", 0x9E},
    {"SBI_d8", 0xDE},
    {"XCHG", 0xEB},
    {"XTHL", 0xE3},
    {"XRA_A", 0xAF},
    {"XRA_B", 0xA8},
    {"XRA_C", 0xA9},
    {"XRA_D", 0xAA},
    {"XRA_E", 0xAB},
    {"XRA_H", 0xAC},
    {"XRA_L", 0xAD},
    {"XRA_M", 0xAE},
    {"XRI_d8", 0xEE},
};



const COMMAND LabelArgCommands =
{
    {"CALL_a16", 0xCD},
    {"CZ_a16", 0xCC},
    {"�NZ_a16", 0xC4},
    {"�P_a16", 0xF4},
    {"�M_a16", 0xFC},
    {"CC_a16", 0xDC},
    {"CNC_a16", 0xD4},
    {"CPE_a16", 0xEC},
    {"CPO_a16", 0xE4},
    {"JMP_a16", 0xC3},
    {"JZ_a16", 0xCA},
    {"JNZ_a16", 0xC2},
    {"JP_a16", 0xF2},
    {"JM_a16", 0xFA},
    {"JC_a16", 0xDA},
    {"JNC_a16", 0xD2},
    {"JPE_a16", 0xEA},
    {"JPO_a16", 0xE2},
};

static bool isLabelArgCommand(const std::string& command)
{
    if (LabelArgCommands.find(command) != LabelArgCommands.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}

static int8_t getCommandOpcode(const std::string& command)
{
    if (ISA.find(command) != ISA.end())
    {
        return ISA.at(command);
    }
    else
    {
        return -1;
    }
}

static bool prototypeExists(const std::string& command, const std::string& argument1, const std::string& argument2)
{
    for (auto comm : Prototypes)
    {
        std::string identifier = std::get<0>(comm);
        std::string arg1 = std::get<1>(comm);
        std::string arg2 = std::get<2>(comm);
        if (identifier == command && arg1 == (argument1 == "label"? "d16" : argument1) && arg2 == argument2)
        {
            return true;
        }
    }
    return false;
}