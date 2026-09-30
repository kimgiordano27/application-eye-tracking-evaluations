/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_FloatParseHandling
ENTRY_POINT: 05e27914
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__get_FloatParseHandling(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint unaff_w19;
  int *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w25;
  long unaff_x26;
  int unaff_w27;
  undefined8 in_stack_00000008;
  
  lVar1 = FUN_05e27bd0(unaff_w22);
  if (in_stack_00000008._4_4_ == unaff_w25) {
    thunk_FUN_036aa1c8(PTR_DAT_07a0a110);
    uVar2 = thunk_FUN_0367fe20();
    puVar3 = PTR_DAT_07a15418;
  }
  else {
    if (((unaff_w19 >> 0xc & 1) == 0) || (unaff_w21 <= in_stack_00000008._4_4_)) {
      *unaff_x20 = in_stack_00000008._4_4_;
      if (lVar1 != -0x8000000000000000) {
        unaff_w27 = 1;
      }
      if (((unaff_w22 != 10) || ((unaff_w19 >> 9 & 1) != 0)) || (unaff_w27 != 0)) {
        if (unaff_w22 != 10) {
          unaff_x26 = 1;
        }
        return lVar1 * unaff_x26;
      }
      thunk_FUN_036aa1c8(PTR_DAT_079fc228);
      uVar2 = thunk_FUN_0367fe20();
      uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a11720);
      FUN_05e272f8(uVar2,uVar4);
      goto LAB_05e27ab4;
    }
    thunk_FUN_036aa1c8(PTR_DAT_07a0a110);
    uVar2 = thunk_FUN_0367fe20();
    puVar3 = PTR_DAT_07a15038;
  }
  uVar4 = thunk_FUN_036aa1c8(puVar3);
  FUN_05dffe0c(uVar2,uVar4,0);
LAB_05e27ab4:
  uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a15438);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar2,uVar4);
}


