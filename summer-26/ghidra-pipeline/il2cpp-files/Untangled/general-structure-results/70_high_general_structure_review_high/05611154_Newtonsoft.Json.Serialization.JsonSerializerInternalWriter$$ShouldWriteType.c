/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteType
ENTRY_POINT: 05611154
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  
  thunk_FUN_02f411dc();
  *(undefined8 *)(unaff_x20 + 8) = 0;
  thunk_FUN_02f411dc();
  if (unaff_w21 < 3) {
    uVar1 = 0;
  }
  else {
    if (*(uint *)(unaff_x19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  thunk_FUN_02f411dc();
  *(long *)(unaff_x20 + 0x18) = unaff_x19;
  thunk_FUN_02f411dc((long *)(unaff_x20 + 0x18));
  return;
}


