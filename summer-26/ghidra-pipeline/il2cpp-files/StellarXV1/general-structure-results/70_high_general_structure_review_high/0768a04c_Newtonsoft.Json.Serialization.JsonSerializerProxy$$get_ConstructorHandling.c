/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ConstructorHandling
ENTRY_POINT: 0768a04c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ConstructorHandling(undefined2 *param_1)

{
  undefined1 in_ZR;
  int in_w9;
  ulong uVar1;
  undefined2 unaff_w19;
  long unaff_x20;
  uint unaff_w22;
  long unaff_x26;
  long unaff_x29;
  
  while (!(bool)in_ZR) {
    in_w9 = in_w9 + -1;
    *param_1 = unaff_w19;
    param_1 = param_1 + 1;
    in_ZR = in_w9 == 0;
  }
  if (0 < (int)unaff_w22) {
    uVar1 = (ulong)unaff_w22;
    do {
      if (0x42 < unaff_w22) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        goto LAB_0768a138;
      }
      uVar1 = uVar1 - 1;
      *param_1 = *(undefined2 *)(unaff_x20 + (uVar1 & 0xffffffff) * 2);
      param_1 = param_1 + 1;
    } while (uVar1 != 0);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_0768a138:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


