/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 0717d0cc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0x170));
  *(undefined1 *)(unaff_x23 + 0xd14) = 1;
  if (unaff_x20 != 0) {
    FUN_06fd0380();
  }
  uVar1 = FUN_06245dc4();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  *unaff_x19 = uVar2;
  return uVar1 & 1;
}


