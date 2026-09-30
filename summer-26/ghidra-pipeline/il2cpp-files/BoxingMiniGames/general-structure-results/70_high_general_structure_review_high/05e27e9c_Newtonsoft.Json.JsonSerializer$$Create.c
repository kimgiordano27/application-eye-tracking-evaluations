/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 05e27e9c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializer__Create(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint unaff_w19;
  int unaff_w20;
  uint *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  int unaff_w27;
  undefined8 in_stack_00000008;
  undefined *puVar4;
  
  if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
     (uVar1 = unaff_w25 + 1, (int)uVar1 < (int)unaff_w22)) {
    if (unaff_w22 <= unaff_w25) {
LAB_05e27fcc:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (*(short *)(unaff_x23 + (long)(int)unaff_w25 * 2) == 0x30) {
      if (unaff_w22 <= uVar1) goto LAB_05e27fcc;
      if ((*(ushort *)(unaff_x23 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
        unaff_w25 = unaff_w25 + 2;
        unaff_w20 = 0x10;
        in_stack_00000008._4_4_ = unaff_w25;
      }
    }
  }
  uVar1 = FUN_05e28158(unaff_w20);
  if (in_stack_00000008._4_4_ == unaff_w25) {
    thunk_FUN_036aa1c8(PTR_DAT_07a0a110);
    uVar2 = thunk_FUN_0367fe20();
    puVar4 = PTR_DAT_07a15418;
  }
  else {
    if (((unaff_w19 >> 0xc & 1) == 0) || ((int)unaff_w22 <= (int)in_stack_00000008._4_4_)) {
      *unaff_x21 = in_stack_00000008._4_4_;
      if ((unaff_w19 >> 10 & 1) == 0) {
        if ((unaff_w19 >> 0xb & 1) == 0) {
          if (uVar1 != 0x80000000) {
            unaff_w27 = 1;
          }
          if ((((unaff_w19 >> 9 & 1) != 0) || (unaff_w20 != 10)) || (unaff_w27 != 0)) {
            return uVar1;
          }
          thunk_FUN_036aa1c8(PTR_DAT_079fc228);
          uVar2 = thunk_FUN_0367fe20();
          puVar4 = PTR_DAT_07a11700;
        }
        else {
          if (uVar1 < 0x10000) {
            return uVar1;
          }
          thunk_FUN_036aa1c8(PTR_DAT_079fc228);
          uVar2 = thunk_FUN_0367fe20();
          puVar4 = PTR_DAT_07a116e0;
        }
      }
      else {
        if (uVar1 < 0x100) {
          return uVar1;
        }
        thunk_FUN_036aa1c8(PTR_DAT_079fc228);
        uVar2 = thunk_FUN_0367fe20();
        puVar4 = PTR_DAT_07a116d0;
      }
      uVar3 = thunk_FUN_036aa1c8(puVar4);
      FUN_05e272f8(uVar2,uVar3);
      goto LAB_05e28140;
    }
    thunk_FUN_036aa1c8(PTR_DAT_07a0a110);
    uVar2 = thunk_FUN_0367fe20();
    puVar4 = PTR_DAT_07a15038;
  }
  uVar3 = thunk_FUN_036aa1c8(puVar4);
  FUN_05dffe0c(uVar2,uVar3,0);
LAB_05e28140:
  uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a15440);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar2,uVar3);
}


