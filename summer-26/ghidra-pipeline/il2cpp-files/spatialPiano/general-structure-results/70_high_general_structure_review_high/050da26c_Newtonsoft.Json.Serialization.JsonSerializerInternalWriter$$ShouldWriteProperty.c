/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteProperty
ENTRY_POINT: 050da26c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteProperty(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  
  *(undefined1 *)(unaff_x23 + 0xf36) = 1;
  if (unaff_x20 != 0) {
    FUN_04f6c4a0();
  }
  uVar1 = FUN_041850f8();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  *unaff_x19 = uVar2;
  return uVar1 & 1;
}


