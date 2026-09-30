/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$DeserializeInternal
ENTRY_POINT: 02754894
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__DeserializeInternal
               (uint param_1,long param_2,uint param_3,uint param_4)

{
  short sVar1;
  bool in_CY;
  int in_w8;
  
  if (!in_CY) {
    sVar1 = (short)(param_1 / 10);
    *(short *)(param_2 + (long)in_w8 * 2) = (short)param_1 + sVar1 * -10 + 0x30;
    if (param_4 < param_3) {
      *(short *)(param_2 + (long)(int)param_4 * 2) = sVar1 + 0x30;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


