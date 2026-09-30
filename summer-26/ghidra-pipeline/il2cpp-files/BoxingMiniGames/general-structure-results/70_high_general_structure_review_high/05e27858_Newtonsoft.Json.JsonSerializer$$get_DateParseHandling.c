/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateParseHandling
ENTRY_POINT: 05e27858
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05e27934) */
/* WARNING: Removing unreachable block (ram,0x05e27938) */
/* WARNING: Removing unreachable block (ram,0x05e27940) */
/* WARNING: Removing unreachable block (ram,0x05e2794c) */
/* WARNING: Removing unreachable block (ram,0x05e27958) */
/* WARNING: Removing unreachable block (ram,0x05e2795c) */
/* WARNING: Removing unreachable block (ram,0x05e27960) */
/* WARNING: Removing unreachable block (ram,0x05e27968) */
/* WARNING: Removing unreachable block (ram,0x05e279c0) */
/* WARNING: Removing unreachable block (ram,0x05e27a00) */

void Newtonsoft_Json_JsonSerializer__get_DateParseHandling(void)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint unaff_w19;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000008;
  
  FUN_05e27b14();
  if (in_stack_00000008._4_4_ == unaff_w21) {
    thunk_FUN_036aa1c8(PTR_DAT_07a0a110);
    uVar3 = thunk_FUN_0367fe20();
    puVar4 = PTR_DAT_07a15420;
  }
  else {
    if (unaff_w21 <= in_stack_00000008._4_4_) {
LAB_05e27988:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    sVar2 = *(short *)(unaff_x23 + (long)(int)in_stack_00000008._4_4_ * 2);
    if (sVar2 == 0x2b) {
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    else if (sVar2 == 0x2d) {
      if (unaff_w22 != 10) {
        thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
        uVar3 = thunk_FUN_0367fe20();
        uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a15428);
        FUN_05d84c94(uVar3,uVar5,0);
        goto LAB_05e27ab4;
      }
      if ((unaff_w19 >> 9 & 1) != 0) {
        thunk_FUN_036aa1c8(PTR_DAT_079fc228);
        uVar3 = thunk_FUN_0367fe20();
        uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a15430);
        FUN_05e272f8(uVar3,uVar5);
        goto LAB_05e27ab4;
      }
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
       (uVar1 = in_stack_00000008._4_4_ + 1, (int)uVar1 < (int)unaff_w21)) {
      if (unaff_w21 <= in_stack_00000008._4_4_) goto LAB_05e27988;
      if (*(short *)(unaff_x23 + (long)(int)in_stack_00000008._4_4_ * 2) == 0x30) {
        if (unaff_w21 <= uVar1) goto LAB_05e27988;
        if ((*(ushort *)(unaff_x23 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          unaff_w22 = 0x10;
        }
      }
    }
    FUN_05e27bd0(unaff_w22);
    thunk_FUN_036aa1c8(PTR_DAT_07a0a110);
    uVar3 = thunk_FUN_0367fe20();
    puVar4 = PTR_DAT_07a15418;
  }
  uVar5 = thunk_FUN_036aa1c8(puVar4);
  FUN_05dffe0c(uVar3,uVar5,0);
LAB_05e27ab4:
  uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a15438);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar3,uVar5);
}


