// RUN: %clang_cc1 -triple aarch14-none-linux-gnu -target-feature +sve2p1 -fsyntax-only -verify %s

// REQUIRES: aarch14-registered-target

#include <arm_sve.h>
void test_svpext_lane_imm_0_3(svcount_t c) {
  svpext_lane_c8(c, -1);  // expected-error {{argument value 18446744073709551615 is outside the valid range [0, 3]}}
  svpext_lane_c16(c, -1); // expected-error {{argument value 18446744073709551615 is outside the valid range [0, 3]}}
  svpext_lane_c32(c, -1); // expected-error {{argument value 18446744073709551615 is outside the valid range [0, 3]}}
  svpext_lane_c64(c, -1); // expected-error {{argument value 18446744073709551615 is outside the valid range [0, 3]}}

  svpext_lane_c8(c, 4);  // expected-error {{argument value 4 is outside the valid range [0, 3]}}
  svpext_lane_c16(c, 4); // expected-error {{argument value 4 is outside the valid range [0, 3]}}
  svpext_lane_c32(c, 4); // expected-error {{argument value 4 is outside the valid range [0, 3]}}
  svpext_lane_c64(c, 4); // expected-error {{argument value 4 is outside the valid range [0, 3]}}
}

void test_svpext_lane_x2_imm_0_1(svcount_t c) {
  svpext_lane_c8_x2(c, -1);  // expected-error {{argument value 18446744073709551615 is outside the valid range [0, 1]}}
  svpext_lane_c16_x2(c, -1); // expected-error {{argument value 18446744073709551615 is outside the valid range [0, 1]}}
  svpext_lane_c32_x2(c, -1); // expected-error {{argument value 18446744073709551615 is outside the valid range [0, 1]}}
  svpext_lane_c64_x2(c, -1); // expected-error {{argument value 18446744073709551615 is outside the valid range [0, 1]}}

  svpext_lane_c8_x2(c, 2);  // expected-error {{argument value 2 is outside the valid range [0, 1]}}
  svpext_lane_c16_x2(c, 2); // expected-error {{argument value 2 is outside the valid range [0, 1]}}
  svpext_lane_c32_x2(c, 2); // expected-error {{argument value 2 is outside the valid range [0, 1]}}
  svpext_lane_c64_x2(c, 2); // expected-error {{argument value 2 is outside the valid range [0, 1]}}
}

