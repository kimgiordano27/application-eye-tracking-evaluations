/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_MetadataPropertyHandling
ENTRY_POINT: 066ebca0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling(int param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  if ((*(byte *)(unaff_x19 + 0x715) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08493f90);
    *(undefined1 *)(unaff_x19 + 0x715) = 1;
  }
  if ((param_1 < 0x7feffffd) && (0x7feffffd < (uint)(param_1 << 1))) {
    return 0x7feffffd;
  }
  if (*(int *)(*(long *)PTR_DAT_08493f90 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_066ebb10(param_1 << 1);
  return uVar1;
}


