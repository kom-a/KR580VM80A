#pragma once
#include<string>
#include <tuple>
#include <map>
#define COMMAND std::map<std::string, int8_t>
#define COMMAND_PROTOTYPE std::tuple<std::string, std::string, std::string>
COMMAND_PROTOTYPE Prototypes[]
{
    {"add" , "reg", ""},
    {"add", "d8", ""},
    {"adc", "reg", ""},
    {"aci", "d8", ""},
    {"ana", "reg", ""},
    {"ani", "d8", ""},
    {"call", "d16", ""},
    {"cz", "d16", ""},
    {"�nz", "d16", ""},
    {"�p", "d16", ""},
    {"�m", "d16", ""},
    {"cc", "d16", ""},
    {"cnc", "d16", ""},
    {"cpe", "d16", ""},
    {"cpo", "d16", ""},
    {"cma", "", ""},
    {"cmc", "", "" },
    {"cmp" , "reg", ""},
    {"cpi", "d8", ""},
    {"daa", "", "" },
    {"dad", "reg", ""},
    {"dcr", "reg", "" },
    {"dcx", "reg", ""},
    {"di", "", "" },
    {"ei", "", "" },
    {"hlt", "", "" },
    {"in", "d8", ""},
    {"inr", "reg", "" },
    {"inx", "reg", ""},
    {"jmp", "d16", "" },
    {"jz", "d16", ""},
    {"jnz", "d16", ""},
    {"jp", "d16", ""},
    {"jm", "d16", ""},
    {"jc", "d16", ""},
    {"jnc", "d16", ""},
    {"jpe", "d16", ""},
    {"jpo", "d16", ""},
    {"lda", "d16", ""},
    {"ldax", "reg", ""},
    {"lhld", "d16", ""},
    {"lxi", "reg", "d16"},
    {"mov", "reg", "reg"},
    {"mvi", "reg", "d8"},
    {"nop", "", "" },
    {"ora", "reg", ""},
    {"ori", "d8", ""},
    {"out", "d8", ""},
    {"pchl", "", "" },
    {"pop", "reg", ""},
    {"push", "reg", ""},
    {"ral", "", "" },
    {"rar", "", "" },
    {"rlc", "", "" },
    {"rrc", "", "" },
    {"rim", "", "" },
    {"ret", "", "" },
    {"rz", "", "" },
    {"rnz", "", "" },
    {"rp", "", "" },
    {"rm", "", "" },
    {"rc", "", "" },
    {"rnc", "", "" },
    {"rpe", "", "" },
    {"rpo", "", "" },
    {"rst0", "", "" },
    {"rst1", "", "" },
    {"rst2", "", "" },
    {"rst3", "", "" },
    {"rst4", "", "" },
    {"rst5", "", "" },
    {"rst6", "", "" },
    {"rst7", "", "" },
    {"sim", "", "" },
    {"sphl", "", "" },
    {"shld", "d16", ""},
    {"sta", "d16", ""},
    {"stax", "reg", ""},
    {"stc", "", "" },
    {"sub", "reg", ""},
    {"sui", "d8", ""},
    {"sbb", "reg", ""},
    {"sbi", "d8", ""},
    {"xchg", "", "" },
    {"xthl", "", "" },
    {"xra", "reg", ""},
    {"xri", "d8", ""}
};

