/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_CheckAdditionalContent
ENTRY_POINT: 0178b050
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_CheckAdditionalContent(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  uint in_w8;
  long unaff_x20;
  uint unaff_w21;
  
  do {
    if (in_w8 <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194(param_1);
    }
    plVar1 = *(long **)(unaff_x20 + (long)(int)unaff_w21 * 8 + 0x20);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar2 = (**(code **)(*plVar1 + 0x2c8))();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    in_w8 = *(uint *)(unaff_x20 + 0x18);
    unaff_w21 = unaff_w21 + 1;
    param_1 = 1;
  } while ((int)unaff_w21 < (int)in_w8);
  return 1;
}


