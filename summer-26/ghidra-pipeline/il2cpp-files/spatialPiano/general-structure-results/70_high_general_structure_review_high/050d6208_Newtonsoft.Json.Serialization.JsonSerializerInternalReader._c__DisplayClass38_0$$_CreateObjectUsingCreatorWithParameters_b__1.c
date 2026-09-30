/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c__DisplayClass38_0$$<CreateObjectUsingCreatorWithParameters>b__1
ENTRY_POINT: 050d6208
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


float Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0__<CreateObjectUsingCreatorWithParameters>b__1
                (float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  
  if ((DAT_06bb9bb2 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ce7a0);
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb9bb2 = 1;
  }
  puVar1 = PTR_DAT_067ce7a0;
  if (param_3 < param_2) {
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0346cd94(param_2,param_3,*(undefined8 *)puVar1);
  }
  if ((param_2 <= param_1) && (param_2 = param_3, param_1 <= param_3)) {
    param_2 = param_1;
  }
  return param_2;
}


