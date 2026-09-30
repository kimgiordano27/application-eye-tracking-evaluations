/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 0768a41c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(undefined2 *param_1)

{
  undefined1 in_CY;
  ulong in_x9;
  long unaff_x20;
  uint unaff_w22;
  long unaff_x26;
  long unaff_x29;
  
  do {
    if ((bool)in_CY) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
LAB_0768a4f4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    in_x9 = in_x9 - 1;
    *param_1 = *(undefined2 *)(unaff_x20 + (in_x9 & 0xffffffff) * 2);
    if (in_x9 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_0768a4f4;
    }
    in_CY = 0x43 < unaff_w22;
    param_1 = param_1 + 1;
  } while( true );
}


