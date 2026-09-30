/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MaxDepth
ENTRY_POINT: 074c5160
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MaxDepth
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  
  *(undefined8 *)(unaff_x20 + 8) = param_2;
  thunk_FUN_03f86000();
  if (unaff_w21 < 3) {
    uVar1 = 0;
  }
  else {
    if (*(uint *)(unaff_x19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  thunk_FUN_03f86000();
  *(long *)(unaff_x20 + 0x18) = unaff_x19;
  thunk_FUN_03f86000((long *)(unaff_x20 + 0x18));
  return;
}


