/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Formatting
ENTRY_POINT: 01bc9134
PROGRAM: vrfs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Formatting
               (float param_1,float param_2,float param_3)

{
  float in_w8;
  long unaff_x19;
  long lVar1;
  float fVar2;
  
  param_3 = param_3 * param_3;
  if (param_1 + param_2 * param_2 + param_3 <= in_w8) {
    return;
  }
  lVar1 = *(long *)(unaff_x19 + 0x50);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_04f1aa98(lVar1,0);
    FUN_04f1ab38(fVar2 + *(float *)(unaff_x19 + 0x10),in_w8 + *(float *)(unaff_x19 + 0x14),
                 param_3 + *(float *)(unaff_x19 + 0x18),lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


