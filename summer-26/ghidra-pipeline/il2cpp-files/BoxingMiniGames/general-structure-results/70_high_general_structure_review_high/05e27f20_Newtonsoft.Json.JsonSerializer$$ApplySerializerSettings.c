/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ApplySerializerSettings
ENTRY_POINT: 05e27f20
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_JsonSerializer__ApplySerializerSettings(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  uint unaff_w19;
  int unaff_w20;
  int *unaff_x21;
  int unaff_w22;
  int unaff_w26;
  int unaff_w27;
  undefined *puVar3;
  
  if (((unaff_w19 >> 0xc & 1) == 0) || (unaff_w22 <= in_w8)) {
    *unaff_x21 = in_w8;
    if ((unaff_w19 >> 10 & 1) == 0) {
      if ((unaff_w19 >> 0xb & 1) == 0) {
        if (param_1 != 0x80000000) {
          unaff_w27 = 1;
        }
        if ((((unaff_w19 >> 9 & 1) != 0) || (unaff_w20 != 10)) || (unaff_w27 != 0)) {
LAB_05e27fa4:
          if (unaff_w20 != 10) {
            unaff_w26 = 1;
          }
          return param_1 * unaff_w26;
        }
        thunk_FUN_036aa1c8(PTR_DAT_079fc228);
        uVar1 = thunk_FUN_0367fe20();
        puVar3 = PTR_DAT_07a11700;
      }
      else {
        if (param_1 < 0x10000) goto LAB_05e27fa4;
        thunk_FUN_036aa1c8(PTR_DAT_079fc228);
        uVar1 = thunk_FUN_0367fe20();
        puVar3 = PTR_DAT_07a116e0;
      }
    }
    else {
      if (param_1 < 0x100) goto LAB_05e27fa4;
      thunk_FUN_036aa1c8(PTR_DAT_079fc228);
      uVar1 = thunk_FUN_0367fe20();
      puVar3 = PTR_DAT_07a116d0;
    }
    uVar2 = thunk_FUN_036aa1c8(puVar3);
    FUN_05e272f8(uVar1,uVar2);
  }
  else {
    thunk_FUN_036aa1c8(PTR_DAT_07a0a110);
    uVar1 = thunk_FUN_0367fe20();
    uVar2 = thunk_FUN_036aa1c8(PTR_DAT_07a15038);
    FUN_05dffe0c(uVar1,uVar2,0);
  }
  uVar2 = thunk_FUN_036aa1c8(PTR_DAT_07a15440);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar1,uVar2);
}