COMMAND ISA =
{
    {"add_a", 0x87 },
    {"add_b", 0x80},
    {"add_c", 0x81},
    {"add_d", 0x82},
    {"add_e", 0x83},
    {"add_h", 0x84},
    {"add_l", 0x85},
    {"add_m", 0x86},
    {"adi_d8", 0xc6},
    {"adc_a", 0x8f},
    {"adc_b", 0x88},
    {"adc_c", 0x89},
    {"adc_d", 0x8a},
    {"adc_e", 0x8b},
    {"adc_h", 0x8c},
    {"adc_l", 0x8d},
    {"adc_m", 0x8e},
    {"aci_d8", 0xce},
    {"ana_a", 0xa7},
    {"ana_b", 0xa0},
    {"ana_c", 0xa1},
    {"ana_d", 0xa2},
    {"ana_e", 0xa3},
    {"ana_h", 0xa4},
    {"ana_l", 0xa5},
    {"ana_m", 0xa6},
    {"ani_d8", 0xe6},
    {"call_d16", 0xcd},
    {"cz_d16", 0xcc},
    {"�nz_d16", 0xc4},
    {"�p_d16", 0xf4},
    {"�m_d16", 0xfc},
    {"cc_d16", 0xdc},
    {"cnc_d16", 0xd4},
    {"cpe_d16", 0xec},
    {"cpo_d16", 0xe4},
    {"cma", 0x2f},
    {"cmc", 0x3f},
    {"cmp_a", 0xbf},
    {"cmp_b", 0xb8},
    {"cmp_c", 0xb9},
    {"cmp_d", 0xba},
    {"cmp_e", 0xbb},
    {"cmp_h", 0xbc},
    {"cmp_l", 0xbd},
    {"cmp_m", 0xbe},
    {"cpi_d8", 0xfe},
    {"daa", 0x27},
    {"dad_b", 0x09},
    {"dad_d", 0x19},
    {"dad_h", 0x29},
    {"dad_sp", 0x39},
    {"dcr_a", 0x3d},
    {"dcr_b", 0x05},
    {"dcr_c", 0x0d},
    {"dcr_d", 0x15},
    {"dcr_e", 0x1d},
    {"dcr_h", 0x25},
    {"dcr_l", 0x2d},
    {"dcr_m", 0x35},
    {"dcx_b", 0x0b},
    {"dcx_d", 0x1b},
    {"dcx_h", 0x2b},
    {"dcx_sp", 0x3b},
    {"di", 0xf3},
    {"ei", 0xfb},
    {"hlt", 0x76},
    {"in_d8", 0xdb},
    {"inr_a", 0x3c},
    {"inr_b", 0x04},
    {"inr_c", 0x0c},
    {"inr_d", 0x14},
    {"inr_e", 0x1c},
    {"inr_h", 0x24},
    {"inr_l", 0x2c},
    {"inr_m", 0x34},
    {"inx_b", 0x03},
    {"inx_d", 0x13},
    {"inx_h", 0x23},
    {"inx_sp", 0x33},
    {"jmp_d16", 0xc3},
    {"jz_d16", 0xca},
    {"jnz_d16", 0xc2},
    {"jp_d16", 0xf2},
    {"jm_d16", 0xfa},
    {"jc_d16", 0xda},
    {"jnc_d16", 0xd2},
    {"jpe_d16", 0xea},
    {"jpo_d16", 0xe2},
    {"lda_d16", 0x3a},
    {"ldax_b", 0x0a},
    {"ldax_d", 0x1a},
    {"lhld_d16", 0x2a},
    {"lxi_b_d16", 0x01},
    {"lxi_d_d16", 0x11},
    {"lxi_h_d16", 0x21},
    {"lxi_sp_d16", 0x31},
    {"mov_a_a", 0x7f},
    {"mov_a_b", 0x78},
    {"mov_a_c", 0x79},
    {"mov_a_d", 0x7a},
    {"mov_a_e", 0x7b},
    {"mov_a_h", 0x7c},
    {"mov_a_l", 0x7d},
    {"mov_a_m", 0x7e},
    {"mov_b_a", 0x47},
    {"mov_b_b", 0x40},
    {"mov_b_c", 0x41},
    {"mov_b_d", 0x42},
    {"mov_b_e", 0x43},
    {"mov_b_h", 0x44},
    {"mov_b_l", 0x45},
    {"mov_b_m", 0x46},
    {"mov_c_a", 0x4f},
    {"mov_c_b", 0x48},
    {"mov_c_c", 0x49},
    {"mov_c_d", 0x4a},
    {"mov_c_e", 0x4b},
    {"mov_c_h", 0x4c},
    {"mov_c_l", 0x4d},
    {"mov_c_m", 0x4e},
    {"mov_d_a", 0x57},
    {"mov_d_b", 0x50},
    {"mov_d_c", 0x51},
    {"mov_d_d", 0x52},
    {"mov_d_e", 0x53},
    {"mov_d_h", 0x54},
    {"mov_d_l", 0x55},
    {"mov_d_m", 0x56},
    {"mov_e_a", 0x5f},
    {"mov_e_b", 0x58},
    {"mov_e_c", 0x59},
    {"mov_e_d", 0x5a},
    {"mov_e_e", 0x5b},
    {"mov_e_h", 0x5c},
    {"mov_e_l", 0x5d},
    {"mov_e_m", 0x5e},
    {"mov_h_a", 0x67},
    {"mov_h_b", 0x60},
    {"mov_h_c", 0x61},
    {"mov_h_d", 0x62},
    {"mov_h_e", 0x63},
    {"mov_h_h", 0x64},
    {"mov_h_l", 0x65},
    {"mov_h_m", 0x66},
    {"mov_l_a", 0x6f},
    {"mov_l_b", 0x68},
    {"mov_l_c", 0x69},
    {"mov_l_d", 0x6a},
    {"mov_l_e", 0x6b},
    {"mov_l_h", 0x6c},
    {"mov_l_l", 0x6d},
    {"mov_l_m", 0x6e},
    {"mov_m_a", 0x77},
    {"mov_m_b", 0x70},
    {"mov_m_c", 0x71},
    {"mov_m_d", 0x72},
    {"mov_m_e", 0x73},
    {"mov_m_h", 0x74},
    {"mov_m_l", 0x75},
    {"mvi_a_d8", 0x3e},
    {"mvi_b_d8", 0x06},
    {"mvi_c_d8", 0x0e},
    {"mvi_d_d8", 0x16},
    {"mvi_e_d8", 0x1e},
    {"mvi_h_d8", 0x26},
    {"mvi_l_d8", 0x2e},
    {"mvi_m_d8", 0x36},
    {"nop", 0x00},
    {"ora_a", 0xb7},
    {"ora_b", 0xb0},
    {"ora_c", 0xb1},
    {"ora_d", 0xb2},
    {"ora_e", 0xb3},
    {"ora_h", 0xb4},
    {"ora_l", 0xb5},
    {"ora_m", 0xb6},
    {"ori_d8", 0xf6},
    {"out_d8", 0xd3},
    {"pchl", 0xe9},
    {"pop_b", 0xc1},
    {"pop_d", 0xd1},
    {"pop_h", 0xe1},
    {"pop_psw", 0xf1},
    {"push_b", 0xc5},
    {"push_d", 0xd5},
    {"push_h", 0xe5},
    {"push_psw", 0xf5},
    {"ral", 0x17},
    {"rar", 0x1f},
    {"rlc", 0x07},
    {"rrc", 0x0f},
    {"rim", 0x20},
    {"ret", 0xc9},
    {"rz", 0xc8},
    {"rnz", 0xc0},
    {"rp", 0xf0},
    {"rm", 0xf8},
    {"rc", 0xd8},
    {"rnc", 0xd0},
    {"rpe", 0xe8},
    {"rpo", 0xe0},
    {"rst0", 0xc7},
    {"rst1", 0xcf},
    {"rst2", 0xd7},
    {"rst3", 0xdf},
    {"rst4", 0xe7},
    {"rst5", 0xef},
    {"rst6", 0xf7},
    {"rst7", 0xff},
    {"sim", 0x30},
    {"sphl", 0xf9},
    {"shld_d16", 0x22},
    {"sta_d16", 0x32},
    {"stax_b", 0x02},
    {"stax_d", 0x12},
    {"stc", 0x37},
    {"sub_a", 0x97},
    {"sub_b", 0x90},
    {"sub_c", 0x91},
    {"sub_d", 0x92},
    {"sub_e", 0x93},
    {"sub_h", 0x94},
    {"sub_l", 0x95},
    {"sub_m", 0x96},
    {"sui_d8", 0xd6},
    {"sbb_a", 0x9f},
    {"sbb_b", 0x98},
    {"sbb_c", 0x99},
    {"sbb_d", 0x9a},
    {"sbb_e", 0x9b},
    {"sbb_h", 0x9c},
    {"sbb_l", 0x9d},
    {"sbb_m", 0x9e},
    {"sbi_d8", 0xde},
    {"xchg", 0xeb},
    {"xthl", 0xe3},
    {"xra_a", 0xaf},
    {"xra_b", 0xa8},
    {"xra_c", 0xa9},
    {"xra_d", 0xaa},
    {"xra_e", 0xab},
    {"xra_h", 0xac},
    {"xra_l", 0xad},
    {"xra_m", 0xae},
    {"xri_d8", 0xee},
};

int8_t getCommandOpcode(std::string command)
{
    if (ISA.find(command) != ISA.end())
    {
        return ISA[command];
    }
    else
    {
        return -1;
    }
;}

bool protorypeExists(std::string command, std::string argument1, std::string argument2)
{
    for (auto comm : Prototypes)
    {
        std::string identifier = std::get<0>(comm);
        std::string arg1 = std::get<1>(comm);
        std::string arg2 = std::get<2>(comm);
        if (identifier == command && arg1 == argument1 && arg2 == argument2)
        {
            return true;
        }
    }
    return false;
}