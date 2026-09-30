/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 04f35e48
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
  uVar1 = FUN_03f4bd00();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  *unaff_x19 = uVar2;
  return uVar1 & 1;
}


