/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 0768a00c
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameAssemblyFormatHandling
               (undefined2 *param_1)

{
  undefined2 *puVar1;
  int in_w9;
  ulong in_x10;
  undefined2 unaff_w19;
  long unaff_x20;
  uint unaff_w22;
  long unaff_x26;
  long unaff_x29;
  
  do {
    if (0x42 < unaff_w22) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      goto LAB_0768a138;
    }
    in_x10 = in_x10 - 1;
    puVar1 = param_1 + 1;
    *param_1 = *(undefined2 *)(unaff_x20 + (in_x10 & 0xffffffff) * 2);
    param_1 = puVar1;
  } while (in_x10 != 0);
  if (0 < in_w9) {
    do {
      in_w9 = in_w9 + -1;
      *puVar1 = unaff_w19;
      puVar1 = puVar1 + 1;
    } while (in_w9 != 0);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_0768a138:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


