/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasFlag
ENTRY_POINT: 074e6040
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasFlag(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 < 0.0) {
    return 0xffffffff;
  }
  if (param_1 <= 0.0) {
    if (param_1 == 0.0) {
      return 0;
    }
    thunk_FUN_04097b88(PTR_DAT_08f852c0);
    uVar1 = thunk_FUN_0406deb8();
    uVar2 = thunk_FUN_04097b88(PTR_DAT_08fa3398);
    FUN_0744bf0c(uVar1,uVar2,0);
    uVar2 = thunk_FUN_04097b88(PTR_DAT_08fa33a0);
                    /* WARNING: Subroutine does not return */
    FUN_04031750(uVar1,uVar2);
  }
  return 1;
}


