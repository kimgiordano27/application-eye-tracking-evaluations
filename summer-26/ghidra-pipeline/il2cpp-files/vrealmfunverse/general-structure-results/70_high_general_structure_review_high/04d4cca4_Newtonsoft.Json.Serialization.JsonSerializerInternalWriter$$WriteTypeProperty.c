/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 04d4cca4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty
               (undefined8 param_1,int param_2)

{
  bool in_ZR;
  uint uVar1;
  long unaff_x19;
  
  if (in_ZR) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(unaff_x19 + 0x20) = param_2 + 1;
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = FUN_04c045f0(*(long *)(unaff_x19 + 0x18),param_2,0);
    uVar1 = uVar1 & 0xffff;
  }
  return uVar1;
}


