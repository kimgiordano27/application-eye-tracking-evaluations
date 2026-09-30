/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 07a4d4a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString(void)

{
  bool in_ZR;
  bool in_CY;
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  
  if (in_CY && !in_ZR) {
    *(undefined8 *)(unaff_x20 + 8) = *(undefined8 *)(unaff_x19 + 0x28);
    thunk_FUN_044bb4b4();
    if (unaff_w21 < 3) {
      uVar1 = 0;
    }
    else {
      if (*(uint *)(unaff_x19 + 0x18) < 3) goto LAB_07a4d518;
      uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
    }
    *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
    thunk_FUN_044bb4b4();
    *(long *)(unaff_x20 + 0x18) = unaff_x19;
    thunk_FUN_044bb4b4((long *)(unaff_x20 + 0x18));
    return;
  }
LAB_07a4d518:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


