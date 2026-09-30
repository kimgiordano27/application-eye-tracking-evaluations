/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 032a0118
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(undefined8 param_1)

{
  bool in_ZR;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  if (!in_ZR) {
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    unaff_x21 = (undefined8 *)(unaff_x22 + 0x20);
  }
  *unaff_x21 = param_1;
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + -1;
  return;
}


