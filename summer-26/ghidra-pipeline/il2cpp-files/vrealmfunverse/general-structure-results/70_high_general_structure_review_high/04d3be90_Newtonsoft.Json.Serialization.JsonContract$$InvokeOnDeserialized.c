/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnDeserialized
ENTRY_POINT: 04d3be90
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized(ulong param_1)

{
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  
  while( true ) {
    if (param_1 <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    (**(code **)(*unaff_x20 + 0x208))();
    unaff_x23 = unaff_x23 + -1;
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x23 == 0) break;
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
  }
  return;
}


