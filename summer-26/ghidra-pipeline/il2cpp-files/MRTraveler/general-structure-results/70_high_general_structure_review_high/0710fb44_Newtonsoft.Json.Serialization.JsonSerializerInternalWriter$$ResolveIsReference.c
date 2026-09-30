/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ResolveIsReference
ENTRY_POINT: 0710fb44
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_07100578();
  if (unaff_x20 != 0) {
    uVar1 = FUN_07000a6c();
    *(undefined8 *)(unaff_x19 + 0x90) = uVar1;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x90),uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