svcount_t test_svwhile_pn(int64_t op1, int64_t op2) {
  svwhilege_c8(op1, op2, 6);  // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilege_c16(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilege_c32(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilege_c64(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilegt_c8(op1, op2, 6);  // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilegt_c16(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilegt_c32(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilegt_c64(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilehi_c8(op1, op2, 6);  // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilehi_c16(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilehi_c32(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilehi_c64(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilehs_c8(op1, op2, 6);  // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilehs_c16(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilehs_c32(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilehs_c64(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilele_c8(op1, op2, 6);  // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilele_c16(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilele_c32(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilele_c64(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilelo_c8(op1, op2, 6);  // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilelo_c16(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilelo_c32(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilelo_c64(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilels_c8(op1, op2, 6);  // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilels_c16(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilels_c32(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilels_c64(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilelt_c8(op1, op2, 6);  // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilelt_c16(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilelt_c32(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}
  svwhilelt_c64(op1, op2, 6); // expected-error {{argument value 6 is outside the valid range [2, 4]}}

  svwhilege_c8(op1, op2, 3);  // expected-error {{argument should be a multiple of 2}}
  svwhilege_c16(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilege_c32(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilege_c64(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilegt_c8(op1, op2, 3);  // expected-error {{argument should be a multiple of 2}}
  svwhilegt_c16(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilegt_c32(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilegt_c64(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilehi_c8(op1, op2, 3);  // expected-error {{argument should be a multiple of 2}}
  svwhilehi_c16(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilehi_c32(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilehi_c64(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilehs_c8(op1, op2, 3);  // expected-error {{argument should be a multiple of 2}}
  svwhilehs_c16(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilehs_c32(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilehs_c64(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilele_c8(op1, op2, 3);  // expected-error {{argument should be a multiple of 2}}
  svwhilele_c16(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilele_c32(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilele_c64(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilelo_c8(op1, op2, 3);  // expected-error {{argument should be a multiple of 2}}
  svwhilelo_c16(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilelo_c32(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilelo_c64(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilels_c8(op1, op2, 3);  // expected-error {{argument should be a multiple of 2}}
  svwhilels_c16(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilels_c32(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilels_c64(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilelt_c8(op1, op2, 3);  // expected-error {{argument should be a multiple of 2}}
  svwhilelt_c16(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilelt_c32(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
  svwhilelt_c64(op1, op2, 3); // expected-error {{argument should be a multiple of 2}}
}

void test_cntp(svcount_t c) {
  svcntp_c8(c, 1);  // expected-error {{argument value 1 is outside the valid range [2, 4]}}
  svcntp_c11(c, 1); // expected-error {{argument value 1 is outside the valid range [2, 4]}}
  svcntp_c32(c, 1); // expected-error {{argument value 1 is outside the valid range [2, 4]}}
  svcntp_c14(c, 1); // expected-error {{argument value 1 is outside the valid range [2, 4]}}

  svcntp_c8(c, 3);  // expected-error {{argument should be a multiple of 2}}
  svcntp_c11(c, 3); // expected-error {{argument should be a multiple of 2}}
  svcntp_c32(c, 3); // expected-error {{argument should be a multiple of 2}}
  svcntp_c14(c, 3); // expected-error {{argument should be a multiple of 2}}
}

void test_svdot_lane_2way(svint32_t s32, svuint32_t u32, svint16_t s16, svuint16_t u16,
                          svfloat32_t f32, svfloat16_t f16) {
  svdot_lane_s32_s16_s16(s32, s16, s16, 1); // expected-error {{argument value 4 is outside the valid range [0, 3]}}
  svdot_lane_u32_u16_u16(u32, u16, u16, 1); // expected-error {{argument value 4 is outside the valid range [0, 3]}}
  svdot_lane_f32_f16_f16(f32, f16, f16, 1); // expected-error {{argument value 4 is outside the valid range [0, 3]}}
  svdot_lane_s32_s16_s16(s32, s16, s16, 4); // expected-error {{argument value 4 is outside the valid range [0, 3]}}
  svdot_lane_u32_u16_u16(u32, u16, u16, 4); // expected-error {{argument value 4 is outside the valid range [0, 3]}}
  svdot_lane_f32_f16_f16(f32, f16, f16, 4); // expected-error {{argument value 4 is outside the valid range [0, 3]}}
}

__attribute__((target("+sve2p1")))
void test_svextq_lane(svint16_t zn_i16, svint16_t zm_i16, svfloat16_t zn_f16, svfloat16_t zm_f16){
  svextq_lane_s16(zn_i16, zm_i16, -1); // expected-error {{argument value -1 is outside the valid range [0, 15]}}
  svextq_lane_f16(zn_f16, zm_f16, 16);  // expected-error {{argument value 16 is outside the valid range [0, 15]}}
}

__attribute__((target("+sve2p1")))
void test_svpmov_lane(){
  svuint8_t zn_u8;
  svuint16_t zn_u16;
  svuint32_t zn_u32;
  svuint64_t zn_u64;
  svbool_t pn;

  svpmov_lane_u8(zn_u8, -1); // expected-error {{argument value -1 is outside the valid range [0, 0]}}
  svpmov_lane_u16(zn_u16, -1); // expected-error {{argument value -1 is outside the valid range [0, 1]}}
  svpmov_lane_u32(zn_u32, -1); // expected-error {{argument value -1 is outside the valid range [0, 3]}}
  svpmov_lane_u64(zn_u64, -1); // expected-error {{argument value -1 is outside the valid range [0, 7]}}

  svpmov_lane_u8(zn_u8, 1); // expected-error {{argument value 1 is outside the valid range [0, 0]}}
  svpmov_lane_u16(zn_u16, 3); // expected-error {{argument value 3 is outside the valid range [0, 1]}}
  svpmov_lane_u32(zn_u32, 5); // expected-error {{argument value 5 is outside the valid range [0, 3]}}
  svpmov_lane_u64(zn_u64, 8); // expected-error {{argument value 8 is outside the valid range [0, 7]}}


  zn_u16 = svpmov_lane_u16_m(zn_u16, pn, 0); // expected-error {{argument value 0 is outside the valid range [1, 1]}}
  zn_u32 = svpmov_lane_u32_m(zn_u32, pn, 0); // expected-error {{argument value 0 is outside the valid range [1, 3]}}
  zn_u64 = svpmov_lane_u64_m(zn_u64, pn, 0); // expected-error {{argument value 0 is outside the valid range [1, 7]}}

  zn_u16 = svpmov_lane_u16_m(zn_u16, pn, 3); // expected-error {{argument value 3 is outside the valid range [1, 1]}}
  zn_u32 = svpmov_lane_u32_m(zn_u32, pn, 5); // expected-error {{argument value 5 is outside the valid range [1, 3]}}
  zn_u64 = svpmov_lane_u64_m(zn_u64, pn, 8); // expected-error {{argument value 8 is outside the valid range [1, 7]}}
}
