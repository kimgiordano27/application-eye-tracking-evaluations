/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Context
ENTRY_POINT: 05e28964
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Context(undefined2 *param_1)

{
  undefined1 in_ZR;
  undefined2 *puVar1;
  int in_w9;
  ulong uVar2;
  undefined2 unaff_w19;
  long unaff_x20;
  uint unaff_w22;
  long unaff_x26;
  long unaff_x29;
  
  while( true ) {
    *param_1 = unaff_w19;
    if ((bool)in_ZR) break;
    in_w9 = in_w9 + -1;
    in_ZR = in_w9 == 0;
    param_1 = param_1 + 1;
  }
  if (0 < (int)unaff_w22) {
    uVar2 = (ulong)unaff_w22;
    puVar1 = param_1 + 1;
    do {
      if (0x43 < unaff_w22) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        goto LAB_05e28a54;
      }
      uVar2 = uVar2 - 1;
      *puVar1 = *(undefined2 *)(unaff_x20 + (uVar2 & 0xffffffff) * 2);
      puVar1 = puVar1 + 1;
    } while (uVar2 != 0);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_05e28a54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


