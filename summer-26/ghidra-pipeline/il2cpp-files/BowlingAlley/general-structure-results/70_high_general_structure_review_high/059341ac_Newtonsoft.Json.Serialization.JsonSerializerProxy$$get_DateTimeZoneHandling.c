/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateTimeZoneHandling
ENTRY_POINT: 059341ac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateTimeZoneHandling
               (uint param_1,int param_2,uint *param_3)

{
  uint uVar1;
  
  param_1 = param_1 & 0xffff;
  uVar1 = param_1 - 0x30;
  if (9 < uVar1) {
    if (param_1 - 0x41 < 0x1a) {
      uVar1 = param_1 - 0x37;
    }
    else {
      if (0x19 < param_1 - 0x61) {
        *param_3 = 0xffffffff;
        return false;
      }
      uVar1 = param_1 - 0x57;
    }
  }
  *param_3 = uVar1;
  return (int)uVar1 < param_2;
}


