/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 01bb9688
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5)

{
  long unaff_x20;
  long lVar1;
  
  FUN_01bb87e4(param_1,param_5 & 1,3);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    FUN_01bb8880();
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      FUN_01bbb560(*(long *)(unaff_x20 + 0x10),param_4);
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        FUN_01bbb560(*(long *)(unaff_x20 + 0x10),~param_4);
        lVar1 = *(long *)(unaff_x20 + 0x10);
        if (lVar1 != 0) {
          FUN_031dd848();
          *(uint *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + param_4;
          FUN_01bb9618();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


