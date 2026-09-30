/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateFormatString
ENTRY_POINT: 066ec1b4
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


long Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_0848cc10);
    *(undefined1 *)(unaff_x20 + 0x71a) = 1;
  }
  plVar3 = (long *)(unaff_x19 + 0x20);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848cc10);
    FUN_0679343c(uVar2,0);
    FUN_03ac3bf0(plVar3,uVar2,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}


