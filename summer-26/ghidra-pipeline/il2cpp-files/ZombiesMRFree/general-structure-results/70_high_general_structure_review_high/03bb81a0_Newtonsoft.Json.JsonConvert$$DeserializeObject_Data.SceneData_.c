/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<Data.SceneData>
ENTRY_POINT: 03bb81a0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_JsonConvert__DeserializeObject<Data_SceneData>(long param_1)

{
  ulong uVar1;
  long unaff_x21;
  undefined4 unaff_w22;
  
  if (param_1 == 0) {
    FUN_02fe925c(PTR_DAT_06f90c80);
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      FUN_02feb320();
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06f90c80 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar1 = FUN_0644a210(unaff_w22,0);
  if ((uVar1 & 1) == 0) {
    FUN_0644a5c4(&stack0x0000001c,0);
    FUN_0474d998();
  }
  else {
    FUN_03d06b30();
  }
  return ZEXT816(0);
}


