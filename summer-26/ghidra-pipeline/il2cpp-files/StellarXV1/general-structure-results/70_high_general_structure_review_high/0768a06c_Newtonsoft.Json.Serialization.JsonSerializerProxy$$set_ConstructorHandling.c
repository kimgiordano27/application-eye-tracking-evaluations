/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ConstructorHandling
ENTRY_POINT: 0768a06c
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ConstructorHandling(undefined2 *param_1)

{
  undefined1 in_ZR;
  ulong in_x9;
  undefined2 in_w10;
  long unaff_x20;
  uint unaff_w22;
  long unaff_x26;
  long unaff_x29;
  
  do {
    *param_1 = in_w10;
    if ((bool)in_ZR) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
LAB_0768a138:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (0x42 < unaff_w22) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      goto LAB_0768a138;
    }
    in_x9 = in_x9 - 1;
    in_ZR = in_x9 == 0;
    in_w10 = *(undefined2 *)(unaff_x20 + (in_x9 & 0xffffffff) * 2);
    param_1 = param_1 + 1;
  } while( true );
}


