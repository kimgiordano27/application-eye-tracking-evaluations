/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.cctor
ENTRY_POINT: 079d8748
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings___cctor(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int in_w9;
  long in_x10;
  
  iVar1 = 0x10;
  if (param_1 != 0) {
    iVar1 = in_w9;
  }
  if (param_3 <= iVar1) {
    param_3 = iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x079d8768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x10 + 0x298))(param_2,param_3,*(undefined8 *)(in_x10 + 0x2a0));
  return;
}


