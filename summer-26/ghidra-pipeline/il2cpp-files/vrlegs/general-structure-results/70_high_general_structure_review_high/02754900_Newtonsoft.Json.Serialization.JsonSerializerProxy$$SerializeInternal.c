/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$SerializeInternal
ENTRY_POINT: 02754900
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__SerializeInternal
               (uint param_1,long param_2,uint param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  short in_w8;
  int in_w9;
  uint in_w10;
  short in_w11;
  short in_w12;
  
  *(short *)(param_2 + (long)in_w9 * 2) = in_w12 + 0x30;
  if (in_w10 < param_3) {
    sVar2 = (short)(param_1 / 100);
    *(short *)(param_2 + (long)(int)in_w10 * 2) = in_w11 + sVar2 * in_w8 + 0x30;
    if (param_4 + 1 < param_3) {
      sVar1 = (short)(param_1 / 1000);
      *(short *)(param_2 + (long)(int)(param_4 + 1) * 2) = sVar2 + sVar1 * -10 + 0x30;
      if (param_4 < param_3) {
        *(short *)(param_2 + (long)(int)param_4 * 2) = sVar1 + 0x30;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


